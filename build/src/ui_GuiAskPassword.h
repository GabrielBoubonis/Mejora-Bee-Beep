/********************************************************************************
** Form generated from reading UI file 'GuiAskPassword.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIASKPASSWORD_H
#define UI_GUIASKPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GuiAskPassword
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *mp_pbCancel;
    QPushButton *mp_pbOk;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QRadioButton *mp_rbUseDefaultPassword;
    QRadioButton *mp_rbSelectPassaword;
    QSpacerItem *horizontalSpacer;
    QLineEdit *mp_lePassword;
    QSpacerItem *horizontalSpacer_3;
    QLabel *mp_labelPasswordNote;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *mp_cbSavePassword;
    QCheckBox *mp_cbAutoStart;

    void setupUi(QDialog *GuiAskPassword)
    {
        if (GuiAskPassword->objectName().isEmpty())
            GuiAskPassword->setObjectName(QString::fromUtf8("GuiAskPassword"));
        GuiAskPassword->resize(444, 218);
        GuiAskPassword->setModal(true);
        gridLayout_2 = new QGridLayout(GuiAskPassword);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mp_pbCancel = new QPushButton(GuiAskPassword);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        gridLayout_2->addWidget(mp_pbCancel, 4, 2, 1, 1);

        mp_pbOk = new QPushButton(GuiAskPassword);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        gridLayout_2->addWidget(mp_pbOk, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        frame = new QFrame(GuiAskPassword);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        mp_rbUseDefaultPassword = new QRadioButton(frame);
        mp_rbUseDefaultPassword->setObjectName(QString::fromUtf8("mp_rbUseDefaultPassword"));

        gridLayout->addWidget(mp_rbUseDefaultPassword, 0, 0, 1, 2);

        mp_rbSelectPassaword = new QRadioButton(frame);
        mp_rbSelectPassaword->setObjectName(QString::fromUtf8("mp_rbSelectPassaword"));
        mp_rbSelectPassaword->setChecked(true);

        gridLayout->addWidget(mp_rbSelectPassaword, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        mp_lePassword = new QLineEdit(frame);
        mp_lePassword->setObjectName(QString::fromUtf8("mp_lePassword"));
        mp_lePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(mp_lePassword, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        mp_labelPasswordNote = new QLabel(frame);
        mp_labelPasswordNote->setObjectName(QString::fromUtf8("mp_labelPasswordNote"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_labelPasswordNote->sizePolicy().hasHeightForWidth());
        mp_labelPasswordNote->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mp_labelPasswordNote, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        mp_cbSavePassword = new QCheckBox(frame);
        mp_cbSavePassword->setObjectName(QString::fromUtf8("mp_cbSavePassword"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_cbSavePassword->sizePolicy().hasHeightForWidth());
        mp_cbSavePassword->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mp_cbSavePassword, 4, 1, 1, 1);

        mp_cbAutoStart = new QCheckBox(frame);
        mp_cbAutoStart->setObjectName(QString::fromUtf8("mp_cbAutoStart"));
        mp_cbAutoStart->setChecked(true);

        gridLayout->addWidget(mp_cbAutoStart, 5, 0, 1, 2);


        gridLayout_2->addWidget(frame, 3, 0, 1, 3);

        QWidget::setTabOrder(mp_rbUseDefaultPassword, mp_rbSelectPassaword);
        QWidget::setTabOrder(mp_rbSelectPassaword, mp_lePassword);
        QWidget::setTabOrder(mp_lePassword, mp_cbSavePassword);
        QWidget::setTabOrder(mp_cbSavePassword, mp_cbAutoStart);
        QWidget::setTabOrder(mp_cbAutoStart, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiAskPassword);

        QMetaObject::connectSlotsByName(GuiAskPassword);
    } // setupUi

    void retranslateUi(QDialog *GuiAskPassword)
    {
        GuiAskPassword->setWindowTitle(QCoreApplication::translate("GuiAskPassword", "Dialog", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiAskPassword", "Cancel", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiAskPassword", "Ok", nullptr));
        mp_rbUseDefaultPassword->setText(QCoreApplication::translate("GuiAskPassword", "Use standard session (encrypted but authentication is not required)", nullptr));
        mp_rbSelectPassaword->setText(QCoreApplication::translate("GuiAskPassword", "Use authentication password (spaces are removed) *", nullptr));
        mp_labelPasswordNote->setText(QCoreApplication::translate("GuiAskPassword", "* Password must be the same for all user you want to connect", nullptr));
        mp_cbSavePassword->setText(QCoreApplication::translate("GuiAskPassword", "Remember password (not recommended)", nullptr));
        mp_cbAutoStart->setText(QCoreApplication::translate("GuiAskPassword", "Show this dialog at connection startup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiAskPassword: public Ui_GuiAskPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIASKPASSWORD_H
