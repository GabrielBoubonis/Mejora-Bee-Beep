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
    while( block.isValid() )
    {
      bubble_rect = bubble_rect.united( doc_layout->blockBoundingRect( block ) );
      if( block == last_block )
        break;
      block = block.next();
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
    painter.drawRoundedRect( bubble_rect, radius, radius );
  }
}
