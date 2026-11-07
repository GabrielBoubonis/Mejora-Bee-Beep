/********************************************************************************
** Form generated from reading UI file 'GuiWizard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIWIZARD_H
#define UI_GUIWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GuiWizardDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbChangeUser;
    QPushButton *mp_pbCancel;
    QGridLayout *gridLayout;
    QLabel *mp_lPix;
    QLabel *mp_lWelcome;
    QLabel *mp_lAccount;
    QLineEdit *mp_leName;

    void setupUi(QDialog *GuiWizardDialog)
    {
        if (GuiWizardDialog->objectName().isEmpty())
            GuiWizardDialog->setObjectName(QString::fromUtf8("GuiWizardDialog"));
        GuiWizardDialog->resize(320, 133);
        GuiWizardDialog->setModal(true);
        gridLayout_2 = new QGridLayout(GuiWizardDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        mp_pbChangeUser = new QPushButton(GuiWizardDialog);
        mp_pbChangeUser->setObjectName(QString::fromUtf8("mp_pbChangeUser"));
        mp_pbChangeUser->setAutoDefault(false);

        gridLayout_2->addWidget(mp_pbChangeUser, 1, 1, 1, 1);

        mp_pbCancel = new QPushButton(GuiWizardDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));
        mp_pbCancel->setAutoDefault(false);

        gridLayout_2->addWidget(mp_pbCancel, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_lPix = new QLabel(GuiWizardDialog);
        mp_lPix->setObjectName(QString::fromUtf8("mp_lPix"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lPix->sizePolicy().hasHeightForWidth());
        mp_lPix->setSizePolicy(sizePolicy);
        mp_lPix->setMaximumSize(QSize(64, 64));
        mp_lPix->setPixmap(QPixmap(QString::fromUtf8(":/images/beebeep.png")));
        mp_lPix->setScaledContents(true);

        gridLayout->addWidget(mp_lPix, 0, 0, 3, 1);

        mp_lWelcome = new QLabel(GuiWizardDialog);
        mp_lWelcome->setObjectName(QString::fromUtf8("mp_lWelcome"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_lWelcome->sizePolicy().hasHeightForWidth());
        mp_lWelcome->setSizePolicy(sizePolicy1);
        mp_lWelcome->setWordWrap(true);

        gridLayout->addWidget(mp_lWelcome, 0, 1, 1, 1);

        mp_lAccount = new QLabel(GuiWizardDialog);
        mp_lAccount->setObjectName(QString::fromUtf8("mp_lAccount"));
        sizePolicy1.setHeightForWidth(mp_lAccount->sizePolicy().hasHeightForWidth());
        mp_lAccount->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mp_lAccount, 1, 1, 1, 1);

        mp_leName = new QLineEdit(GuiWizardDialog);
        mp_leName->setObjectName(QString::fromUtf8("mp_leName"));

        gridLayout->addWidget(mp_leName, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 3);

        QWidget::setTabOrder(mp_leName, mp_pbChangeUser);

        retranslateUi(GuiWizardDialog);

        mp_pbChangeUser->setDefault(true);


        QMetaObject::connectSlotsByName(GuiWizardDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiWizardDialog)
    {
        GuiWizardDialog->setWindowTitle(QCoreApplication::translate("GuiWizardDialog", "Dialog", nullptr));
        mp_pbChangeUser->setText(QCoreApplication::translate("GuiWizardDialog", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiWizardDialog", "Cancel", nullptr));
        mp_lPix->setText(QString());
        mp_lWelcome->setText(QCoreApplication::translate("GuiWizardDialog", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiWizardDialog: public Ui_GuiWizardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIWIZARD_H
