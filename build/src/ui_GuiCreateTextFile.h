/********************************************************************************
** Form generated from reading UI file 'GuiCreateTextFile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUICREATETEXTFILE_H
#define UI_GUICREATETEXTFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GuiCreateTextFileDialog
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *mp_text;
    QHBoxLayout *horizontalLayout;
    QPushButton *mp_pbSendAsFile;
    QLabel *mp_lFileSuffix;
    QLineEdit *mp_leFileSuffix;
    QCheckBox *mp_cbUseFileTmp;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mp_pbSendAsMessage;

    void setupUi(QDialog *GuiCreateTextFileDialog)
    {
        if (GuiCreateTextFileDialog->objectName().isEmpty())
            GuiCreateTextFileDialog->setObjectName(QString::fromUtf8("GuiCreateTextFileDialog"));
        GuiCreateTextFileDialog->setWindowModality(Qt::NonModal);
        GuiCreateTextFileDialog->resize(720, 436);
        gridLayout = new QGridLayout(GuiCreateTextFileDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_text = new QPlainTextEdit(GuiCreateTextFileDialog);
        mp_text->setObjectName(QString::fromUtf8("mp_text"));

        gridLayout->addWidget(mp_text, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mp_pbSendAsFile = new QPushButton(GuiCreateTextFileDialog);
        mp_pbSendAsFile->setObjectName(QString::fromUtf8("mp_pbSendAsFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/send-code.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSendAsFile->setIcon(icon);

        horizontalLayout->addWidget(mp_pbSendAsFile);

        mp_lFileSuffix = new QLabel(GuiCreateTextFileDialog);
        mp_lFileSuffix->setObjectName(QString::fromUtf8("mp_lFileSuffix"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lFileSuffix->sizePolicy().hasHeightForWidth());
        mp_lFileSuffix->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mp_lFileSuffix);

        mp_leFileSuffix = new QLineEdit(GuiCreateTextFileDialog);
        mp_leFileSuffix->setObjectName(QString::fromUtf8("mp_leFileSuffix"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_leFileSuffix->sizePolicy().hasHeightForWidth());
        mp_leFileSuffix->setSizePolicy(sizePolicy1);
        mp_leFileSuffix->setMinimumSize(QSize(60, 0));
        mp_leFileSuffix->setMaximumSize(QSize(80, 16777215));
        mp_leFileSuffix->setMaxLength(5);

        horizontalLayout->addWidget(mp_leFileSuffix);

        mp_cbUseFileTmp = new QCheckBox(GuiCreateTextFileDialog);
        mp_cbUseFileTmp->setObjectName(QString::fromUtf8("mp_cbUseFileTmp"));

        horizontalLayout->addWidget(mp_cbUseFileTmp);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mp_pbSendAsMessage = new QPushButton(GuiCreateTextFileDialog);
        mp_pbSendAsMessage->setObjectName(QString::fromUtf8("mp_pbSendAsMessage"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSendAsMessage->setIcon(icon1);

        horizontalLayout->addWidget(mp_pbSendAsMessage);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(mp_text, mp_pbSendAsFile);
        QWidget::setTabOrder(mp_pbSendAsFile, mp_leFileSuffix);
        QWidget::setTabOrder(mp_leFileSuffix, mp_cbUseFileTmp);
        QWidget::setTabOrder(mp_cbUseFileTmp, mp_pbSendAsMessage);

        retranslateUi(GuiCreateTextFileDialog);

        QMetaObject::connectSlotsByName(GuiCreateTextFileDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiCreateTextFileDialog)
    {
        GuiCreateTextFileDialog->setWindowTitle(QCoreApplication::translate("GuiCreateTextFileDialog", "Workgroups", nullptr));
        mp_pbSendAsFile->setText(QCoreApplication::translate("GuiCreateTextFileDialog", "Send as file", nullptr));
        mp_lFileSuffix->setText(QCoreApplication::translate("GuiCreateTextFileDialog", "File extension", nullptr));
        mp_cbUseFileTmp->setText(QCoreApplication::translate("GuiCreateTextFileDialog", "Use temporary file", nullptr));
        mp_pbSendAsMessage->setText(QCoreApplication::translate("GuiCreateTextFileDialog", "Send as text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiCreateTextFileDialog: public Ui_GuiCreateTextFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUICREATETEXTFILE_H
