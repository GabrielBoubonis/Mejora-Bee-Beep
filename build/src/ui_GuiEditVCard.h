/********************************************************************************
** Form generated from reading UI file 'GuiEditVCard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIEDITVCARD_H
#define UI_GUIEDITVCARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GuiVCardDialog
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *mp_gbInfo;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *mp_teInfo;
    QLabel *mp_lPhoto;
    QFrame *mp_frame;
    QGridLayout *gridLayout;
    QLineEdit *mp_leLastName;
    QDateEdit *mp_deBirthday;
    QLabel *mp_lPhone;
    QLabel *mp_lNickname;
    QLabel *mp_lFirstName;
    QLineEdit *mp_leFirstName;
    QLineEdit *mp_leEmail;
    QLabel *mp_lEmail;
    QLineEdit *mp_lePhone;
    QLabel *mp_lLastName;
    QLabel *mp_lBirthday;
    QLineEdit *mp_leNickname;
    QLabel *mp_lRoom;
    QLineEdit *mp_leRoom;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *mp_pbChangePhoto;
    QPushButton *mp_pbRemovePhoto;
    QPushButton *mp_pbColor;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mp_pbRegenerateHash;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;
    QLabel *mp_lColor;

    void setupUi(QDialog *GuiVCardDialog)
    {
        if (GuiVCardDialog->objectName().isEmpty())
            GuiVCardDialog->setObjectName(QString::fromUtf8("GuiVCardDialog"));
        GuiVCardDialog->resize(632, 423);
        gridLayout_3 = new QGridLayout(GuiVCardDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 2, 1);

        mp_gbInfo = new QGroupBox(GuiVCardDialog);
        mp_gbInfo->setObjectName(QString::fromUtf8("mp_gbInfo"));
        mp_gbInfo->setAlignment(Qt::AlignCenter);
        mp_gbInfo->setFlat(true);
        gridLayout_2 = new QGridLayout(mp_gbInfo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        mp_teInfo = new QPlainTextEdit(mp_gbInfo);
        mp_teInfo->setObjectName(QString::fromUtf8("mp_teInfo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_teInfo->sizePolicy().hasHeightForWidth());
        mp_teInfo->setSizePolicy(sizePolicy);
        mp_teInfo->setMinimumSize(QSize(0, 60));

        gridLayout_2->addWidget(mp_teInfo, 0, 0, 1, 1);


        gridLayout_3->addWidget(mp_gbInfo, 5, 1, 1, 1);

        mp_lPhoto = new QLabel(GuiVCardDialog);
        mp_lPhoto->setObjectName(QString::fromUtf8("mp_lPhoto"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_lPhoto->sizePolicy().hasHeightForWidth());
        mp_lPhoto->setSizePolicy(sizePolicy1);
        mp_lPhoto->setMinimumSize(QSize(98, 98));
        mp_lPhoto->setMaximumSize(QSize(98, 98));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        mp_lPhoto->setPalette(palette);
        mp_lPhoto->setAutoFillBackground(true);
        mp_lPhoto->setFrameShape(QFrame::StyledPanel);
        mp_lPhoto->setFrameShadow(QFrame::Plain);
        mp_lPhoto->setScaledContents(true);

        gridLayout_3->addWidget(mp_lPhoto, 0, 0, 1, 1);

        mp_frame = new QFrame(GuiVCardDialog);
        mp_frame->setObjectName(QString::fromUtf8("mp_frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_frame->sizePolicy().hasHeightForWidth());
        mp_frame->setSizePolicy(sizePolicy2);
        mp_frame->setFrameShape(QFrame::StyledPanel);
        mp_frame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(mp_frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_leLastName = new QLineEdit(mp_frame);
        mp_leLastName->setObjectName(QString::fromUtf8("mp_leLastName"));
        mp_leLastName->setMaxLength(30);

        gridLayout->addWidget(mp_leLastName, 2, 1, 1, 1);

        mp_deBirthday = new QDateEdit(mp_frame);
        mp_deBirthday->setObjectName(QString::fromUtf8("mp_deBirthday"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mp_deBirthday->sizePolicy().hasHeightForWidth());
        mp_deBirthday->setSizePolicy(sizePolicy3);
        mp_deBirthday->setAlignment(Qt::AlignCenter);
        mp_deBirthday->setCalendarPopup(true);

        gridLayout->addWidget(mp_deBirthday, 3, 1, 1, 1);

        mp_lPhone = new QLabel(mp_frame);
        mp_lPhone->setObjectName(QString::fromUtf8("mp_lPhone"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mp_lPhone->sizePolicy().hasHeightForWidth());
        mp_lPhone->setSizePolicy(sizePolicy4);
        mp_lPhone->setMinimumSize(QSize(76, 0));
        mp_lPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lPhone, 5, 0, 1, 1);

        mp_lNickname = new QLabel(mp_frame);
        mp_lNickname->setObjectName(QString::fromUtf8("mp_lNickname"));
        sizePolicy4.setHeightForWidth(mp_lNickname->sizePolicy().hasHeightForWidth());
        mp_lNickname->setSizePolicy(sizePolicy4);
        mp_lNickname->setMinimumSize(QSize(76, 0));
        mp_lNickname->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lNickname, 0, 0, 1, 1);

        mp_lFirstName = new QLabel(mp_frame);
        mp_lFirstName->setObjectName(QString::fromUtf8("mp_lFirstName"));
        sizePolicy4.setHeightForWidth(mp_lFirstName->sizePolicy().hasHeightForWidth());
        mp_lFirstName->setSizePolicy(sizePolicy4);
        mp_lFirstName->setMinimumSize(QSize(76, 0));
        mp_lFirstName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lFirstName, 1, 0, 1, 1);

        mp_leFirstName = new QLineEdit(mp_frame);
        mp_leFirstName->setObjectName(QString::fromUtf8("mp_leFirstName"));
        mp_leFirstName->setMaxLength(30);

        gridLayout->addWidget(mp_leFirstName, 1, 1, 1, 1);

        mp_leEmail = new QLineEdit(mp_frame);
        mp_leEmail->setObjectName(QString::fromUtf8("mp_leEmail"));
        mp_leEmail->setMaxLength(80);

        gridLayout->addWidget(mp_leEmail, 4, 1, 1, 1);

        mp_lEmail = new QLabel(mp_frame);
        mp_lEmail->setObjectName(QString::fromUtf8("mp_lEmail"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mp_lEmail->sizePolicy().hasHeightForWidth());
        mp_lEmail->setSizePolicy(sizePolicy5);
        mp_lEmail->setMinimumSize(QSize(76, 0));
        mp_lEmail->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lEmail, 4, 0, 1, 1);

        mp_lePhone = new QLineEdit(mp_frame);
        mp_lePhone->setObjectName(QString::fromUtf8("mp_lePhone"));
        mp_lePhone->setMaxLength(80);

        gridLayout->addWidget(mp_lePhone, 5, 1, 1, 1);

        mp_lLastName = new QLabel(mp_frame);
        mp_lLastName->setObjectName(QString::fromUtf8("mp_lLastName"));
        sizePolicy4.setHeightForWidth(mp_lLastName->sizePolicy().hasHeightForWidth());
        mp_lLastName->setSizePolicy(sizePolicy4);
        mp_lLastName->setMinimumSize(QSize(76, 0));
        mp_lLastName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lLastName, 2, 0, 1, 1);

        mp_lBirthday = new QLabel(mp_frame);
        mp_lBirthday->setObjectName(QString::fromUtf8("mp_lBirthday"));
        sizePolicy5.setHeightForWidth(mp_lBirthday->sizePolicy().hasHeightForWidth());
        mp_lBirthday->setSizePolicy(sizePolicy5);
        mp_lBirthday->setMinimumSize(QSize(76, 0));
        mp_lBirthday->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lBirthday, 3, 0, 1, 1);

        mp_leNickname = new QLineEdit(mp_frame);
        mp_leNickname->setObjectName(QString::fromUtf8("mp_leNickname"));
        mp_leNickname->setMaxLength(50);

        gridLayout->addWidget(mp_leNickname, 0, 1, 1, 1);

        mp_lRoom = new QLabel(mp_frame);
        mp_lRoom->setObjectName(QString::fromUtf8("mp_lRoom"));
        mp_lRoom->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lRoom, 6, 0, 1, 1);

        mp_leRoom = new QLineEdit(mp_frame);
        mp_leRoom->setObjectName(QString::fromUtf8("mp_leRoom"));

        gridLayout->addWidget(mp_leRoom, 6, 1, 1, 1);


        gridLayout_3->addWidget(mp_frame, 0, 1, 5, 1);

        frame = new QFrame(GuiVCardDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy5.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy5);
        frame->setMinimumSize(QSize(98, 42));
        frame->setMaximumSize(QSize(98, 16777215));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        mp_pbChangePhoto = new QPushButton(frame);
        mp_pbChangePhoto->setObjectName(QString::fromUtf8("mp_pbChangePhoto"));
        mp_pbChangePhoto->setMaximumSize(QSize(26, 26));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbChangePhoto->setIcon(icon);
        mp_pbChangePhoto->setIconSize(QSize(24, 24));
        mp_pbChangePhoto->setAutoDefault(false);
        mp_pbChangePhoto->setFlat(true);

        horizontalLayout->addWidget(mp_pbChangePhoto);

        mp_pbRemovePhoto = new QPushButton(frame);
        mp_pbRemovePhoto->setObjectName(QString::fromUtf8("mp_pbRemovePhoto"));
        mp_pbRemovePhoto->setMaximumSize(QSize(26, 26));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbRemovePhoto->setIcon(icon1);
        mp_pbRemovePhoto->setIconSize(QSize(24, 24));
        mp_pbRemovePhoto->setAutoDefault(false);
        mp_pbRemovePhoto->setFlat(true);

        horizontalLayout->addWidget(mp_pbRemovePhoto);

        mp_pbColor = new QPushButton(frame);
        mp_pbColor->setObjectName(QString::fromUtf8("mp_pbColor"));
        mp_pbColor->setMaximumSize(QSize(26, 26));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/font-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbColor->setIcon(icon2);
        mp_pbColor->setIconSize(QSize(24, 24));
        mp_pbColor->setAutoDefault(false);
        mp_pbColor->setFlat(true);

        horizontalLayout->addWidget(mp_pbColor);


        gridLayout_3->addWidget(frame, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_pbRegenerateHash = new QPushButton(GuiVCardDialog);
        mp_pbRegenerateHash->setObjectName(QString::fromUtf8("mp_pbRegenerateHash"));
        mp_pbRegenerateHash->setMinimumSize(QSize(220, 0));

        horizontalLayout_2->addWidget(mp_pbRegenerateHash);

        horizontalSpacer = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mp_pbOk = new QPushButton(GuiVCardDialog);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        horizontalLayout_2->addWidget(mp_pbOk);

        mp_pbCancel = new QPushButton(GuiVCardDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        horizontalLayout_2->addWidget(mp_pbCancel);


        gridLayout_3->addLayout(horizontalLayout_2, 6, 0, 1, 2);

        mp_lColor = new QLabel(GuiVCardDialog);
        mp_lColor->setObjectName(QString::fromUtf8("mp_lColor"));

        gridLayout_3->addWidget(mp_lColor, 1, 0, 1, 1);

        QWidget::setTabOrder(mp_leNickname, mp_leFirstName);
        QWidget::setTabOrder(mp_leFirstName, mp_leLastName);
        QWidget::setTabOrder(mp_leLastName, mp_deBirthday);
        QWidget::setTabOrder(mp_deBirthday, mp_leEmail);
        QWidget::setTabOrder(mp_leEmail, mp_lePhone);
        QWidget::setTabOrder(mp_lePhone, mp_leRoom);
        QWidget::setTabOrder(mp_leRoom, mp_teInfo);
        QWidget::setTabOrder(mp_teInfo, mp_pbChangePhoto);
        QWidget::setTabOrder(mp_pbChangePhoto, mp_pbRemovePhoto);
        QWidget::setTabOrder(mp_pbRemovePhoto, mp_pbColor);
        QWidget::setTabOrder(mp_pbColor, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);
        QWidget::setTabOrder(mp_pbCancel, mp_pbRegenerateHash);

        retranslateUi(GuiVCardDialog);

        QMetaObject::connectSlotsByName(GuiVCardDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiVCardDialog)
    {
        GuiVCardDialog->setWindowTitle(QCoreApplication::translate("GuiVCardDialog", "Dialog", nullptr));
        mp_gbInfo->setTitle(QCoreApplication::translate("GuiVCardDialog", "Information to display to other users", nullptr));
        mp_lPhoto->setText(QString());
        mp_deBirthday->setDisplayFormat(QCoreApplication::translate("GuiVCardDialog", "dd/MM/yyyy", nullptr));
        mp_lPhone->setText(QCoreApplication::translate("GuiVCardDialog", "Phone", nullptr));
        mp_lNickname->setText(QCoreApplication::translate("GuiVCardDialog", "Nickname", nullptr));
        mp_lFirstName->setText(QCoreApplication::translate("GuiVCardDialog", "First name", nullptr));
        mp_lEmail->setText(QCoreApplication::translate("GuiVCardDialog", "Email", nullptr));
        mp_lLastName->setText(QCoreApplication::translate("GuiVCardDialog", "Last name", nullptr));
        mp_lBirthday->setText(QCoreApplication::translate("GuiVCardDialog", "Birthday", nullptr));
        mp_leNickname->setText(QString());
#if QT_CONFIG(tooltip)
        mp_lRoom->setToolTip(QCoreApplication::translate("GuiVCardDialog", "Your room, location or address", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_lRoom->setText(QCoreApplication::translate("GuiVCardDialog", "Location", nullptr));
#if QT_CONFIG(tooltip)
        mp_pbChangePhoto->setToolTip(QCoreApplication::translate("GuiVCardDialog", "Add or change photo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mp_pbRemovePhoto->setToolTip(QCoreApplication::translate("GuiVCardDialog", "Remove photo", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbRemovePhoto->setText(QString());
#if QT_CONFIG(tooltip)
        mp_pbColor->setToolTip(QCoreApplication::translate("GuiVCardDialog", "Change your nickname color", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbRegenerateHash->setText(QCoreApplication::translate("GuiVCardDialog", "Regenerate your hash code...", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiVCardDialog", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiVCardDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiVCardDialog: public Ui_GuiVCardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIEDITVCARD_H
