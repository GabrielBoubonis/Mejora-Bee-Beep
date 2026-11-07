/********************************************************************************
** Form generated from reading UI file 'GuiCreateGroup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUICREATEGROUP_H
#define UI_GUICREATEGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiCreateGroup
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbCancel;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbLeave;
    QTreeWidget *mp_twUsers;
    QLineEdit *mp_leName;
    QLabel *mp_labelName;
    QLabel *mp_labelText;

    void setupUi(QDialog *GuiCreateGroup)
    {
        if (GuiCreateGroup->objectName().isEmpty())
            GuiCreateGroup->setObjectName(QString::fromUtf8("GuiCreateGroup"));
        GuiCreateGroup->resize(460, 420);
        gridLayout = new QGridLayout(GuiCreateGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        mp_pbCancel = new QPushButton(GuiCreateGroup);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        gridLayout->addWidget(mp_pbCancel, 4, 3, 1, 1);

        mp_pbOk = new QPushButton(GuiCreateGroup);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        gridLayout->addWidget(mp_pbOk, 4, 2, 1, 1);

        mp_pbLeave = new QPushButton(GuiCreateGroup);
        mp_pbLeave->setObjectName(QString::fromUtf8("mp_pbLeave"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_pbLeave->sizePolicy().hasHeightForWidth());
        mp_pbLeave->setSizePolicy(sizePolicy);
        mp_pbLeave->setMinimumSize(QSize(220, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/group-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbLeave->setIcon(icon);
        mp_pbLeave->setAutoDefault(false);

        gridLayout->addWidget(mp_pbLeave, 4, 0, 1, 1);

        mp_twUsers = new QTreeWidget(GuiCreateGroup);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twUsers->setHeaderItem(__qtreewidgetitem);
        mp_twUsers->setObjectName(QString::fromUtf8("mp_twUsers"));
        mp_twUsers->setColumnCount(1);

        gridLayout->addWidget(mp_twUsers, 3, 0, 1, 4);

        mp_leName = new QLineEdit(GuiCreateGroup);
        mp_leName->setObjectName(QString::fromUtf8("mp_leName"));

        gridLayout->addWidget(mp_leName, 1, 0, 1, 4);

        mp_labelName = new QLabel(GuiCreateGroup);
        mp_labelName->setObjectName(QString::fromUtf8("mp_labelName"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_labelName->sizePolicy().hasHeightForWidth());
        mp_labelName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mp_labelName, 0, 0, 1, 4);

        mp_labelText = new QLabel(GuiCreateGroup);
        mp_labelText->setObjectName(QString::fromUtf8("mp_labelText"));
        sizePolicy1.setHeightForWidth(mp_labelText->sizePolicy().hasHeightForWidth());
        mp_labelText->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mp_labelText, 2, 0, 1, 4);

        QWidget::setTabOrder(mp_leName, mp_twUsers);
        QWidget::setTabOrder(mp_twUsers, mp_pbLeave);
        QWidget::setTabOrder(mp_pbLeave, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiCreateGroup);

        QMetaObject::connectSlotsByName(GuiCreateGroup);
    } // setupUi

    void retranslateUi(QDialog *GuiCreateGroup)
    {
        GuiCreateGroup->setWindowTitle(QCoreApplication::translate("GuiCreateGroup", "Dialog", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiCreateGroup", "Cancel", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiCreateGroup", "Ok", nullptr));
        mp_pbLeave->setText(QCoreApplication::translate("GuiCreateGroup", "Leave this group", nullptr));
        mp_labelName->setText(QCoreApplication::translate("GuiCreateGroup", "Group chat name", nullptr));
        mp_labelText->setText(QCoreApplication::translate("GuiCreateGroup", "Members", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiCreateGroup: public Ui_GuiCreateGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUICREATEGROUP_H
