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
// $Id: IconManager.cpp 1592 2026-08-11 10:14:22Z mastroddi $
//
//////////////////////////////////////////////////////////////////////

#include "IconManager.h"
#include "BeeUtils.h"


IconManager* IconManager::mp_instance = Q_NULLPTR;


IconManager::IconManager()
 : m_defaultSourcePath( ":/images" ), m_sourcePath( "" )
{
}

QIcon IconManager::icon( const QString& icon_name ) const
{
  // With the default icons the old colored pictures are replaced by the modern line icons (Lucide, ISC license).
  // The slate gray is readable both on the light and on the dark theme.
  if( hasDefaultIcons() )
  {
    static QHash<QString, QString> lucide_icons;
    static QHash<QString, QIcon> lucide_cache;
    if( lucide_icons.isEmpty() )
    {
    lucide_icons.insert( "activities.png", "bell" );
    lucide_icons.insert( "add.png", "plus" );
    lucide_icons.insert( "audio-settings.png", "volume-2" );
    lucide_icons.insert( "back.png", "arrow-left" );
    lucide_icons.insert( "background-color.png", "paint-bucket" );
    lucide_icons.insert( "bell.png", "bell" );
    lucide_icons.insert( "broadcast.png", "radio-tower" );
    lucide_icons.insert( "chat-list.png", "message-circle" );
    lucide_icons.insert( "chat-small.png", "message-circle" );
    lucide_icons.insert( "chat.png", "message-circle" );
    lucide_icons.insert( "clear.png", "eraser" );
    lucide_icons.insert( "colors.png", "palette" );
    lucide_icons.insert( "connection.png", "plug" );
    lucide_icons.insert( "copy.png", "copy" );
    lucide_icons.insert( "cut.png", "scissors" );
    lucide_icons.insert( "data-folder.png", "database" );
    lucide_icons.insert( "default-chat-online.png", "messages-square" );
    lucide_icons.insert( "delete.png", "trash-2" );
    lucide_icons.insert( "desktop-share.png", "monitor-up" );
    lucide_icons.insert( "dictionary.png", "book-a" );
    lucide_icons.insert( "disconnection.png", "unplug" );
    lucide_icons.insert( "donate.png", "heart" );
    lucide_icons.insert( "download-folder.png", "folder-down" );
    lucide_icons.insert( "download.png", "download" );
    lucide_icons.insert( "emoticon.png", "smile" );
    lucide_icons.insert( "file-add.png", "file-plus" );
    lucide_icons.insert( "file-compressed.png", "file-archive" );
    lucide_icons.insert( "file-sharing.png", "folder-open" );
    lucide_icons.insert( "file-transfer.png", "arrow-down-up" );
    lucide_icons.insert( "filter.png", "filter" );
    lucide_icons.insert( "folder-add.png", "folder-plus" );
    lucide_icons.insert( "folder.png", "folder" );
    lucide_icons.insert( "font-color.png", "baseline" );
    lucide_icons.insert( "font.png", "type" );
    lucide_icons.insert( "group-add.png", "user-round-plus" );
    lucide_icons.insert( "group-create.png", "user-round-plus" );
    lucide_icons.insert( "group-edit.png", "pencil" );
    lucide_icons.insert( "group.png", "users-round" );
    lucide_icons.insert( "help.png", "circle-help" );
    lucide_icons.insert( "icon-size.png", "scaling" );
    lucide_icons.insert( "info.png", "info" );
    lucide_icons.insert( "interface.png", "layout-dashboard" );
    lucide_icons.insert( "language.png", "languages" );
    lucide_icons.insert( "license.png", "file-text" );
    lucide_icons.insert( "log.png", "scroll-text" );
    lucide_icons.insert( "message-create.png", "square-pen" );
    lucide_icons.insert( "microphone.png", "mic" );
    lucide_icons.insert( "network-scan.png", "scan-search" );
    lucide_icons.insert( "network-test.png", "activity" );
    lucide_icons.insert( "network.png", "network" );
    lucide_icons.insert( "network-connected.png", "network" );
    lucide_icons.insert( "network-disconnected.png", "unplug" );
    lucide_icons.insert( "settings-start.png", "power" );
    lucide_icons.insert( "settings-close.png", "power-off" );
    lucide_icons.insert( "paste.png", "clipboard-paste" );
    lucide_icons.insert( "pause.png", "pause" );
    lucide_icons.insert( "play.png", "play" );
    lucide_icons.insert( "plugin.png", "puzzle" );
    lucide_icons.insert( "preset-message-edit.png", "message-square-text" );
    lucide_icons.insert( "preset-message.png", "message-square-text" );
    lucide_icons.insert( "printer.png", "printer" );
    lucide_icons.insert( "profile-edit.png", "user-round-pen" );
    lucide_icons.insert( "quit.png", "log-out" );
    lucide_icons.insert( "quote.png", "quote" );
    lucide_icons.insert( "recent.png", "history" );
    lucide_icons.insert( "redo.png", "redo-2" );
    lucide_icons.insert( "remove-saved-chat.png", "archive-x" );
    lucide_icons.insert( "remove.png", "minus" );
    lucide_icons.insert( "reset-window.png", "rotate-ccw" );
    lucide_icons.insert( "resource-folder.png", "folder" );
    lucide_icons.insert( "save-as.png", "save" );
    lucide_icons.insert( "save-window.png", "save" );
    lucide_icons.insert( "saved-chat-list.png", "archive" );
    lucide_icons.insert( "saved-chat.png", "archive" );
    lucide_icons.insert( "screenshot.png", "camera" );
    lucide_icons.insert( "search.png", "search" );
    lucide_icons.insert( "select-all.png", "text-select" );
    lucide_icons.insert( "send-code.png", "code" );
    lucide_icons.insert( "send-file.png", "paperclip" );
    lucide_icons.insert( "send-folder.png", "folder-up" );
    lucide_icons.insert( "send.png", "send-horizontal" );
    lucide_icons.insert( "settings.png", "settings" );
    lucide_icons.insert( "sharebox.png", "package-open" );
    lucide_icons.insert( "shortcut.png", "keyboard" );
    lucide_icons.insert( "spellchecker.png", "spell-check" );
    lucide_icons.insert( "theme.png", "palette" );
    lucide_icons.insert( "timer.png", "timer" );
    lucide_icons.insert( "tip.png", "lightbulb" );
    lucide_icons.insert( "undo.png", "undo-2" );
    lucide_icons.insert( "update.png", "refresh-cw" );
    lucide_icons.insert( "upload.png", "upload" );
    lucide_icons.insert( "user-add.png", "user-plus" );
    lucide_icons.insert( "user-list.png", "users" );
    lucide_icons.insert( "warning.png", "triangle-alert" );
    lucide_icons.insert( "workgroup.png", "building-2" );
    }
    QString lucide_name = lucide_icons.value( icon_name );
    if( !lucide_name.isEmpty() )
    {
      if( !lucide_cache.contains( lucide_name ) )
        lucide_cache.insert( lucide_name, Bee::themeIconWithColor( lucide_name, "#6b7686", "#c98a00", "#b4bcc6" ) );
      return lucide_cache.value( lucide_name );
    }
  }
  return QIcon( iconPath( icon_name ) );
}

QString IconManager::iconPath( const QString& icon_name ) const
{
  if( hasDefaultIcons() )
    return defaulIconPath( icon_name );

  QString custom_icon_path = customIconPath( icon_name );
  if( QFile::exists( custom_icon_path ) )
    return custom_icon_path;
  else
    return defaulIconPath( icon_name );
}
