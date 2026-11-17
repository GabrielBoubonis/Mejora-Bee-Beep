//////////////////////////////////////////////////////////////////////
//
// This file is part of BeeBEEP.
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
//////////////////////////////////////////////////////////////////////

#include "GuiMessageNotification.h"
#include "BeeUtils.h"
#include "Settings.h"
#include "User.h"


GuiMessageNotification::GuiMessageNotification( QWidget* parent )
 : QWidget( parent, Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint ), m_chatId( ID_INVALID )
{
  setObjectName( "GuiMessageNotification" );
  setAttribute( Qt::WA_ShowWithoutActivating, true );
  setAttribute( Qt::WA_TranslucentBackground, true );
  setFixedWidth( 380 );
  setCursor( Qt::PointingHandCursor );
  setAccessibleName( tr( "New message" ) );

  mp_lAvatar = new QLabel( this );
  mp_lAvatar->setFixedSize( 48, 48 );

  mp_lTitle = new QLabel( this );
  mp_lTitle->setTextFormat( Qt::PlainText );
  QFont title_font = font();
  title_font.setPointSize( 12 );
  title_font.setBold( true );
  mp_lTitle->setFont( title_font );

  mp_lInfo = new QLabel( this );
  mp_lInfo->setTextFormat( Qt::PlainText );

  mp_lText = new QLabel( this );
  mp_lText->setTextFormat( Qt::PlainText );
  mp_lText->setWordWrap( true );
  QFont text_font = font();
  text_font.setPointSize( 11 );
  mp_lText->setFont( text_font );

  mp_pbReply = new QPushButton( tr( "Reply" ), this );
  mp_pbReply->setObjectName( "GuiNotificationReplyButton" );
  mp_pbReply->setMinimumHeight( 36 );
  mp_pbReply->setMinimumWidth( 120 );
  mp_pbReply->setCursor( Qt::PointingHandCursor );
  connect( mp_pbReply, SIGNAL( clicked() ), this, SLOT( openChat() ) );

  mp_tbClose = new QToolButton( this );
  mp_tbClose->setAutoRaise( true );
  mp_tbClose->setIconSize( QSize( 18, 18 ) );
  mp_tbClose->setToolTip( tr( "Close" ) );
  mp_tbClose->setAccessibleName( tr( "Close" ) );
  connect( mp_tbClose, SIGNAL( clicked() ), this, SLOT( closeNotification() ) );

  QVBoxLayout* text_layout = new QVBoxLayout;
  text_layout->setSpacing( 2 );
  text_layout->setContentsMargins( 0, 0, 0, 0 );
  QHBoxLayout* title_layout = new QHBoxLayout;
  title_layout->setContentsMargins( 0, 0, 0, 0 );
  title_layout->addWidget( mp_lTitle, 1 );
  title_layout->addWidget( mp_tbClose, 0, Qt::AlignTop );
  text_layout->addLayout( title_layout );
  text_layout->addWidget( mp_lInfo );
  text_layout->addSpacing( 4 );
  text_layout->addWidget( mp_lText );

  QHBoxLayout* top_layout = new QHBoxLayout;
  top_layout->setSpacing( 12 );
  top_layout->setContentsMargins( 0, 0, 0, 0 );
  top_layout->addWidget( mp_lAvatar, 0, Qt::AlignTop );
  top_layout->addLayout( text_layout, 1 );

  QHBoxLayout* button_layout = new QHBoxLayout;
  button_layout->setContentsMargins( 0, 0, 0, 0 );
  button_layout->addStretch( 1 );
  button_layout->addWidget( mp_pbReply );

  QVBoxLayout* main_layout = new QVBoxLayout( this );
  main_layout->setContentsMargins( 22, 16, 16, 16 );
  main_layout->setSpacing( 12 );
  main_layout->addLayout( top_layout );
  main_layout->addLayout( button_layout );

  mp_timerHide = new QTimer( this );
  mp_timerHide->setSingleShot( true );
  connect( mp_timerHide, SIGNAL( timeout() ), this, SLOT( closeNotification() ) );
}

void GuiMessageNotification::showMessage( VNumber chat_id, const User& u, const QString& chat_title, const QString& preview_text, int unread_messages )
{
  m_chatId = chat_id;

  QString text_color = Bee::themeColor( Bee::ThemeText );
  QString muted_color = Bee::themeColor( Bee::ThemeMutedText );
  mp_lTitle->setStyleSheet( QString( "color: %1; background: transparent;" ).arg( text_color ) );
  mp_lText->setStyleSheet( QString( "color: %1; background: transparent;" ).arg( text_color ) );
  mp_lInfo->setStyleSheet( QString( "color: %1; background: transparent;" ).arg( muted_color ) );
  mp_pbReply->setStyleSheet( QString( "QPushButton#GuiNotificationReplyButton { background-color: %1; color: %2; border: none; border-radius: 18px; min-height: 38px; max-height: 38px;"
                                      " padding: 0px 22px; font-weight: 700; font-size: 11pt; }"
                                      "QPushButton#GuiNotificationReplyButton:hover { background-color: %3; }" )
                               .arg( Bee::themeColor( Bee::ThemeAccent ), Bee::themeColor( Bee::ThemeAccentText ), Bee::themeColor( Bee::ThemeAccentHover ) ) );
  mp_tbClose->setIcon( Bee::themeIcon( "x", Bee::ThemeMutedText ) );

  mp_lAvatar->setPixmap( Bee::avatarForUser( u, QSize( 48, 48 ), Settings::instance().showUserPhoto() ) );
  mp_lTitle->setText( Bee::userNameToShow( u, false ) );

  QString info = chat_title.isEmpty() ? tr( "New message" ) : chat_title;
  if( unread_messages > 1 )
    info += QString( "  ·  %1" ).arg( tr( "%1 new messages" ).arg( unread_messages ) );
  mp_lInfo->setText( info );

  QString txt = preview_text.simplified();
  if( txt.size() > 160 )
    txt = txt.left( 157 ).trimmed() + QLatin1String( "..." );
  mp_lText->setText( txt );
  mp_lText->setVisible( !txt.isEmpty() );

  adjustSize();
  placeOnScreen();
  if( !isVisible() )
  {
    setWindowOpacity( 0.0 );
    show();
    QPropertyAnimation* fade_in = new QPropertyAnimation( this, "windowOpacity", this );
    fade_in->setDuration( 220 );
    fade_in->setStartValue( 0.0 );
    fade_in->setEndValue( 1.0 );
    fade_in->start( QAbstractAnimation::DeleteWhenStopped );
  }
  else
    update();
  raise();
  // enough time to read it calmly; it stays while the mouse is over it
  mp_timerHide->start( 12000 );
}

void GuiMessageNotification::placeOnScreen()
{
  QScreen* screen = QGuiApplication::primaryScreen();
  if( !screen )
    return;
  QRect available = screen->availableGeometry();
  move( available.right() - width() - 16, available.bottom() - height() - 16 );
}

void GuiMessageNotification::paintEvent( QPaintEvent* )
{
  QPainter p( this );
  p.setRenderHint( QPainter::Antialiasing, true );
  QRectF r = QRectF( rect() ).adjusted( 0.5, 0.5, -0.5, -0.5 );
  QPainterPath path;
  path.addRoundedRect( r, 14, 14 );
  p.fillPath( path, QColor( Bee::themeColor( Bee::ThemePanel ) ) );
  p.setPen( QPen( QColor( Bee::themeColor( Bee::ThemeBorder ) ), 1 ) );
  p.drawPath( path );
  // honey bar on the left: it is BeeBEEP
  p.setClipPath( path );
  p.fillRect( QRectF( 0, 0, 6, height() ), QColor( Bee::themeColor( Bee::ThemeAccent ) ) );
}

void GuiMessageNotification::mouseReleaseEvent( QMouseEvent* e )
{
  if( e->button() == Qt::LeftButton )
    openChat();
  QWidget::mouseReleaseEvent( e );
}

void GuiMessageNotification::enterEvent( QEvent* e )
{
  mp_timerHide->stop();
  QWidget::enterEvent( e );
}

void GuiMessageNotification::leaveEvent( QEvent* e )
{
  mp_timerHide->start( 6000 );
  QWidget::leaveEvent( e );
}

void GuiMessageNotification::openChat()
{
  VNumber chat_id = m_chatId;
  closeNotification();
  emit openChatRequest( chat_id );
}

void GuiMessageNotification::closeNotification()
{
  mp_timerHide->stop();
  hide();
}
