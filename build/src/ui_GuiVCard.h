/********************************************************************************
** Form generated from reading UI file 'GuiVCard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIVCARD_H
#define UI_GUIVCARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiVCardWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mp_lPhoto;
    QFrame *mp_frame;
    QVBoxLayout *verticalLayout;
    QLabel *mp_lPath;
    QLabel *mp_lName;
    QLabel *mp_lStatusDescription;
    QLabel *mp_lBirthday;
    QLabel *mp_lEmail;
    QLabel *mp_lPhone;
    QLabel *mp_lRoom;
    QFrame *line;
    QLabel *mp_lWorkgroups;
    QPlainTextEdit *mp_teInfo;
    QSpacerItem *verticalSpacer;
    QFrame *mp_frameBottom;
    QHBoxLayout *horizontalLayout;
    QLabel *mp_lStatus;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbChat;
    QPushButton *mp_pbFile;
    QPushButton *mp_pbBuzz;
    QPushButton *mp_pbHelp;
    QPushButton *mp_pbColor;
    QPushButton *mp_pbFavorite;
    QPushButton *mp_pbRemove;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *GuiVCardWidget)
    {
        if (GuiVCardWidget->objectName().isEmpty())
            GuiVCardWidget->setObjectName(QString::fromUtf8("GuiVCardWidget"));
        GuiVCardWidget->resize(460, 345);
        GuiVCardWidget->setMinimumSize(QSize(460, 0));
        GuiVCardWidget->setFocusPolicy(Qt::ClickFocus);
        gridLayout = new QGridLayout(GuiVCardWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_lPhoto = new QLabel(GuiVCardWidget);
        mp_lPhoto->setObjectName(QString::fromUtf8("mp_lPhoto"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lPhoto->sizePolicy().hasHeightForWidth());
        mp_lPhoto->setSizePolicy(sizePolicy);
        mp_lPhoto->setMinimumSize(QSize(98, 98));
        mp_lPhoto->setMaximumSize(QSize(98, 98));
        mp_lPhoto->setAutoFillBackground(true);
        mp_lPhoto->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(mp_lPhoto, 0, 0, 1, 1);

        mp_frame = new QFrame(GuiVCardWidget);
        mp_frame->setObjectName(QString::fromUtf8("mp_frame"));
        mp_frame->setAutoFillBackground(true);
        mp_frame->setFrameShape(QFrame::NoFrame);
        verticalLayout = new QVBoxLayout(mp_frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mp_lPath = new QLabel(mp_frame);
        mp_lPath->setObjectName(QString::fromUtf8("mp_lPath"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_lPath->sizePolicy().hasHeightForWidth());
        mp_lPath->setSizePolicy(sizePolicy1);
        mp_lPath->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mp_lPath->setWordWrap(true);
        mp_lPath->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(mp_lPath);

        mp_lName = new QLabel(mp_frame);
        mp_lName->setObjectName(QString::fromUtf8("mp_lName"));
        sizePolicy1.setHeightForWidth(mp_lName->sizePolicy().hasHeightForWidth());
        mp_lName->setSizePolicy(sizePolicy1);
        mp_lName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mp_lName->setWordWrap(true);
        mp_lName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(mp_lName);

        mp_lStatusDescription = new QLabel(mp_frame);
        mp_lStatusDescription->setObjectName(QString::fromUtf8("mp_lStatusDescription"));
        sizePolicy1.setHeightForWidth(mp_lStatusDescription->sizePolicy().hasHeightForWidth());
        mp_lStatusDescription->setSizePolicy(sizePolicy1);
        mp_lStatusDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mp_lStatusDescription->setWordWrap(true);
        mp_lStatusDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(mp_lStatusDescription);

        mp_lBirthday = new QLabel(mp_frame);
        mp_lBirthday->setObjectName(QString::fromUtf8("mp_lBirthday"));
        sizePolicy1.setHeightForWidth(mp_lBirthday->sizePolicy().hasHeightForWidth());
        mp_lBirthday->setSizePolicy(sizePolicy1);
        mp_lBirthday->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mp_lBirthday->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(mp_lBirthday);

        mp_lEmail = new QLabel(mp_frame);
        mp_lEmail->setObjectName(QString::fromUtf8("mp_lEmail"));
        sizePolicy1.setHeightForWidth(mp_lEmail->sizePolicy().hasHeightForWidth());
        mp_lEmail->setSizePolicy(sizePolicy1);
        mp_lEmail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mp_lEmail->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(mp_lEmail);

        mp_lPhone = new QLabel(mp_frame);
        mp_lPhone->setObjectName(QString::fromUtf8("mp_lPhone"));
        sizePolicy1.setHeightForWidth(mp_lPhone->sizePolicy().hasHeightForWidth());
        mp_lPhone->setSizePolicy(sizePolicy1);
        mp_lPhone->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mp_lPhone->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(mp_lPhone);

        mp_lRoom = new QLabel(mp_frame);
        mp_lRoom->setObjectName(QString::fromUtf8("mp_lRoom"));
        mp_lRoom->setWordWrap(true);

        verticalLayout->addWidget(mp_lRoom);

        line = new QFrame(mp_frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        mp_lWorkgroups = new QLabel(mp_frame);
        mp_lWorkgroups->setObjectName(QString::fromUtf8("mp_lWorkgroups"));
        mp_lWorkgroups->setWordWrap(true);

        verticalLayout->addWidget(mp_lWorkgroups);

        mp_teInfo = new QPlainTextEdit(mp_frame);
        mp_teInfo->setObjectName(QString::fromUtf8("mp_teInfo"));
        mp_teInfo->setMaximumSize(QSize(16777215, 90));
        mp_teInfo->setFrameShape(QFrame::StyledPanel);
        mp_teInfo->setLineWidth(2);
        mp_teInfo->setMidLineWidth(1);
        mp_teInfo->setUndoRedoEnabled(false);
        mp_teInfo->setReadOnly(true);
        mp_teInfo->setPlainText(QString::fromUtf8(""));

        verticalLayout->addWidget(mp_teInfo);


        gridLayout->addWidget(mp_frame, 0, 1, 2, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        mp_frameBottom = new QFrame(GuiVCardWidget);
        mp_frameBottom->setObjectName(QString::fromUtf8("mp_frameBottom"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_frameBottom->sizePolicy().hasHeightForWidth());
        mp_frameBottom->setSizePolicy(sizePolicy2);
        mp_frameBottom->setMinimumSize(QSize(0, 32));
        mp_frameBottom->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(mp_frameBottom);
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mp_lStatus = new QLabel(mp_frameBottom);
        mp_lStatus->setObjectName(QString::fromUtf8("mp_lStatus"));
        sizePolicy1.setHeightForWidth(mp_lStatus->sizePolicy().hasHeightForWidth());
        mp_lStatus->setSizePolicy(sizePolicy1);
        mp_lStatus->setMinimumSize(QSize(140, 0));
        mp_lStatus->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(mp_lStatus);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mp_pbChat = new QPushButton(mp_frameBottom);
        mp_pbChat->setObjectName(QString::fromUtf8("mp_pbChat"));
        mp_pbChat->setMinimumSize(QSize(20, 20));
        mp_pbChat->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/chat.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbChat->setIcon(icon);
        mp_pbChat->setFlat(true);

        horizontalLayout->addWidget(mp_pbChat);

        mp_pbFile = new QPushButton(mp_frameBottom);
        mp_pbFile->setObjectName(QString::fromUtf8("mp_pbFile"));
        sizePolicy.setHeightForWidth(mp_pbFile->sizePolicy().hasHeightForWidth());
        mp_pbFile->setSizePolicy(sizePolicy);
        mp_pbFile->setMinimumSize(QSize(20, 20));
        mp_pbFile->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/send-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbFile->setIcon(icon1);
        mp_pbFile->setFlat(true);

        horizontalLayout->addWidget(mp_pbFile);

        mp_pbBuzz = new QPushButton(mp_frameBottom);
        mp_pbBuzz->setObjectName(QString::fromUtf8("mp_pbBuzz"));
        sizePolicy.setHeightForWidth(mp_pbBuzz->sizePolicy().hasHeightForWidth());
        mp_pbBuzz->setSizePolicy(sizePolicy);
        mp_pbBuzz->setMinimumSize(QSize(20, 20));
        mp_pbBuzz->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/bell.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbBuzz->setIcon(icon2);
        mp_pbBuzz->setFlat(true);

        horizontalLayout->addWidget(mp_pbBuzz);

        mp_pbHelp = new QPushButton(mp_frameBottom);
        mp_pbHelp->setObjectName(QString::fromUtf8("mp_pbHelp"));
        sizePolicy.setHeightForWidth(mp_pbHelp->sizePolicy().hasHeightForWidth());
        mp_pbHelp->setSizePolicy(sizePolicy);
        mp_pbHelp->setMinimumSize(QSize(20, 20));
        mp_pbHelp->setMaximumSize(QSize(20, 20));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbHelp->setIcon(icon3);
        mp_pbHelp->setFlat(true);

        horizontalLayout->addWidget(mp_pbHelp);

        mp_pbColor = new QPushButton(mp_frameBottom);
        mp_pbColor->setObjectName(QString::fromUtf8("mp_pbColor"));
        sizePolicy.setHeightForWidth(mp_pbColor->sizePolicy().hasHeightForWidth());
        mp_pbColor->setSizePolicy(sizePolicy);
        mp_pbColor->setMinimumSize(QSize(20, 20));
        mp_pbColor->setMaximumSize(QSize(20, 20));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/font-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbColor->setIcon(icon4);
        mp_pbColor->setFlat(true);

        horizontalLayout->addWidget(mp_pbColor);

        mp_pbFavorite = new QPushButton(mp_frameBottom);
        mp_pbFavorite->setObjectName(QString::fromUtf8("mp_pbFavorite"));
        sizePolicy.setHeightForWidth(mp_pbFavorite->sizePolicy().hasHeightForWidth());
        mp_pbFavorite->setSizePolicy(sizePolicy);
        mp_pbFavorite->setMinimumSize(QSize(20, 20));
        mp_pbFavorite->setMaximumSize(QSize(20, 20));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/star.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbFavorite->setIcon(icon5);
        mp_pbFavorite->setFlat(true);

        horizontalLayout->addWidget(mp_pbFavorite);

        mp_pbRemove = new QPushButton(mp_frameBottom);
        mp_pbRemove->setObjectName(QString::fromUtf8("mp_pbRemove"));
        mp_pbRemove->setMinimumSize(QSize(20, 20));
        mp_pbRemove->setMaximumSize(QSize(20, 20));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbRemove->setIcon(icon6);
        mp_pbRemove->setFlat(true);

        horizontalLayout->addWidget(mp_pbRemove);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(mp_frameBottom, 2, 0, 1, 2);

        QWidget::setTabOrder(mp_pbChat, mp_pbFile);
        QWidget::setTabOrder(mp_pbFile, mp_pbColor);

        retranslateUi(GuiVCardWidget);

        mp_pbChat->setDefault(true);
        mp_pbRemove->setDefault(false);


        QMetaObject::connectSlotsByName(GuiVCardWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiVCardWidget)
    {
        mp_lPhoto->setText(QString());
        mp_lPath->setText(QCoreApplication::translate("GuiVCardWidget", "User Path", nullptr));
        mp_lName->setText(QCoreApplication::translate("GuiVCardWidget", "User Name", nullptr));
        mp_lStatusDescription->setText(QCoreApplication::translate("GuiVCardWidget", "Status description", nullptr));
        mp_lBirthday->setText(QCoreApplication::translate("GuiVCardWidget", "Birthday", nullptr));
        mp_lEmail->setText(QCoreApplication::translate("GuiVCardWidget", "Email", nullptr));
        mp_lPhone->setText(QCoreApplication::translate("GuiVCardWidget", "Phone", nullptr));
        mp_lRoom->setText(QCoreApplication::translate("GuiVCardWidget", "Room position", nullptr));
        mp_lWorkgroups->setText(QCoreApplication::translate("GuiVCardWidget", "Workgroups", nullptr));
        mp_lStatus->setText(QCoreApplication::translate("GuiVCardWidget", "S", nullptr));
#if QT_CONFIG(tooltip)
        mp_pbChat->setToolTip(QCoreApplication::translate("GuiVCardWidget", "Open chat", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbChat->setText(QString());
#if QT_CONFIG(tooltip)
        mp_pbFile->setToolTip(QCoreApplication::translate("GuiVCardWidget", "Send a file", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbFile->setText(QString());
#if QT_CONFIG(tooltip)
        mp_pbBuzz->setToolTip(QCoreApplication::translate("GuiVCardWidget", "Send a buzz", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbBuzz->setText(QString());
#if QT_CONFIG(tooltip)
        mp_pbHelp->setToolTip(QCoreApplication::translate("GuiVCardWidget", "Ask for help", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbHelp->setText(QString());
#if QT_CONFIG(tooltip)
        mp_pbColor->setToolTip(QCoreApplication::translate("GuiVCardWidget", "Change the nickname color", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbColor->setText(QString());
#if QT_CONFIG(tooltip)
        mp_pbRemove->setToolTip(QCoreApplication::translate("GuiVCardWidget", "Remove user", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbRemove->setText(QString());
        (void)GuiVCardWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiVCardWidget: public Ui_GuiVCardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIVCARD_H
