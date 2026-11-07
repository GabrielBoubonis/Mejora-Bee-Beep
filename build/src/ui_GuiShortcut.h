/********************************************************************************
** Form generated from reading UI file 'GuiShortcut.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISHORTCUT_H
#define UI_GUISHORTCUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiShortcutDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mp_cbUseShortcuts;
    QSpacerItem *horizontalSpacer_3;
    QTreeWidget *mp_twShortcuts;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mp_pbDefault;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;

    void setupUi(QDialog *GuiShortcutDialog)
    {
        if (GuiShortcutDialog->objectName().isEmpty())
            GuiShortcutDialog->setObjectName(QString::fromUtf8("GuiShortcutDialog"));
        GuiShortcutDialog->setWindowModality(Qt::NonModal);
        GuiShortcutDialog->resize(483, 367);
        gridLayout = new QGridLayout(GuiShortcutDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mp_cbUseShortcuts = new QCheckBox(GuiShortcutDialog);
        mp_cbUseShortcuts->setObjectName(QString::fromUtf8("mp_cbUseShortcuts"));

        horizontalLayout->addWidget(mp_cbUseShortcuts);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mp_twShortcuts = new QTreeWidget(GuiShortcutDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twShortcuts->setHeaderItem(__qtreewidgetitem);
        mp_twShortcuts->setObjectName(QString::fromUtf8("mp_twShortcuts"));
        mp_twShortcuts->setRootIsDecorated(true);
        mp_twShortcuts->setColumnCount(2);

        gridLayout->addWidget(mp_twShortcuts, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_pbDefault = new QPushButton(GuiShortcutDialog);
        mp_pbDefault->setObjectName(QString::fromUtf8("mp_pbDefault"));
        mp_pbDefault->setAutoDefault(false);

        horizontalLayout_2->addWidget(mp_pbDefault);

        horizontalSpacer = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mp_pbOk = new QPushButton(GuiShortcutDialog);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));
        mp_pbOk->setAutoDefault(false);

        horizontalLayout_2->addWidget(mp_pbOk);

        mp_pbCancel = new QPushButton(GuiShortcutDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));
        mp_pbCancel->setAutoDefault(false);

        horizontalLayout_2->addWidget(mp_pbCancel);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        QWidget::setTabOrder(mp_cbUseShortcuts, mp_twShortcuts);
        QWidget::setTabOrder(mp_twShortcuts, mp_pbDefault);
        QWidget::setTabOrder(mp_pbDefault, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiShortcutDialog);

        mp_pbOk->setDefault(true);


        QMetaObject::connectSlotsByName(GuiShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiShortcutDialog)
    {
        GuiShortcutDialog->setWindowTitle(QCoreApplication::translate("GuiShortcutDialog", "Dialog", nullptr));
        mp_cbUseShortcuts->setText(QCoreApplication::translate("GuiShortcutDialog", "Use custom shortcuts", nullptr));
#if QT_CONFIG(statustip)
        mp_pbDefault->setStatusTip(QCoreApplication::translate("GuiShortcutDialog", "Restore default shortcuts", nullptr));
#endif // QT_CONFIG(statustip)
        mp_pbDefault->setText(QCoreApplication::translate("GuiShortcutDialog", "Restore", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiShortcutDialog", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiShortcutDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiShortcutDialog: public Ui_GuiShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISHORTCUT_H
