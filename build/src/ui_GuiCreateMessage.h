/********************************************************************************
** Form generated from reading UI file 'GuiCreateMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUICREATEMESSAGE_H
#define UI_GUICREATEMESSAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "GuiEmoticons.h"
#include "GuiMessageEdit.h"

QT_BEGIN_NAMESPACE

class Ui_GuiCreateMessageWidget
{
public:
    QGridLayout *gridLayout_2;
    GuiEmoticons *mp_twEmoticons;
    QGroupBox *mp_gbTo;
    QGridLayout *gridLayout;
    QPushButton *mp_pbEditUsers;
    QPlainTextEdit *mp_teTo;
    QSpacerItem *verticalSpacer;
    QGroupBox *mp_gbMessage;
    QGridLayout *gridLayout_3;
    QCheckBox *mp_cbFlagAsImportant;
    QPushButton *mp_pbEmoticons;
    QCheckBox *mp_cbOpenChat;
    QPushButton *mp_pbSend;
    QSpacerItem *verticalSpacer_2;
    GuiMessageEdit *mp_teMessage;
    QCheckBox *mp_cbSendPrivate;

    void setupUi(QWidget *GuiCreateMessageWidget)
    {
        if (GuiCreateMessageWidget->objectName().isEmpty())
            GuiCreateMessageWidget->setObjectName(QString::fromUtf8("GuiCreateMessageWidget"));
        GuiCreateMessageWidget->resize(557, 429);
        gridLayout_2 = new QGridLayout(GuiCreateMessageWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(20);
        mp_twEmoticons = new GuiEmoticons(GuiCreateMessageWidget);
        mp_twEmoticons->setObjectName(QString::fromUtf8("mp_twEmoticons"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_twEmoticons->sizePolicy().hasHeightForWidth());
        mp_twEmoticons->setSizePolicy(sizePolicy);
        mp_twEmoticons->setMinimumSize(QSize(140, 0));

        gridLayout_2->addWidget(mp_twEmoticons, 0, 0, 2, 1);

        mp_gbTo = new QGroupBox(GuiCreateMessageWidget);
        mp_gbTo->setObjectName(QString::fromUtf8("mp_gbTo"));
        sizePolicy.setHeightForWidth(mp_gbTo->sizePolicy().hasHeightForWidth());
        mp_gbTo->setSizePolicy(sizePolicy);
        mp_gbTo->setFlat(false);
        gridLayout = new QGridLayout(mp_gbTo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_pbEditUsers = new QPushButton(mp_gbTo);
        mp_pbEditUsers->setObjectName(QString::fromUtf8("mp_pbEditUsers"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_pbEditUsers->sizePolicy().hasHeightForWidth());
        mp_pbEditUsers->setSizePolicy(sizePolicy1);
        mp_pbEditUsers->setMinimumSize(QSize(48, 48));
        mp_pbEditUsers->setMaximumSize(QSize(48, 48));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/group-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbEditUsers->setIcon(icon);
        mp_pbEditUsers->setIconSize(QSize(32, 32));
        mp_pbEditUsers->setFlat(true);

        gridLayout->addWidget(mp_pbEditUsers, 0, 1, 1, 1);

        mp_teTo = new QPlainTextEdit(mp_gbTo);
        mp_teTo->setObjectName(QString::fromUtf8("mp_teTo"));
        mp_teTo->setUndoRedoEnabled(false);
        mp_teTo->setReadOnly(true);
        mp_teTo->setPlainText(QString::fromUtf8(""));

        gridLayout->addWidget(mp_teTo, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(17, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_2->addWidget(mp_gbTo, 0, 1, 1, 1);

        mp_gbMessage = new QGroupBox(GuiCreateMessageWidget);
        mp_gbMessage->setObjectName(QString::fromUtf8("mp_gbMessage"));
        sizePolicy.setHeightForWidth(mp_gbMessage->sizePolicy().hasHeightForWidth());
        mp_gbMessage->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(mp_gbMessage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mp_cbFlagAsImportant = new QCheckBox(mp_gbMessage);
        mp_cbFlagAsImportant->setObjectName(QString::fromUtf8("mp_cbFlagAsImportant"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/emojis/symbols/203c.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_cbFlagAsImportant->setIcon(icon1);

        gridLayout_3->addWidget(mp_cbFlagAsImportant, 5, 0, 1, 2);

        mp_pbEmoticons = new QPushButton(mp_gbMessage);
        mp_pbEmoticons->setObjectName(QString::fromUtf8("mp_pbEmoticons"));
        sizePolicy1.setHeightForWidth(mp_pbEmoticons->sizePolicy().hasHeightForWidth());
        mp_pbEmoticons->setSizePolicy(sizePolicy1);
        mp_pbEmoticons->setMinimumSize(QSize(48, 48));
        mp_pbEmoticons->setMaximumSize(QSize(48, 48));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/emoticon.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbEmoticons->setIcon(icon2);
        mp_pbEmoticons->setIconSize(QSize(32, 32));
        mp_pbEmoticons->setCheckable(true);
        mp_pbEmoticons->setFlat(true);

        gridLayout_3->addWidget(mp_pbEmoticons, 1, 1, 1, 1);

        mp_cbOpenChat = new QCheckBox(mp_gbMessage);
        mp_cbOpenChat->setObjectName(QString::fromUtf8("mp_cbOpenChat"));

        gridLayout_3->addWidget(mp_cbOpenChat, 7, 0, 1, 2);

        mp_pbSend = new QPushButton(mp_gbMessage);
        mp_pbSend->setObjectName(QString::fromUtf8("mp_pbSend"));
        sizePolicy1.setHeightForWidth(mp_pbSend->sizePolicy().hasHeightForWidth());
        mp_pbSend->setSizePolicy(sizePolicy1);
        mp_pbSend->setMinimumSize(QSize(48, 48));
        mp_pbSend->setMaximumSize(QSize(48, 48));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSend->setIcon(icon3);
        mp_pbSend->setIconSize(QSize(32, 32));
        mp_pbSend->setFlat(true);

        gridLayout_3->addWidget(mp_pbSend, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 2, 1);

        mp_teMessage = new GuiMessageEdit(mp_gbMessage);
        mp_teMessage->setObjectName(QString::fromUtf8("mp_teMessage"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_teMessage->sizePolicy().hasHeightForWidth());
        mp_teMessage->setSizePolicy(sizePolicy2);
        mp_teMessage->setMinimumSize(QSize(160, 50));
        mp_teMessage->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(mp_teMessage, 1, 0, 4, 1);

        mp_cbSendPrivate = new QCheckBox(mp_gbMessage);
        mp_cbSendPrivate->setObjectName(QString::fromUtf8("mp_cbSendPrivate"));

        gridLayout_3->addWidget(mp_cbSendPrivate, 6, 0, 1, 1);


        gridLayout_2->addWidget(mp_gbMessage, 1, 1, 1, 1);

        QWidget::setTabOrder(mp_teMessage, mp_pbEmoticons);
        QWidget::setTabOrder(mp_pbEmoticons, mp_pbSend);
        QWidget::setTabOrder(mp_pbSend, mp_cbFlagAsImportant);
        QWidget::setTabOrder(mp_cbFlagAsImportant, mp_cbSendPrivate);
        QWidget::setTabOrder(mp_cbSendPrivate, mp_cbOpenChat);
        QWidget::setTabOrder(mp_cbOpenChat, mp_twEmoticons);
        QWidget::setTabOrder(mp_twEmoticons, mp_teTo);
        QWidget::setTabOrder(mp_teTo, mp_pbEditUsers);

        retranslateUi(GuiCreateMessageWidget);

        mp_twEmoticons->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(GuiCreateMessageWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiCreateMessageWidget)
    {
        mp_gbTo->setTitle(QCoreApplication::translate("GuiCreateMessageWidget", "To", nullptr));
#if QT_CONFIG(tooltip)
        mp_pbEditUsers->setToolTip(QCoreApplication::translate("GuiCreateMessageWidget", "Add recipients", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbEditUsers->setText(QString());
        mp_gbMessage->setTitle(QCoreApplication::translate("GuiCreateMessageWidget", "Message", nullptr));
        mp_cbFlagAsImportant->setText(QCoreApplication::translate("GuiCreateMessageWidget", "Marks the message as important", nullptr));
        mp_cbOpenChat->setText(QCoreApplication::translate("GuiCreateMessageWidget", "Open chat after sending message", nullptr));
#if QT_CONFIG(tooltip)
        mp_pbSend->setToolTip(QCoreApplication::translate("GuiCreateMessageWidget", "Click to send message", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_cbSendPrivate->setText(QCoreApplication::translate("GuiCreateMessageWidget", "Send this message to all recipients individually", nullptr));
        (void)GuiCreateMessageWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiCreateMessageWidget: public Ui_GuiCreateMessageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUICREATEMESSAGE_H
