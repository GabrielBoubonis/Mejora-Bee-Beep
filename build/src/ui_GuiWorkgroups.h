/********************************************************************************
** Form generated from reading UI file 'GuiWorkgroups.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIWORKGROUPS_H
#define UI_GUIWORKGROUPS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiWorkgroupsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *mp_lWorkgroup;
    QTreeWidget *mp_twWorkgroups;
    QPushButton *mp_pbAdd;
    QLineEdit *mp_leWorkgroup;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;
    QCheckBox *mp_cbAcceptOnlyWorkgroups;
    QFrame *line;

    void setupUi(QDialog *GuiWorkgroupsDialog)
    {
        if (GuiWorkgroupsDialog->objectName().isEmpty())
            GuiWorkgroupsDialog->setObjectName(QString::fromUtf8("GuiWorkgroupsDialog"));
        GuiWorkgroupsDialog->setWindowModality(Qt::NonModal);
        GuiWorkgroupsDialog->resize(383, 338);
        gridLayout = new QGridLayout(GuiWorkgroupsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_lWorkgroup = new QLabel(GuiWorkgroupsDialog);
        mp_lWorkgroup->setObjectName(QString::fromUtf8("mp_lWorkgroup"));
        mp_lWorkgroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lWorkgroup, 0, 0, 1, 2);

        mp_twWorkgroups = new QTreeWidget(GuiWorkgroupsDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twWorkgroups->setHeaderItem(__qtreewidgetitem);
        mp_twWorkgroups->setObjectName(QString::fromUtf8("mp_twWorkgroups"));
        mp_twWorkgroups->setColumnCount(1);
        mp_twWorkgroups->header()->setMinimumSectionSize(160);
        mp_twWorkgroups->header()->setStretchLastSection(true);

        gridLayout->addWidget(mp_twWorkgroups, 2, 0, 1, 2);

        mp_pbAdd = new QPushButton(GuiWorkgroupsDialog);
        mp_pbAdd->setObjectName(QString::fromUtf8("mp_pbAdd"));
        mp_pbAdd->setMinimumSize(QSize(80, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbAdd->setIcon(icon);

        gridLayout->addWidget(mp_pbAdd, 1, 1, 1, 1);

        mp_leWorkgroup = new QLineEdit(GuiWorkgroupsDialog);
        mp_leWorkgroup->setObjectName(QString::fromUtf8("mp_leWorkgroup"));

        gridLayout->addWidget(mp_leWorkgroup, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mp_pbOk = new QPushButton(GuiWorkgroupsDialog);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        horizontalLayout_2->addWidget(mp_pbOk);

        mp_pbCancel = new QPushButton(GuiWorkgroupsDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        horizontalLayout_2->addWidget(mp_pbCancel);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 2);

        mp_cbAcceptOnlyWorkgroups = new QCheckBox(GuiWorkgroupsDialog);
        mp_cbAcceptOnlyWorkgroups->setObjectName(QString::fromUtf8("mp_cbAcceptOnlyWorkgroups"));

        gridLayout->addWidget(mp_cbAcceptOnlyWorkgroups, 3, 0, 1, 2);

        line = new QFrame(GuiWorkgroupsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);

        QWidget::setTabOrder(mp_leWorkgroup, mp_pbAdd);
        QWidget::setTabOrder(mp_pbAdd, mp_twWorkgroups);
        QWidget::setTabOrder(mp_twWorkgroups, mp_cbAcceptOnlyWorkgroups);
        QWidget::setTabOrder(mp_cbAcceptOnlyWorkgroups, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiWorkgroupsDialog);

        QMetaObject::connectSlotsByName(GuiWorkgroupsDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiWorkgroupsDialog)
    {
        GuiWorkgroupsDialog->setWindowTitle(QCoreApplication::translate("GuiWorkgroupsDialog", "Workgroups", nullptr));
        mp_lWorkgroup->setText(QCoreApplication::translate("GuiWorkgroupsDialog", "Enter the name of workgroup you want to add ", nullptr));
        mp_pbAdd->setText(QCoreApplication::translate("GuiWorkgroupsDialog", "Add", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiWorkgroupsDialog", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiWorkgroupsDialog", "Cancel", nullptr));
        mp_cbAcceptOnlyWorkgroups->setText(QCoreApplication::translate("GuiWorkgroupsDialog", "Accept connections only from your workgroups", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiWorkgroupsDialog: public Ui_GuiWorkgroupsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIWORKGROUPS_H
