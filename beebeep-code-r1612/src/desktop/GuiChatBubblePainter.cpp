//////////////////////////////////////////////////////////////////////
//
// BeeBEEP Copyright (C) 2010-2026 Marco Mastroddi
//
// BeeBEEP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// BeeBEEP is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with BeeBEEP. If not, see <http://www.gnu.org/licenses/>.
//
// Author: Marco Mastroddi <marco.mastroddi(AT)gmail.com>
//
// $Id: GuiChatBubblePainter.cpp 1592 2026-08-11 10:14:22Z mastroddi $
//
//////////////////////////////////////////////////////////////////////

#include "GuiChatBubblePainter.h"
#include "Settings.h"


QHash<QString, GuiChatBubblePainter::FileTransferInfo> GuiChatBubblePainter::s_fileTransfers;

QString GuiChatBubblePainter::fileTransferKey( VNumber user_id, VNumber file_id )
{
  return QString( "%1-%2" ).arg( user_id ).arg( file_id );
}

void GuiChatBubblePainter::setFileTransferProgress( const QString& key, int percent )
{
  FileTransferInfo& info = s_fileTransfers[ key ];
  info.state = FileTransferRunning;
  info.percent = qBound( 0, percent, 100 );
}

void GuiChatBubblePainter::setFileTransferStopped( const QString& key, bool completed, const QString& message, const QString& file_path )
{
  FileTransferInfo& info = s_fileTransfers[ key ];
  info.state = completed ? FileTransferCompleted : FileTransferFailed;
  info.percent = completed ? 100 : info.percent;
  info.message = message;
  info.filePath = file_path;
}

bool GuiChatBubblePainter::fileTransferInfo( const QString& key, FileTransferInfo* info )
{
  if( !s_fileTransfers.contains( key ) )
    return false;
  if( info )
    *info = s_fileTransfers.value( key );
  return true;
}

GuiChatBubblePainter::GuiChatBubblePainter( QTextEdit* text_edit )
 : QObject( text_edit ), mp_textEdit( text_edit )
{
  setObjectName( "GuiChatBubblePainter" );
}

void GuiChatBubblePainter::install( QTextEdit* text_edit )
{
  if( !text_edit || text_edit->findChild<GuiChatBubblePainter*>( "GuiChatBubblePainter", Qt::FindDirectChildrenOnly ) )
    return;
  GuiChatBubblePainter* painter = new GuiChatBubblePainter( text_edit );
  text_edit->viewport()->installEventFilter( painter );
}

bool GuiChatBubblePainter::eventFilter( QObject* obj, QEvent* e )
{
  // Bubbles are painted first, then QTextEdit draws the text over them
  if( e->type() == QEvent::Paint && obj == mp_textEdit->viewport() && Settings::instance().chatUseBubbles() )
    paintBubbles();
  return false;
}

void GuiChatBubblePainter::paintBubbles()
{
  QTextDocument* doc = mp_textEdit->document();
  QAbstractTextDocumentLayout* doc_layout = doc ? doc->documentLayout() : Q_NULLPTR;
  if( !doc_layout )
    return;

  QWidget* viewport = mp_textEdit->viewport();
  QRectF visible_rect( viewport->rect() );
  qreal dx = -mp_textEdit->horizontalScrollBar()->value();
  qreal dy = -mp_textEdit->verticalScrollBar()->value();
  qreal radius = 12.0;

  QPainter painter( viewport );
  painter.setRenderHint( QPainter::Antialiasing, true );
  painter.setPen( Qt::NoPen );

  foreach( QTextFrame* frame, doc->rootFrame()->childFrames() )
  {
    QTextTable* table = qobject_cast<QTextTable*>( frame );
    if( !table || table->rows() < 1 || table->columns() < 1 )
      continue;

    QTextTableFormat table_format = table->format();
    QBrush bubble_brush = table_format.borderBrush();
    if( bubble_brush.style() == Qt::NoBrush )
      continue;

    // The frame bounding rect of an aligned table is not reliable: use the text blocks of the cell
    QTextTableCell cell = table->cellAt( 0, 0 );
    QTextBlock block = cell.firstCursorPosition().block();
    QTextBlock last_block = cell.lastCursorPosition().block();
    QRectF bubble_rect;
    QRectF cell_rect; // width of the bubble: only the blocks of the cell (the blocks of an inner table can be wider)
    while( block.isValid() )
    {
      QRectF block_rect = doc_layout->blockBoundingRect( block );
      bubble_rect = bubble_rect.united( block_rect );
      if( QTextCursor( block ).currentFrame() == table )
        cell_rect = cell_rect.united( block_rect );
      if( block == last_block )
        break;
      block = block.next();
    }
    if( !cell_rect.isEmpty() )
    {
      bubble_rect.setLeft( cell_rect.left() );
      bubble_rect.setRight( cell_rect.right() );
    }

    if( bubble_rect.isEmpty() )
      continue;

    qreal padding = table_format.cellPadding();
    bubble_rect.adjust( -padding, -padding, padding, padding );
    bubble_rect.translate( dx, dy );
    if( bubble_rect.bottom() < visible_rect.top() )
      continue;
    if( bubble_rect.top() > visible_rect.bottom() )
      break; // tables are in document order

    painter.setBrush( bubble_brush.color() );
    int cell_padding = qRound( padding );
    if( cell_padding == 12 || cell_padding == 8 )
    {
      // File card (12) or file status chip (8): dashed border with the color of the type of the file,
      // that is the background of the first colored text (the label "PDF", the bar of the chip)
      QColor border_color;
      QString transfer_key;
      QTextBlock first_block = cell.firstCursorPosition().block();
      for( QTextBlock::iterator it = first_block.begin(); !it.atEnd(); ++it )
      {
        QTextCharFormat char_format = it.fragment().charFormat();
        foreach( QString anchor_name, char_format.anchorNames() )
        {
          if( anchor_name.startsWith( QLatin1String( "beeft-" ) ) )
            transfer_key = anchor_name.mid( 6 );
        }
        if( char_format.background().style() != Qt::NoBrush )
        {
          border_color = char_format.background().color();
          break;
        }
      }
      if( border_color.isValid() )
      {
        QPen dashed_pen( border_color, 1.6 );
        dashed_pen.setDashPattern( QVector<qreal>() << 4 << 3 );
        painter.setPen( dashed_pen );
        qreal card_radius = cell_padding == 12 ? radius : 9.0;
        painter.drawRoundedRect( bubble_rect.adjusted( 0.8, 0.8, -0.8, -0.8 ), card_radius, card_radius );
        painter.setPen( Qt::NoPen );

        // Green bar of the transfer at the bottom of the card: it fills up until the file is sent
        FileTransferInfo transfer_info;
        if( !transfer_key.isEmpty() && fileTransferInfo( transfer_key, &transfer_info ) )
        {
          QRectF track_rect( bubble_rect.left() + 12, bubble_rect.bottom() - 8, bubble_rect.width() - 24, 5 );
          QColor track_color( Settings::instance().useDarkStyle() ? "#ffffff" : "#000000" );
          track_color.setAlpha( 28 );
          painter.setBrush( track_color );
          painter.drawRoundedRect( track_rect, 2.5, 2.5 );
          QColor bar_color( transfer_info.state == FileTransferFailed ? "#d93025" : "#1fa64a" );
          qreal bar_width = transfer_info.state == FileTransferFailed ? track_rect.width() : track_rect.width() * transfer_info.percent / 100.0;
          if( bar_width > 0.5 )
          {
            painter.setBrush( bar_color );
            painter.drawRoundedRect( QRectF( track_rect.left(), track_rect.top(), qMax( 5.0, bar_width ), track_rect.height() ), 2.5, 2.5 );
          }
        }
        continue;
      }
    }
    painter.drawRoundedRect( bubble_rect, radius, radius );
  }
}
