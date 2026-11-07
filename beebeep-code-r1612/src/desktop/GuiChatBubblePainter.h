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
// $Id: GuiChatBubblePainter.h 1592 2026-08-11 10:14:22Z mastroddi $
//
//////////////////////////////////////////////////////////////////////

#ifndef BEEBEEP_GUICHATBUBBLEPAINTER_H
#define BEEBEEP_GUICHATBUBBLEPAINTER_H

#include "Config.h"


// Paints the rounded bubbles of the chat messages behind the text of a QTextEdit/QTextBrowser.
// QTextDocument does not support rounded corners: every bubble is a top level table which stores
// its color as border color (see GuiChatMessage::formatBubbleMessage) and this filter draws it.
class GuiChatBubblePainter : public QObject
{
  Q_OBJECT

public:
  explicit GuiChatBubblePainter( QTextEdit* );
  static void install( QTextEdit* );

protected:
  bool eventFilter( QObject*, QEvent* );
  void paintBubbles();

private:
  QTextEdit* mp_textEdit;

};

#endif // BEEBEEP_GUICHATBUBBLEPAINTER_H
