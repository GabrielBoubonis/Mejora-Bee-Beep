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
// $Id: GuiChatMessage.cpp 1592 2026-08-11 10:14:22Z mastroddi $
//
//////////////////////////////////////////////////////////////////////

#include "BeeUtils.h"
#include "Chat.h"
#include "GuiChatMessage.h"
#include "ChatMessage.h"
#include "Settings.h"
#include "Settings.h"
#include "UserManager.h"


static QString textImportantPrefix()
{
  return QString( "<font color=red><b>!!</b></font> " );
}

static QString textImportantSuffix()
{
  return QString( "" );
}

QString GuiChatMessage::datetimestampToString( const ChatMessage& cm, bool show_timestamp, bool show_datestamp )
{
  QString date_time_stamp_format = "";

  if( show_datestamp || cm.timestamp().date() != QDate::currentDate() )
  {
//: Date format: do not change letters. More info in https://doc.qt.io/qt-5/qdatetime.html#toString
    date_time_stamp_format += QT_TRANSLATE_NOOP( "Date", "yyyy-MM-dd" );
  }

  if( show_timestamp )
  {
    if( !date_time_stamp_format.isEmpty() )
      date_time_stamp_format += QString( " " );
    if( Settings::instance().useMessageTimestampWithAP() )
    {
//: Time format: do not change letters. More info in https://doc.qt.io/qt-5/qdatetime.html#toString
      date_time_stamp_format += QT_TRANSLATE_NOOP( "Date", "h:mm:ss ap" );
    }
    else
    {
//: Time format: do not change letters. More info in https://doc.qt.io/qt-5/qdatetime.html#toString
      date_time_stamp_format += QT_TRANSLATE_NOOP( "Date", "hh:mm:ss" );
    }
  }

  return date_time_stamp_format.isEmpty() ? date_time_stamp_format : (Settings::instance().useMessageTimestampWithAP() ? QLocale("en_US").toString( cm.timestamp(), date_time_stamp_format ) : cm.timestamp().toString( date_time_stamp_format ));
}

QString GuiChatMessage::formatMessage( const User& u, const ChatMessage& cm, VNumber last_user_id, bool show_timestamp, bool show_datestamp,
                                       bool skip_system_message, bool show_message_group_by_user, bool use_your_name, bool use_chat_compact )
{
  QString html_message = "";
  if( cm.isImportant() )
    html_message += textImportantPrefix();

  QString text_formatted = cm.message();

  if( cm.isSourceCode() )
  {
    text_formatted.replace( QChar( '&' ), QLatin1String( "&amp;" ) );
    text_formatted.replace( QChar( '<' ), QLatin1String( "&lt;" ) );
    text_formatted.replace( QChar( '>' ), QLatin1String( "&gt;" ) );
    text_formatted.prepend( "\n<code>" );
    text_formatted.append( "\n</code>\n" );
  }

  text_formatted.replace( QString( "  " ), QLatin1String( "&nbsp;&nbsp;" ) );
  text_formatted.replace( QChar( '\t' ), QLatin1String( "&nbsp;&nbsp;&nbsp;&nbsp;" ) );
  text_formatted.replace( QChar( '\r' ), QLatin1String( "" ) );
  text_formatted.replace( QChar( '\n' ), QLatin1String( "<br>" ) );

  if( !cm.isSourceCode() )
  {
    QColor text_color = (cm.textColor().isValid() && cm.textColor() != QColor( 0, 0, 0 ) && cm.textColor() != QColor( 255, 255, 255 ) ) ? cm.textColor() : QColor();
    if( text_color.isValid() && Bee::isColorVisibleInChat( text_color ) )
    {
      text_formatted.prepend( QString( "<font color=%1>" ).arg( text_color.name() ) );
      text_formatted.append( QLatin1String( "</font>" ) );
    }
  }

  bool append_message_to_previous = show_message_group_by_user && last_user_id == u.id() && !cm.isImportant();

  QString user_name_to_show = Bee::userNameToShow( u, true );
  QString date_time_stamp = datetimestampToString( cm, show_timestamp, show_datestamp );
  QString html_date_time_stamp = date_time_stamp.isEmpty() ? date_time_stamp : QString( "<font color=%1>(%2)</font>" ).arg( Settings::instance().chatSystemTextColor(), date_time_stamp );
  QString user_name = append_message_to_previous ? QString( "" ) : (u.isLocal() && !use_your_name) ? QObject::tr( "You" ) : (u.isValid() ? user_name_to_show : QObject::tr( "Unknown" ));
  if( cm.isFromAutoresponder() )
  {
    append_message_to_previous = false;
    user_name = QString( "%1 from %2" ).arg( Settings::instance().autoresponderName(), user_name );
  }

  QString html_user_name = "";
  if( !user_name.isEmpty() )
  {
    if( Settings::instance().chatUseColoredUserNames() )
    {
      if( Bee::isColorVisibleInChat( QColor( u.color() ) ) )
        html_user_name = QString( "<font color=%1><b>%2</b></font>" ).arg( u.color(), user_name );
      else
        html_user_name = QString( "<font color=%1><b>%2</b></font>" ).arg( Settings::instance().chatDefaultUserNameColor(), user_name );
    }
    else
      html_user_name = QString( "<b>%1</b>" ).arg( user_name );

    if( !Settings::instance().showTextInModeRTL() )
      html_user_name.append( QString( ":%1" ).arg( use_chat_compact ? QString( " " ) : QLatin1String( "<br>" ) ) );
  }

  if( Settings::instance().showTextInModeRTL() )
    html_message += QString( "%1 %2 %3" ).arg( html_user_name, html_date_time_stamp, text_formatted );
  else if( use_chat_compact )
    html_message += QString( "%1 %2 %3" ).arg( html_date_time_stamp, (html_user_name.isEmpty() ? QLatin1String( "&nbsp;&nbsp;" ) : html_user_name), text_formatted );
  else
    html_message += QString( "%1 %2 %3" ).arg( html_user_name, html_date_time_stamp, text_formatted );

  if( cm.isImportant() )
    html_message.append( textImportantSuffix() );

  if( !use_chat_compact )
  {
    if( last_user_id == ID_SYSTEM_MESSAGE )
    {
      if( !skip_system_message )
        html_message.prepend( QLatin1String( "<br>" ) );
    }
    else if( last_user_id == ID_IMPORTANT_MESSAGE || cm.isImportant() )
    {
      html_message.prepend( QLatin1String( "<br>" ) );
    }
    else
    {
      if( !append_message_to_previous )
        html_message.prepend( QLatin1String( "<br>" ) );
    }
  }

  html_message += QLatin1String( "<br>" );

  return html_message;
}

QString GuiChatMessage::bubbleTimeToString( const ChatMessage& cm, bool show_datestamp )
{
  QString time_format;
  if( show_datestamp || cm.timestamp().date() != QDate::currentDate() )
    time_format = QLatin1String( "dd/MM/yyyy " );

  if( Settings::instance().useMessageTimestampWithAP() )
  {
    time_format += QLatin1String( "h:mm ap" );
    return QLocale( "en_US" ).toString( cm.timestamp(), time_format );
  }

  time_format += QLatin1String( "HH:mm" );
  return cm.timestamp().toString( time_format );
}

static QString bubbleSpacer( int height_px )
{
  // Small paragraph used as vertical gap between two bubbles (tables cannot be adjacent in QTextDocument).
  // It holds the only "<br>" of the message: ChatManager::chatSavedText() splits the saved history on "<br>",
  // so the line breaks inside a bubble are written as "<br />" and every table stays intact.
  return QString( "<p style=\"margin-top:%1px; margin-bottom:0px; font-size:1px; -qt-line-height-type:fixed; line-height:1px;\"><span style=\"font-size:1px;\"><br></span></p>" ).arg( qMax( 0, height_px ) );
}

static QString bubbleSafeLineBreaks( QString html_text )
{
  html_text.replace( QLatin1String( "<br>" ), QLatin1String( "<br />" ), Qt::CaseInsensitive );
  return html_text;
}

QString GuiChatMessage::formatBubbleMessage( const User& u, const ChatMessage& cm, VNumber last_user_id, bool show_datestamp,
                                             bool show_message_group_by_user, bool use_your_name )
{
  bool is_outgoing = u.isLocal();
  bool append_message_to_previous = show_message_group_by_user && last_user_id == u.id() && !cm.isImportant() && !cm.isFromAutoresponder();

  // Message text
  QString text_formatted = cm.message();
  if( cm.isSourceCode() )
  {
    text_formatted.replace( QChar( '&' ), QLatin1String( "&amp;" ) );
    text_formatted.replace( QChar( '<' ), QLatin1String( "&lt;" ) );
    text_formatted.replace( QChar( '>' ), QLatin1String( "&gt;" ) );
    text_formatted.prepend( "<code>" );
    text_formatted.append( "</code>" );
  }
  text_formatted.replace( QString( "  " ), QLatin1String( "&nbsp;&nbsp;" ) );
  text_formatted.replace( QChar( '\t' ), QLatin1String( "&nbsp;&nbsp;&nbsp;&nbsp;" ) );
  text_formatted.replace( QChar( '\r' ), QLatin1String( "" ) );
  text_formatted.replace( QChar( '\n' ), QLatin1String( "<br />" ) );
  text_formatted = bubbleSafeLineBreaks( text_formatted );

  // Colors are written into the HTML so saved history keeps a readable contrast even after a theme change
  QString text_color = Bee::themeColor( Bee::ThemeBubbleText );
  if( !cm.isSourceCode() && cm.textColor().isValid() && cm.textColor() != QColor( 0, 0, 0 ) && cm.textColor() != QColor( 255, 255, 255 ) )
  {
    QColor bubble_bg( Bee::themeColor( is_outgoing ? Bee::ThemeBubbleOut : Bee::ThemeBubbleIn ) );
    if( !Bee::isColorNear( cm.textColor(), bubble_bg ) )
      text_color = cm.textColor().name();
  }

  QString html_body;
  if( cm.isImportant() )
    html_body += textImportantPrefix();
  html_body += QString( "<font color=%1>%2</font>" ).arg( text_color, text_formatted );

  // Sender name (only for the messages of the others, as in mobile chat apps)
  QString html_user_name;
  if( !is_outgoing && !append_message_to_previous )
  {
    QString user_name = u.isValid() ? Bee::userNameToShow( u, true ) : QObject::tr( "Unknown" );
    if( cm.isFromAutoresponder() )
      user_name = QString( "%1 from %2" ).arg( Settings::instance().autoresponderName(), user_name );
    QString name_color = Bee::themeColor( Bee::ThemeAccent );
    if( Settings::instance().chatUseColoredUserNames() && QColor( u.color() ).isValid() && !Bee::isColorNear( QColor( u.color() ), QColor( Bee::themeColor( Bee::ThemeBubbleIn ) ) ) )
      name_color = u.color();
    html_user_name = QString( "<font color=%1><b>%2</b></font><br />" ).arg( name_color, user_name );
  }
  else if( is_outgoing && cm.isFromAutoresponder() )
  {
    html_user_name = QString( "<font color=%1><b>%2</b></font><br />" ).arg( Bee::themeColor( Bee::ThemeAccent ), Settings::instance().autoresponderName() );
  }
  Q_UNUSED( use_your_name );

  QString html_time = QString( "<p align=right style=\"margin-top:2px; margin-bottom:0px;\"><font color=%1 size=2>%2</font></p>" )
                        .arg( Bee::themeColor( Bee::ThemeBubbleMeta ), bubbleTimeToString( cm, show_datestamp ) );

  bool align_right = is_outgoing;
  if( Settings::instance().showTextInModeRTL() )
    align_right = !align_right;

  QString html_message = QString( "<table align=%1 border=0 cellspacing=0 cellpadding=7 bgcolor=\"%2\" style=\"margin-top:0px; margin-bottom:0px; margin-%3:56px; margin-%4:6px;\">"
                                  "<tr><td>%5%6%7</td></tr></table>" )
                           .arg( align_right ? QLatin1String( "right" ) : QLatin1String( "left" ),
                                 Bee::themeColor( is_outgoing ? Bee::ThemeBubbleOut : Bee::ThemeBubbleIn ),
                                 align_right ? QLatin1String( "left" ) : QLatin1String( "right" ),
                                 align_right ? QLatin1String( "right" ) : QLatin1String( "left" ),
                                 html_user_name, html_body, html_time );

  // Bigger gap when the sender changes, tiny gap for consecutive messages of the same user
  html_message.prepend( bubbleSpacer( append_message_to_previous ? 2 : 10 ) );
  return html_message;
}

QString GuiChatMessage::formatBubbleSystemMessage( const ChatMessage& cm, bool show_datestamp )
{
  if( cm.message().isEmpty() )
    return QString( "" );

  QString date_time_stamp = cm.type() != ChatMessage::ImagePreview ? bubbleTimeToString( cm, show_datestamp ) : QString( "" );
  QString html_text = QString( "%1%2" ).arg( cm.message(), date_time_stamp.isEmpty() ? date_time_stamp : QString( " &middot; %1" ).arg( date_time_stamp ) );
  if( cm.isImportant() )
    html_text.prepend( textImportantPrefix() );

  // Centered and discreet, like the info notes of the mobile chat apps
  return QString( "%1<p align=center style=\"margin-top:0px; margin-bottom:0px;\"><font color=%2 size=2>%3</font></p>" )
           .arg( bubbleSpacer( 8 ), Bee::themeColor( Bee::ThemeSystemText ), bubbleSafeLineBreaks( html_text ) );
}

QString GuiChatMessage::formatSystemMessage( const ChatMessage& cm, VNumber last_user_id, bool show_timestamp, bool show_datestamp, bool use_chat_compact )
{
  if( cm.message().isEmpty() )
    return QString( "" );

  QString date_time_stamp = cm.type() != ChatMessage::ImagePreview ? datetimestampToString( cm, show_timestamp, show_datestamp ) : QString( "" );

  QString html_message = QString( "<font color=%1>%2%3</font>" )
                           .arg( Settings::instance().chatSystemTextColor(),
                                 date_time_stamp.isEmpty() ? date_time_stamp : QString( "(%1) " ).arg( date_time_stamp ),
                                 cm.message() );

  if( cm.isImportant() )
  {
    html_message.prepend( textImportantPrefix() );
    html_message.append( textImportantSuffix() );
  }

  html_message.append( QLatin1String( "<br>" ) );

  if( !use_chat_compact )
  {
    if( cm.type() != ChatMessage::Other && last_user_id != ID_SYSTEM_MESSAGE )
    {
      html_message.prepend( QLatin1String( "<br>" ) );
    }
    else
    {
      if( cm.isImportant() )
        html_message.prepend( QLatin1String( "<br>" ) );
    }
  }

  return html_message;
}

QString GuiChatMessage::chatToHtml( const Chat& c, bool skip_file_transfers, bool skip_system_message, bool force_timestamp, bool force_datestamp, bool use_chat_compact, bool skip_cannot_be_saved_messages )
{
  UserList chat_users;
  QString html_text = "";
  VNumber last_message_user_id = skip_system_message ? 0 : ID_SYSTEM_MESSAGE;

  if( c.isDefault() )
    chat_users = UserManager::instance().userList();
  else
    chat_users = UserManager::instance().userList().fromUsersId( c.usersId() );

  User u;

  foreach( ChatMessage cm, c.messages() )
  {
    if( cm.isFromSystem() )
    {
      if( cm.isFileTransfer() || cm.isImagePreview() )
      {
        if( skip_file_transfers )
          continue;
        if( skip_cannot_be_saved_messages && !cm.canBeSaved() )
          continue;
        html_text += Settings::instance().chatUseBubbles() ? formatBubbleSystemMessage( cm, force_datestamp || Settings::instance().chatShowMessageDatestamp() )
                                                           : formatSystemMessage( cm, last_message_user_id, force_timestamp || Settings::instance().chatShowMessageTimestamp(), force_datestamp || Settings::instance().chatShowMessageDatestamp(), use_chat_compact );
      }
      else
      {
        if( skip_system_message )
          continue;
        if( skip_cannot_be_saved_messages && !cm.canBeSaved() )
          continue;
        html_text += Settings::instance().chatUseBubbles() ? formatBubbleSystemMessage( cm, force_datestamp || Settings::instance().chatShowMessageDatestamp() )
                                                           : formatSystemMessage( cm, last_message_user_id, force_timestamp || Settings::instance().chatShowMessageTimestamp(), force_datestamp || Settings::instance().chatShowMessageDatestamp(), use_chat_compact );
      }
    }
    else
    {
      u = chat_users.find( cm.userId() );
      if( !u.isValid() )
      {
        u = UserManager::instance().findUser( cm.userId() );
        if( u.isValid() )
          chat_users.set( u );
      }
      if( Settings::instance().chatUseBubbles() )
        html_text += formatBubbleMessage( u, cm, last_message_user_id, force_datestamp || Settings::instance().chatShowMessageDatestamp(), true, true );
      else
        html_text += formatMessage( u, cm, last_message_user_id, force_timestamp || Settings::instance().chatShowMessageTimestamp(), force_datestamp || Settings::instance().chatShowMessageDatestamp(), skip_system_message, false, true, use_chat_compact );
    }
    last_message_user_id = cm.isImportant() ? ID_IMPORTANT_MESSAGE : cm.userId();
  }

  return html_text;
}
