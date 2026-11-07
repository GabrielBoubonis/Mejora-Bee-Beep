/********************************************************************************
** Form generated from reading UI file 'GuiRefusedChat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIREFUSEDCHAT_H
#define UI_GUIREFUSEDCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiRefusedChatDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;
    QTreeWidget *mp_twRefusedChats;

    void setupUi(QDialog *GuiRefusedChatDialog)
    {
        if (GuiRefusedChatDialog->objectName().isEmpty())
            GuiRefusedChatDialog->setObjectName(QString::fromUtf8("GuiRefusedChatDialog"));
        GuiRefusedChatDialog->setWindowModality(Qt::NonModal);
        GuiRefusedChatDialog->resize(490, 300);
        gridLayout = new QGridLayout(GuiRefusedChatDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mp_pbOk = new QPushButton(GuiRefusedChatDialog);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        horizontalLayout_2->addWidget(mp_pbOk);

        mp_pbCancel = new QPushButton(GuiRefusedChatDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        horizontalLayout_2->addWidget(mp_pbCancel);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        mp_twRefusedChats = new QTreeWidget(GuiRefusedChatDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twRefusedChats->setHeaderItem(__qtreewidgetitem);
        mp_twRefusedChats->setObjectName(QString::fromUtf8("mp_twRefusedChats"));
        mp_twRefusedChats->setColumnCount(1);
        mp_twRefusedChats->header()->setMinimumSectionSize(160);
        mp_twRefusedChats->header()->setStretchLastSection(true);

        gridLayout->addWidget(mp_twRefusedChats, 0, 0, 1, 2);

        QWidget::setTabOrder(mp_twRefusedChats, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiRefusedChatDialog);

        QMetaObject::connectSlotsByName(GuiRefusedChatDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiRefusedChatDialog)
    {
        GuiRefusedChatDialog->setWindowTitle(QCoreApplication::translate("GuiRefusedChatDialog", "Dialog", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiRefusedChatDialog", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiRefusedChatDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiRefusedChatDialog: public Ui_GuiRefusedChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIREFUSEDCHAT_H
