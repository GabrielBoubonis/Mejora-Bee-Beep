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
// $Id: BeeUtils.h 1612 2026-11-05 00:26:39Z mastroddi $
//
//////////////////////////////////////////////////////////////////////

#ifndef BEEBEEP_GUIUTILS_H
#define BEEBEEP_GUIUTILS_H

#include "Config.h"
class User;


namespace Bee
{
  enum FileType { FileAudio, FileVideo, FileImage, FileDocument, FileOther, FileExe, FileBundle, FileCompressed, NumFileType };

  inline QIcon userStatusIcon( int );
  QColor userStatusColor( int );
  QColor userStatusBackgroundColor( int );
  QColor userStatusForegroundColor( int );
  QString userStatusIconFileName( int );
  QString menuUserStatusIconFileName( int );
  QString userStatusToString( int );
  QString userBirthdayToText( const User& );
  QString userNameToShow( const User&, bool to_html );
  inline VNumber qVariantToVNumber( const QVariant&, bool *ok = Q_NULLPTR );
  inline FileSizeType qVariantToFileSizeType( const QVariant&, bool *ok = Q_NULLPTR );
  QString uniqueFilePath( const QString&, bool add_date_time );
  QString sanitizeRemoteFileName( const QString& );
  QString sanitizeRemoteRelativePath( const QString& );
  QString suffixFromFile( const QString& );
  FileType fileTypeFromSuffix( const QString& );
  bool isFileTypeAudio( const QString& );
  bool isFileTypeVideo( const QString& );
  bool isFileTypeImage( const QString& );
  bool isFileTypeDocument( const QString& );
  bool isFileTypeExe( const QString& );
  bool isFileTypeUnsafeToOpen( const QString& );
  bool isFileTypeBundle( const QString& );
  bool isFileTypeCompressed( const QString& );
  bool isLocalFile( const QUrl& );
  QString fileTypeToString( FileType );
  QString dateTimeStringSuffix( const QDateTime& );
  QString capitalizeFirstLetter( const QString&, bool all_chars_after_space, bool lower_all_characters = true );
  QString lowerFirstLetter( const QString& );
  QColor invertColor( const QColor& );
  bool isColorNear( const QColor&, const QColor& );
  bool isColorVisibleInChat( const QColor& );
  QString removeHtmlTags( const QString& );
  QString replaceHtmlSpecialCharacters( const QString& );
  inline int toLittleEndianFromBig( int );
  QString chatMessageTypeToString( int );
  QBrush defaultTextBrush();
  QBrush defaultBackgroundBrush();
  QBrush defaultHighlightedTextBrush();
  QBrush defaultHighlightBrush();
  QBrush userStatusBackgroundBrush( int );
  QPixmap convertToGrayScale( const QPixmap& );
  QPixmap convertToGrayScale( const QIcon&, const QSize& pixmap_size );
  QChar nativeFolderSeparator();
  QString convertToNativeFolderSeparator( const QString& );
  QString folderCdUp( const QString& );
  bool setLastModifiedToFile( const QString&, const QDateTime& );
  bool showFileInGraphicalShell( const QString& );
  bool folderIsWriteable( const QString&, bool create_folder_if_not_exists );
  QPixmap avatarForUser( const User&, const QSize&, bool use_available_user_image, int user_status = -1 );
  QString toolTipForUser( const User&, bool only_status );
  void setWindowStaysOnTop( QWidget*, bool );
  QString stringListToTextString( const QStringList&, bool strip_html_tags, int max_items = -1 );
  void removeContextHelpButton( QWidget* );
  QColor selectColor( QWidget*, const QColor& default_color );
  void setBackgroundColor( QWidget*, const QColor& );
  inline bool isTimeToCheck( int ticks, int tick_for_check );
  void showUp( QWidget*, bool force_show = false );
  void raiseOnTop( QWidget* );
  bool areStringListEqual( const QStringList&, const QStringList&, Qt::CaseSensitivity cs = Qt::CaseInsensitive );
  QString dateTimeToString( const QDateTime& );
  QPalette darkPalette();
  QPalette lightPalette();

  // Modern chat theme (WhatsApp-like). Colors depend on Settings::useDarkStyle()
  enum ThemeColor { ThemeWindow, ThemePanel, ThemeInput, ThemeText, ThemeMutedText, ThemeAccent, ThemeAccentHover,
                    ThemeChatBackground, ThemeBubbleOut, ThemeBubbleIn, ThemeBubbleText, ThemeBubbleMeta,
                    ThemeSystemPill, ThemeSystemText, ThemeBorder, ThemeSelection, ThemeLink,
                    ThemeAccentText, ThemeHighlight, NumThemeColors };
  QString themeColor( ThemeColor, bool dark_style );
  QString themeColor( ThemeColor );
  QString themeStyleSheet();
  // Modern line icon (Lucide, ISC license) drawn with the colors of the theme.
  // color_on is used for the checked state (empty: same color)
  QIcon themeIcon( const QString& icon_name, ThemeColor color = ThemeText, ThemeColor color_on = NumThemeColors );
  QIcon themeIconWithColor( const QString& icon_name, const QString& color_name, const QString& color_on_name, const QString& color_disabled_name );
  QIcon unreadBadgeIcon( const QIcon&, int unread_messages, const QSize& );
  void setDarkTitleBar( QWidget*, bool );

  QColor colorDarkGrey();
  QColor colorGrey();
  QColor colorBlack();
  QColor colorBlue();
  QColor colorWhite();
  QColor colorYellow();
  QColor colorOrange();
  QString beeColorsToHtmlText( const QString& );
  double contrastRatio( const QColor&, const QColor& );
  QColor readableColor( const QColor&, const QColor& background, double min_ratio = 4.5 );


  QString pluginFileExtension();
  QString removeInvalidCharactersForFilePath( const QString& );

  QString bytesToString( FileSizeType, int precision = -1 );
  QString timeToString( qint64 msec );
  qint64 roundFromDouble( double d );
  qint64 bytesPerSecond( FileSizeType transferred_byte_size, int time_elapsed_ms );
  QString transferTimeLeft( FileSizeType bytes_transferred, FileSizeType total_bytes, FileSizeType starting_position, int elapsed_time );

  QString imagePreviewPath( const QString& source_image_path );

  QVariant comboBoxData( const QComboBox* );
  bool selectComboBoxData( QComboBox*, const QVariant& );

}


// Inline Functions
inline QIcon Bee::userStatusIcon( int user_status ) { return QIcon( userStatusIconFileName( user_status ) ); }
inline VNumber Bee::qVariantToVNumber( const QVariant& v, bool* ok ) { return v.toULongLong( ok ); }
inline FileSizeType Bee::qVariantToFileSizeType( const QVariant& v, bool* ok ) { return v.toLongLong( ok ); }
inline int Bee::toLittleEndianFromBig( int big_endian_int ) { return static_cast<int>(0 | ((big_endian_int & 0x00ff) << 8) | ((big_endian_int & 0xff00) >> 8)); }
inline bool Bee::isTimeToCheck( int ticks, int tick_for_check ) { return tick_for_check > 0 && (ticks % tick_for_check == 0); }

#endif // BEEBEEP_GUIUTILS_H
