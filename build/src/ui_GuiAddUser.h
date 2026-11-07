/********************************************************************************
** Form generated from reading UI file 'GuiAddUser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIADDUSER_H
#define UI_GUIADDUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiAddUserDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *mp_lIp;
    QLineEdit *mp_leIpAddress;
    QLabel *mp_lPort;
    QLineEdit *mp_lePort;
    QLabel *mp_lComment;
    QTreeWidget *mp_twUsers;
    QCheckBox *mp_cbSplitSubnet;
    QLabel *mp_lHelp;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mp_pbAdd;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mp_pbAddUsersAuto;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;
    QLineEdit *mp_leComment;

    void setupUi(QDialog *GuiAddUserDialog)
    {
        if (GuiAddUserDialog->objectName().isEmpty())
            GuiAddUserDialog->setObjectName(QString::fromUtf8("GuiAddUserDialog"));
        GuiAddUserDialog->setWindowModality(Qt::NonModal);
        GuiAddUserDialog->resize(580, 420);
        gridLayout = new QGridLayout(GuiAddUserDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_lIp = new QLabel(GuiAddUserDialog);
        mp_lIp->setObjectName(QString::fromUtf8("mp_lIp"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lIp->sizePolicy().hasHeightForWidth());
        mp_lIp->setSizePolicy(sizePolicy);
        mp_lIp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lIp, 1, 0, 1, 1);

        mp_leIpAddress = new QLineEdit(GuiAddUserDialog);
        mp_leIpAddress->setObjectName(QString::fromUtf8("mp_leIpAddress"));
        mp_leIpAddress->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(mp_leIpAddress, 1, 1, 1, 1);

        mp_lPort = new QLabel(GuiAddUserDialog);
        mp_lPort->setObjectName(QString::fromUtf8("mp_lPort"));
        sizePolicy.setHeightForWidth(mp_lPort->sizePolicy().hasHeightForWidth());
        mp_lPort->setSizePolicy(sizePolicy);
        mp_lPort->setMinimumSize(QSize(50, 0));
        mp_lPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lPort, 1, 2, 1, 1);

        mp_lePort = new QLineEdit(GuiAddUserDialog);
        mp_lePort->setObjectName(QString::fromUtf8("mp_lePort"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_lePort->sizePolicy().hasHeightForWidth());
        mp_lePort->setSizePolicy(sizePolicy1);
        mp_lePort->setMinimumSize(QSize(75, 0));
        mp_lePort->setMaximumSize(QSize(70, 16777215));
        mp_lePort->setMaxLength(5);

        gridLayout->addWidget(mp_lePort, 1, 3, 1, 1);

        mp_lComment = new QLabel(GuiAddUserDialog);
        mp_lComment->setObjectName(QString::fromUtf8("mp_lComment"));
        mp_lComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lComment, 2, 0, 1, 1);

        mp_twUsers = new QTreeWidget(GuiAddUserDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twUsers->setHeaderItem(__qtreewidgetitem);
        mp_twUsers->setObjectName(QString::fromUtf8("mp_twUsers"));
        mp_twUsers->setColumnCount(2);
        mp_twUsers->header()->setMinimumSectionSize(160);
        mp_twUsers->header()->setStretchLastSection(true);

        gridLayout->addWidget(mp_twUsers, 5, 0, 1, 4);

        mp_cbSplitSubnet = new QCheckBox(GuiAddUserDialog);
        mp_cbSplitSubnet->setObjectName(QString::fromUtf8("mp_cbSplitSubnet"));

        gridLayout->addWidget(mp_cbSplitSubnet, 3, 1, 1, 3);

        mp_lHelp = new QLabel(GuiAddUserDialog);
        mp_lHelp->setObjectName(QString::fromUtf8("mp_lHelp"));
        sizePolicy.setHeightForWidth(mp_lHelp->sizePolicy().hasHeightForWidth());
        mp_lHelp->setSizePolicy(sizePolicy);
        mp_lHelp->setMinimumSize(QSize(0, 50));
        mp_lHelp->setTextFormat(Qt::RichText);
        mp_lHelp->setAlignment(Qt::AlignCenter);
        mp_lHelp->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mp_lHelp, 0, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mp_pbAdd = new QPushButton(GuiAddUserDialog);
        mp_pbAdd->setObjectName(QString::fromUtf8("mp_pbAdd"));
        mp_pbAdd->setMinimumSize(QSize(200, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/user-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbAdd->setIcon(icon);

        horizontalLayout->addWidget(mp_pbAdd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_pbAddUsersAuto = new QPushButton(GuiAddUserDialog);
        mp_pbAddUsersAuto->setObjectName(QString::fromUtf8("mp_pbAddUsersAuto"));
        mp_pbAddUsersAuto->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(mp_pbAddUsersAuto);

        horizontalSpacer = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mp_pbOk = new QPushButton(GuiAddUserDialog);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        horizontalLayout_2->addWidget(mp_pbOk);

        mp_pbCancel = new QPushButton(GuiAddUserDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        horizontalLayout_2->addWidget(mp_pbCancel);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 4);

        mp_leComment = new QLineEdit(GuiAddUserDialog);
        mp_leComment->setObjectName(QString::fromUtf8("mp_leComment"));

        gridLayout->addWidget(mp_leComment, 2, 1, 1, 3);

        QWidget::setTabOrder(mp_leIpAddress, mp_lePort);
        QWidget::setTabOrder(mp_lePort, mp_leComment);
        QWidget::setTabOrder(mp_leComment, mp_cbSplitSubnet);
        QWidget::setTabOrder(mp_cbSplitSubnet, mp_pbAdd);
        QWidget::setTabOrder(mp_pbAdd, mp_twUsers);
        QWidget::setTabOrder(mp_twUsers, mp_pbAddUsersAuto);
        QWidget::setTabOrder(mp_pbAddUsersAuto, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiAddUserDialog);

        QMetaObject::connectSlotsByName(GuiAddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiAddUserDialog)
    {
        GuiAddUserDialog->setWindowTitle(QCoreApplication::translate("GuiAddUserDialog", "Dialog", nullptr));
        mp_lIp->setText(QCoreApplication::translate("GuiAddUserDialog", "IP Address", nullptr));
        mp_lPort->setText(QCoreApplication::translate("GuiAddUserDialog", "Port", nullptr));
        mp_lComment->setText(QCoreApplication::translate("GuiAddUserDialog", "Comment", nullptr));
        mp_cbSplitSubnet->setText(QCoreApplication::translate("GuiAddUserDialog", "Split Subnet in IP Addresses to add all users in that range", nullptr));
        mp_lHelp->setText(QCoreApplication::translate("GuiAddUserDialog", "Add an <b>IP Address</b> and <b>Port</b> of the user you want to connect", nullptr));
        mp_pbAdd->setText(QCoreApplication::translate("GuiAddUserDialog", "Add user", nullptr));
        mp_pbAddUsersAuto->setText(QCoreApplication::translate("GuiAddUserDialog", "Auto add from your Subnet", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiAddUserDialog", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiAddUserDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiAddUserDialog: public Ui_GuiAddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIADDUSER_H
