/********************************************************************************
** Form generated from reading UI file 'GuiChat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUICHAT_H
#define UI_GUICHAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "GuiMessageEdit.h"

QT_BEGIN_NAMESPACE

class Ui_GuiChatWidget
{
public:
    QFrame *mp_frameMessage;
    QGridLayout *gridLayout;
    GuiMessageEdit *mp_teMessage;
    QPushButton *mp_pbSend;
    QPushButton *mp_pbRecordVoiceMessage;
    QCheckBox *mp_cbSendAndClose;
    QFrame *mp_frameChat;
    QGridLayout *gridLayout_2;
    QTextBrowser *mp_teChat;
    QFrame *mp_frameVoicePlayer;

    void setupUi(QWidget *GuiChatWidget)
    {
        if (GuiChatWidget->objectName().isEmpty())
            GuiChatWidget->setObjectName(QString::fromUtf8("GuiChatWidget"));
        GuiChatWidget->resize(527, 355);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GuiChatWidget->sizePolicy().hasHeightForWidth());
        GuiChatWidget->setSizePolicy(sizePolicy);
        mp_frameMessage = new QFrame(GuiChatWidget);
        mp_frameMessage->setObjectName(QString::fromUtf8("mp_frameMessage"));
        mp_frameMessage->setGeometry(QRect(10, 260, 491, 70));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_frameMessage->sizePolicy().hasHeightForWidth());
        mp_frameMessage->setSizePolicy(sizePolicy1);
        mp_frameMessage->setMinimumSize(QSize(200, 70));
        mp_frameMessage->setBaseSize(QSize(0, 80));
        mp_frameMessage->setFrameShape(QFrame::NoFrame);
        mp_frameMessage->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(mp_frameMessage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_teMessage = new GuiMessageEdit(mp_frameMessage);
        mp_teMessage->setObjectName(QString::fromUtf8("mp_teMessage"));
        sizePolicy1.setHeightForWidth(mp_teMessage->sizePolicy().hasHeightForWidth());
        mp_teMessage->setSizePolicy(sizePolicy1);
        mp_teMessage->setMinimumSize(QSize(160, 50));
        mp_teMessage->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mp_teMessage, 0, 0, 3, 1);

        mp_pbSend = new QPushButton(mp_frameMessage);
        mp_pbSend->setObjectName(QString::fromUtf8("mp_pbSend"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_pbSend->sizePolicy().hasHeightForWidth());
        mp_pbSend->setSizePolicy(sizePolicy2);
        mp_pbSend->setMinimumSize(QSize(38, 38));
        mp_pbSend->setMaximumSize(QSize(38, 38));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSend->setIcon(icon);
        mp_pbSend->setIconSize(QSize(32, 32));
        mp_pbSend->setFlat(true);

        gridLayout->addWidget(mp_pbSend, 1, 1, 1, 1);

        mp_pbRecordVoiceMessage = new QPushButton(mp_frameMessage);
        mp_pbRecordVoiceMessage->setObjectName(QString::fromUtf8("mp_pbRecordVoiceMessage"));
        sizePolicy2.setHeightForWidth(mp_pbRecordVoiceMessage->sizePolicy().hasHeightForWidth());
        mp_pbRecordVoiceMessage->setSizePolicy(sizePolicy2);
        mp_pbRecordVoiceMessage->setMinimumSize(QSize(38, 38));
        mp_pbRecordVoiceMessage->setMaximumSize(QSize(38, 38));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/microphone.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbRecordVoiceMessage->setIcon(icon1);
        mp_pbRecordVoiceMessage->setIconSize(QSize(32, 32));
        mp_pbRecordVoiceMessage->setFlat(true);

        gridLayout->addWidget(mp_pbRecordVoiceMessage, 1, 2, 1, 1);

        mp_cbSendAndClose = new QCheckBox(mp_frameMessage);
        mp_cbSendAndClose->setObjectName(QString::fromUtf8("mp_cbSendAndClose"));

        gridLayout->addWidget(mp_cbSendAndClose, 2, 1, 1, 2);

        mp_frameChat = new QFrame(GuiChatWidget);
        mp_frameChat->setObjectName(QString::fromUtf8("mp_frameChat"));
        mp_frameChat->setGeometry(QRect(10, 20, 491, 228));
        mp_frameChat->setFrameShape(QFrame::NoFrame);
        mp_frameChat->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(mp_frameChat);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_teChat = new QTextBrowser(mp_frameChat);
        mp_teChat->setObjectName(QString::fromUtf8("mp_teChat"));
        mp_teChat->setMinimumSize(QSize(200, 120));
        mp_teChat->setReadOnly(true);
        mp_teChat->setTextInteractionFlags(Qt::TextBrowserInteraction);

        gridLayout_2->addWidget(mp_teChat, 0, 0, 1, 1);

        mp_frameVoicePlayer = new QFrame(mp_frameChat);
        mp_frameVoicePlayer->setObjectName(QString::fromUtf8("mp_frameVoicePlayer"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mp_frameVoicePlayer->sizePolicy().hasHeightForWidth());
        mp_frameVoicePlayer->setSizePolicy(sizePolicy3);
        mp_frameVoicePlayer->setMinimumSize(QSize(0, 56));
        mp_frameVoicePlayer->setFrameShape(QFrame::Panel);
        mp_frameVoicePlayer->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(mp_frameVoicePlayer, 1, 0, 1, 1);

        QWidget::setTabOrder(mp_teMessage, mp_pbSend);
        QWidget::setTabOrder(mp_pbSend, mp_pbRecordVoiceMessage);
        QWidget::setTabOrder(mp_pbRecordVoiceMessage, mp_cbSendAndClose);
        QWidget::setTabOrder(mp_cbSendAndClose, mp_teChat);

        retranslateUi(GuiChatWidget);

        QMetaObject::connectSlotsByName(GuiChatWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiChatWidget)
    {
        GuiChatWidget->setWindowTitle(QCoreApplication::translate("GuiChatWidget", "Chat", nullptr));
#if QT_CONFIG(tooltip)
        mp_pbSend->setToolTip(QCoreApplication::translate("GuiChatWidget", "Click to send message or just hit enter", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_cbSendAndClose->setText(QCoreApplication::translate("GuiChatWidget", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiChatWidget: public Ui_GuiChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUICHAT_H
