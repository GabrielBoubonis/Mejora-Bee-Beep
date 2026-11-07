/********************************************************************************
** Form generated from reading UI file 'GuiNetwork.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUINETWORK_H
#define UI_GUINETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_GuiNetworkWidget
{
public:
    QGridLayout *gridLayout_5;
    QFrame *mp_frame1;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *mp_lUdpPort;
    QLineEdit *mp_leMulticastGroup;
    QLabel *mp_lBase;
    QSpinBox *mp_sbMaxUsersToContact;
    QLabel *mp_lBroadcastInterval;
    QLabel *mp_lMaxUsersToContact;
    QLineEdit *mp_leUdpPort;
    QLabel *mp_lHelpMulticastGroup;
    QSpinBox *mp_sbIpMulticastTtl;
    QLineEdit *mp_leSubnet;
    QSpacerItem *horizontalSpacer_7;
    QLabel *mp_lMulticastGroup;
    QLabel *mp_lHelpSubnet;
    QLabel *mp_lHelpTtl;
    QLabel *mp_lHelpUdp;
    QSpacerItem *horizontalSpacer;
    QLabel *mp_lIpMulticastTtl;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *mp_sbBroadcastInterval;
    QComboBox *mp_comboPreferredSubnet;
    QLabel *mp_lPreferredSubnet;
    QFrame *mp_frame2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QCheckBox *mp_cbUseDefaultMulticastGroupAddress;
    QCheckBox *mp_cbBroadcastInterval;
    QCheckBox *mp_cbBroadcastToLocalSubnetAlways;
    QCheckBox *mp_cbBroadcastToOfflineUsers;
    QCheckBox *mp_cbUseHive;
    QCheckBox *mp_cbDisableProxy;
    QCheckBox *mp_cbPreventMultipleConnectionsFromSingleHostAddress;
    QCheckBox *mp_cbEnableMDns;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *mp_pbShowFileHosts;
    QSpacerItem *horizontalSpacer_5;
    QLabel *mp_lRO;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;

    void setupUi(QDialog *GuiNetworkWidget)
    {
        if (GuiNetworkWidget->objectName().isEmpty())
            GuiNetworkWidget->setObjectName(QString::fromUtf8("GuiNetworkWidget"));
        GuiNetworkWidget->resize(720, 450);
        gridLayout_5 = new QGridLayout(GuiNetworkWidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mp_frame1 = new QFrame(GuiNetworkWidget);
        mp_frame1->setObjectName(QString::fromUtf8("mp_frame1"));
        mp_frame1->setFrameShape(QFrame::StyledPanel);
        gridLayout_3 = new QGridLayout(mp_frame1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_lUdpPort = new QLabel(mp_frame1);
        mp_lUdpPort->setObjectName(QString::fromUtf8("mp_lUdpPort"));
        mp_lUdpPort->setMinimumSize(QSize(280, 0));
        mp_lUdpPort->setTextFormat(Qt::PlainText);
        mp_lUdpPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lUdpPort, 0, 0, 1, 1);

        mp_leMulticastGroup = new QLineEdit(mp_frame1);
        mp_leMulticastGroup->setObjectName(QString::fromUtf8("mp_leMulticastGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_leMulticastGroup->sizePolicy().hasHeightForWidth());
        mp_leMulticastGroup->setSizePolicy(sizePolicy);
        mp_leMulticastGroup->setMinimumSize(QSize(140, 0));
        mp_leMulticastGroup->setAlignment(Qt::AlignCenter);
        mp_leMulticastGroup->setReadOnly(true);

        gridLayout->addWidget(mp_leMulticastGroup, 3, 1, 1, 1);

        mp_lBase = new QLabel(mp_frame1);
        mp_lBase->setObjectName(QString::fromUtf8("mp_lBase"));
        mp_lBase->setTextFormat(Qt::PlainText);
        mp_lBase->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lBase, 1, 0, 1, 1);

        mp_sbMaxUsersToContact = new QSpinBox(mp_frame1);
        mp_sbMaxUsersToContact->setObjectName(QString::fromUtf8("mp_sbMaxUsersToContact"));
        mp_sbMaxUsersToContact->setMinimumSize(QSize(140, 0));
        mp_sbMaxUsersToContact->setAlignment(Qt::AlignCenter);
        mp_sbMaxUsersToContact->setMinimum(1);
        mp_sbMaxUsersToContact->setMaximum(150);
        mp_sbMaxUsersToContact->setSingleStep(5);
        mp_sbMaxUsersToContact->setValue(15);

        gridLayout->addWidget(mp_sbMaxUsersToContact, 7, 1, 1, 1);

        mp_lBroadcastInterval = new QLabel(mp_frame1);
        mp_lBroadcastInterval->setObjectName(QString::fromUtf8("mp_lBroadcastInterval"));
        mp_lBroadcastInterval->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lBroadcastInterval, 6, 0, 1, 1);

        mp_lMaxUsersToContact = new QLabel(mp_frame1);
        mp_lMaxUsersToContact->setObjectName(QString::fromUtf8("mp_lMaxUsersToContact"));
        mp_lMaxUsersToContact->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lMaxUsersToContact, 7, 0, 1, 1);

        mp_leUdpPort = new QLineEdit(mp_frame1);
        mp_leUdpPort->setObjectName(QString::fromUtf8("mp_leUdpPort"));
        sizePolicy.setHeightForWidth(mp_leUdpPort->sizePolicy().hasHeightForWidth());
        mp_leUdpPort->setSizePolicy(sizePolicy);
        mp_leUdpPort->setMinimumSize(QSize(140, 0));
        mp_leUdpPort->setAlignment(Qt::AlignCenter);
        mp_leUdpPort->setReadOnly(true);

        gridLayout->addWidget(mp_leUdpPort, 0, 1, 1, 1);

        mp_lHelpMulticastGroup = new QLabel(mp_frame1);
        mp_lHelpMulticastGroup->setObjectName(QString::fromUtf8("mp_lHelpMulticastGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_lHelpMulticastGroup->sizePolicy().hasHeightForWidth());
        mp_lHelpMulticastGroup->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mp_lHelpMulticastGroup, 3, 3, 1, 1);

        mp_sbIpMulticastTtl = new QSpinBox(mp_frame1);
        mp_sbIpMulticastTtl->setObjectName(QString::fromUtf8("mp_sbIpMulticastTtl"));
        mp_sbIpMulticastTtl->setMaximum(255);
        mp_sbIpMulticastTtl->setValue(1);

        gridLayout->addWidget(mp_sbIpMulticastTtl, 4, 1, 1, 1);

        mp_leSubnet = new QLineEdit(mp_frame1);
        mp_leSubnet->setObjectName(QString::fromUtf8("mp_leSubnet"));
        sizePolicy.setHeightForWidth(mp_leSubnet->sizePolicy().hasHeightForWidth());
        mp_leSubnet->setSizePolicy(sizePolicy);
        mp_leSubnet->setMinimumSize(QSize(140, 0));
        mp_leSubnet->setAlignment(Qt::AlignCenter);
        mp_leSubnet->setReadOnly(true);

        gridLayout->addWidget(mp_leSubnet, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 5, 3, 1, 1);

        mp_lMulticastGroup = new QLabel(mp_frame1);
        mp_lMulticastGroup->setObjectName(QString::fromUtf8("mp_lMulticastGroup"));
        mp_lMulticastGroup->setTextFormat(Qt::PlainText);
        mp_lMulticastGroup->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lMulticastGroup, 3, 0, 1, 1);

        mp_lHelpSubnet = new QLabel(mp_frame1);
        mp_lHelpSubnet->setObjectName(QString::fromUtf8("mp_lHelpSubnet"));
        sizePolicy1.setHeightForWidth(mp_lHelpSubnet->sizePolicy().hasHeightForWidth());
        mp_lHelpSubnet->setSizePolicy(sizePolicy1);
        mp_lHelpSubnet->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lHelpSubnet, 1, 3, 1, 1);

        mp_lHelpTtl = new QLabel(mp_frame1);
        mp_lHelpTtl->setObjectName(QString::fromUtf8("mp_lHelpTtl"));

        gridLayout->addWidget(mp_lHelpTtl, 4, 3, 1, 1);

        mp_lHelpUdp = new QLabel(mp_frame1);
        mp_lHelpUdp->setObjectName(QString::fromUtf8("mp_lHelpUdp"));
        sizePolicy1.setHeightForWidth(mp_lHelpUdp->sizePolicy().hasHeightForWidth());
        mp_lHelpUdp->setSizePolicy(sizePolicy1);
        mp_lHelpUdp->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lHelpUdp, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 3, 1, 1);

        mp_lIpMulticastTtl = new QLabel(mp_frame1);
        mp_lIpMulticastTtl->setObjectName(QString::fromUtf8("mp_lIpMulticastTtl"));
        mp_lIpMulticastTtl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lIpMulticastTtl, 4, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 3, 1, 1);

        mp_sbBroadcastInterval = new QSpinBox(mp_frame1);
        mp_sbBroadcastInterval->setObjectName(QString::fromUtf8("mp_sbBroadcastInterval"));
        mp_sbBroadcastInterval->setMinimumSize(QSize(140, 0));
        mp_sbBroadcastInterval->setAlignment(Qt::AlignCenter);
        mp_sbBroadcastInterval->setMinimum(301);
        mp_sbBroadcastInterval->setMaximum(9999);
        mp_sbBroadcastInterval->setSingleStep(3);
        mp_sbBroadcastInterval->setValue(301);

        gridLayout->addWidget(mp_sbBroadcastInterval, 6, 1, 1, 1);

        mp_comboPreferredSubnet = new QComboBox(mp_frame1);
        mp_comboPreferredSubnet->setObjectName(QString::fromUtf8("mp_comboPreferredSubnet"));
        mp_comboPreferredSubnet->setMinimumSize(QSize(140, 0));

        gridLayout->addWidget(mp_comboPreferredSubnet, 5, 1, 1, 1);

        mp_lPreferredSubnet = new QLabel(mp_frame1);
        mp_lPreferredSubnet->setObjectName(QString::fromUtf8("mp_lPreferredSubnet"));
        mp_lPreferredSubnet->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lPreferredSubnet, 5, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_5->addWidget(mp_frame1, 0, 0, 1, 1);

        mp_frame2 = new QFrame(GuiNetworkWidget);
        mp_frame2->setObjectName(QString::fromUtf8("mp_frame2"));
        mp_frame2->setFrameShape(QFrame::StyledPanel);
        mp_frame2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(mp_frame2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mp_cbUseDefaultMulticastGroupAddress = new QCheckBox(mp_frame2);
        mp_cbUseDefaultMulticastGroupAddress->setObjectName(QString::fromUtf8("mp_cbUseDefaultMulticastGroupAddress"));

        gridLayout_2->addWidget(mp_cbUseDefaultMulticastGroupAddress, 0, 0, 1, 1);

        mp_cbBroadcastInterval = new QCheckBox(mp_frame2);
        mp_cbBroadcastInterval->setObjectName(QString::fromUtf8("mp_cbBroadcastInterval"));

        gridLayout_2->addWidget(mp_cbBroadcastInterval, 0, 1, 1, 1);

        mp_cbBroadcastToLocalSubnetAlways = new QCheckBox(mp_frame2);
        mp_cbBroadcastToLocalSubnetAlways->setObjectName(QString::fromUtf8("mp_cbBroadcastToLocalSubnetAlways"));

        gridLayout_2->addWidget(mp_cbBroadcastToLocalSubnetAlways, 1, 0, 1, 1);

        mp_cbBroadcastToOfflineUsers = new QCheckBox(mp_frame2);
        mp_cbBroadcastToOfflineUsers->setObjectName(QString::fromUtf8("mp_cbBroadcastToOfflineUsers"));

        gridLayout_2->addWidget(mp_cbBroadcastToOfflineUsers, 1, 1, 1, 1);

        mp_cbUseHive = new QCheckBox(mp_frame2);
        mp_cbUseHive->setObjectName(QString::fromUtf8("mp_cbUseHive"));

        gridLayout_2->addWidget(mp_cbUseHive, 2, 0, 1, 1);

        mp_cbDisableProxy = new QCheckBox(mp_frame2);
        mp_cbDisableProxy->setObjectName(QString::fromUtf8("mp_cbDisableProxy"));

        gridLayout_2->addWidget(mp_cbDisableProxy, 2, 1, 1, 1);

        mp_cbPreventMultipleConnectionsFromSingleHostAddress = new QCheckBox(mp_frame2);
        mp_cbPreventMultipleConnectionsFromSingleHostAddress->setObjectName(QString::fromUtf8("mp_cbPreventMultipleConnectionsFromSingleHostAddress"));

        gridLayout_2->addWidget(mp_cbPreventMultipleConnectionsFromSingleHostAddress, 3, 0, 1, 1);

        mp_cbEnableMDns = new QCheckBox(mp_frame2);
        mp_cbEnableMDns->setObjectName(QString::fromUtf8("mp_cbEnableMDns"));

        gridLayout_2->addWidget(mp_cbEnableMDns, 3, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(mp_frame2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mp_pbShowFileHosts = new QPushButton(GuiNetworkWidget);
        mp_pbShowFileHosts->setObjectName(QString::fromUtf8("mp_pbShowFileHosts"));
        mp_pbShowFileHosts->setMinimumSize(QSize(140, 0));

        horizontalLayout->addWidget(mp_pbShowFileHosts);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        mp_lRO = new QLabel(GuiNetworkWidget);
        mp_lRO->setObjectName(QString::fromUtf8("mp_lRO"));

        horizontalLayout->addWidget(mp_lRO);

        horizontalSpacer_4 = new QSpacerItem(371, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        mp_pbOk = new QPushButton(GuiNetworkWidget);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        horizontalLayout->addWidget(mp_pbOk);

        mp_pbCancel = new QPushButton(GuiNetworkWidget);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        horizontalLayout->addWidget(mp_pbCancel);


        gridLayout_5->addLayout(horizontalLayout, 3, 0, 1, 1);

        QWidget::setTabOrder(mp_leUdpPort, mp_leSubnet);
        QWidget::setTabOrder(mp_leSubnet, mp_leMulticastGroup);
        QWidget::setTabOrder(mp_leMulticastGroup, mp_sbIpMulticastTtl);
        QWidget::setTabOrder(mp_sbIpMulticastTtl, mp_comboPreferredSubnet);
        QWidget::setTabOrder(mp_comboPreferredSubnet, mp_sbBroadcastInterval);
        QWidget::setTabOrder(mp_sbBroadcastInterval, mp_sbMaxUsersToContact);
        QWidget::setTabOrder(mp_sbMaxUsersToContact, mp_cbUseDefaultMulticastGroupAddress);
        QWidget::setTabOrder(mp_cbUseDefaultMulticastGroupAddress, mp_cbBroadcastInterval);
        QWidget::setTabOrder(mp_cbBroadcastInterval, mp_cbBroadcastToLocalSubnetAlways);
        QWidget::setTabOrder(mp_cbBroadcastToLocalSubnetAlways, mp_cbBroadcastToOfflineUsers);
        QWidget::setTabOrder(mp_cbBroadcastToOfflineUsers, mp_cbUseHive);
        QWidget::setTabOrder(mp_cbUseHive, mp_cbDisableProxy);
        QWidget::setTabOrder(mp_cbDisableProxy, mp_cbPreventMultipleConnectionsFromSingleHostAddress);
        QWidget::setTabOrder(mp_cbPreventMultipleConnectionsFromSingleHostAddress, mp_cbEnableMDns);
        QWidget::setTabOrder(mp_cbEnableMDns, mp_pbShowFileHosts);
        QWidget::setTabOrder(mp_pbShowFileHosts, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiNetworkWidget);

        QMetaObject::connectSlotsByName(GuiNetworkWidget);
    } // setupUi

    void retranslateUi(QDialog *GuiNetworkWidget)
    {
        mp_lUdpPort->setText(QCoreApplication::translate("GuiNetworkWidget", "UDP Port in beebeep.rc *", nullptr));
        mp_lBase->setText(QCoreApplication::translate("GuiNetworkWidget", "Local subnet address *", nullptr));
        mp_lBroadcastInterval->setText(QCoreApplication::translate("GuiNetworkWidget", "Search users every", nullptr));
        mp_lMaxUsersToContact->setText(QCoreApplication::translate("GuiNetworkWidget", "Max users to contact every second", nullptr));
        mp_lMulticastGroup->setText(QCoreApplication::translate("GuiNetworkWidget", "Multicast group in beebeep.rc *", nullptr));
        mp_lHelpSubnet->setText(QCoreApplication::translate("GuiNetworkWidget", "(search users here by default)", nullptr));
        mp_lHelpTtl->setText(QCoreApplication::translate("GuiNetworkWidget", "(only for IPv4 multicast)", nullptr));
        mp_lHelpUdp->setText(QCoreApplication::translate("GuiNetworkWidget", "(the same for all clients)", nullptr));
        mp_lIpMulticastTtl->setText(QCoreApplication::translate("GuiNetworkWidget", "IP Multicast TTL", nullptr));
        mp_sbBroadcastInterval->setSuffix(QString());
        mp_lPreferredSubnet->setText(QCoreApplication::translate("GuiNetworkWidget", "Preferred subnet", nullptr));
        mp_cbUseDefaultMulticastGroupAddress->setText(QCoreApplication::translate("GuiNetworkWidget", "Use default multicast group address", nullptr));
        mp_cbBroadcastInterval->setText(QCoreApplication::translate("GuiNetworkWidget", "Use fixed interval to search users", nullptr));
        mp_cbBroadcastToLocalSubnetAlways->setText(QCoreApplication::translate("GuiNetworkWidget", "Always broadcast to local subnet address", nullptr));
        mp_cbBroadcastToOfflineUsers->setText(QCoreApplication::translate("GuiNetworkWidget", "Contact offline users directly", nullptr));
        mp_cbUseHive->setText(QCoreApplication::translate("GuiNetworkWidget", "Use hive protocol to contact offline users", nullptr));
        mp_cbDisableProxy->setText(QCoreApplication::translate("GuiNetworkWidget", "Disable system proxy for connections", nullptr));
        mp_cbPreventMultipleConnectionsFromSingleHostAddress->setText(QCoreApplication::translate("GuiNetworkWidget", "Prevent multiple connections from single host address", nullptr));
        mp_cbEnableMDns->setText(QCoreApplication::translate("GuiNetworkWidget", "Enable Zero Configuration Networking", nullptr));
        mp_pbShowFileHosts->setText(QCoreApplication::translate("GuiNetworkWidget", "Show file HOSTS...", nullptr));
        mp_lRO->setText(QCoreApplication::translate("GuiNetworkWidget", "* (read only section)", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiNetworkWidget", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiNetworkWidget", "Cancel", nullptr));
        (void)GuiNetworkWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiNetworkWidget: public Ui_GuiNetworkWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUINETWORK_H
