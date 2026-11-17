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

#ifndef BEEBEEP_GUIMESSAGENOTIFICATION_H
#define BEEBEEP_GUIMESSAGENOTIFICATION_H

#include "Config.h"
class User;


// Notification of a new message (bottom right of the screen, over the other programs):
// picture and name of the sender, preview of the text and a big "Reply" button.
// It does not depend on the notification settings of Windows and it does not steal the focus.
class GuiMessageNotification : public QWidget
{
  Q_OBJECT

public:
  explicit GuiMessageNotification( QWidget* parent = Q_NULLPTR );

  void showMessage( VNumber chat_id, const User&, const QString& chat_title, const QString& preview_text, int unread_messages );
  inline VNumber chatId() const;

signals:
  void openChatRequest( VNumber chat_id );

protected:
  void paintEvent( QPaintEvent* );
  void mouseReleaseEvent( QMouseEvent* );
  void enterEvent( QEvent* );
  void leaveEvent( QEvent* );

protected slots:
  void openChat();
  void closeNotification();

private:
  void placeOnScreen();

  VNumber m_chatId;
  QLabel* mp_lAvatar;
  QLabel* mp_lTitle;
  QLabel* mp_lText;
  QLabel* mp_lInfo;
  QPushButton* mp_pbReply;
  QToolButton* mp_tbClose;
  QTimer* mp_timerHide;

};


// Inline Functions
inline VNumber GuiMessageNotification::chatId() const { return m_chatId; }

#endif // BEEBEEP_GUIMESSAGENOTIFICATION_H
