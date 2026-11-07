/********************************************************************************
** Form generated from reading UI file 'GuiNetworkTest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUINETWORKTEST_H
#define UI_GUINETWORKTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_GuiNetworkTestDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *mp_lPix;
    QLabel *mp_lHelp1;
    QGridLayout *gridLayout;
    QLabel *mp_lIp;
    QLineEdit *mp_leIpAddress;
    QLabel *mp_lPort;
    QLineEdit *mp_lePort;
    QPushButton *mp_pbTest;
    QSpacerItem *horizontalSpacer_3;
    QLabel *mp_lHelp2;
    QTextEdit *mp_teReport;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mp_pbClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbClose;

    void setupUi(QDialog *GuiNetworkTestDialog)
    {
        if (GuiNetworkTestDialog->objectName().isEmpty())
            GuiNetworkTestDialog->setObjectName(QString::fromUtf8("GuiNetworkTestDialog"));
        GuiNetworkTestDialog->setWindowModality(Qt::NonModal);
        GuiNetworkTestDialog->resize(540, 360);
        GuiNetworkTestDialog->setSizeGripEnabled(true);
        gridLayout_2 = new QGridLayout(GuiNetworkTestDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mp_lPix = new QLabel(GuiNetworkTestDialog);
        mp_lPix->setObjectName(QString::fromUtf8("mp_lPix"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lPix->sizePolicy().hasHeightForWidth());
        mp_lPix->setSizePolicy(sizePolicy);
        mp_lPix->setMinimumSize(QSize(48, 48));
        mp_lPix->setMaximumSize(QSize(48, 48));
        mp_lPix->setPixmap(QPixmap(QString::fromUtf8(":/images/network.png")));
        mp_lPix->setScaledContents(true);
        mp_lPix->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(mp_lPix, 0, 0, 1, 1);

        mp_lHelp1 = new QLabel(GuiNetworkTestDialog);
        mp_lHelp1->setObjectName(QString::fromUtf8("mp_lHelp1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_lHelp1->sizePolicy().hasHeightForWidth());
        mp_lHelp1->setSizePolicy(sizePolicy1);
        mp_lHelp1->setMinimumSize(QSize(0, 26));

        gridLayout_2->addWidget(mp_lHelp1, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_lIp = new QLabel(GuiNetworkTestDialog);
        mp_lIp->setObjectName(QString::fromUtf8("mp_lIp"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_lIp->sizePolicy().hasHeightForWidth());
        mp_lIp->setSizePolicy(sizePolicy2);
        mp_lIp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lIp, 1, 0, 1, 1);

        mp_leIpAddress = new QLineEdit(GuiNetworkTestDialog);
        mp_leIpAddress->setObjectName(QString::fromUtf8("mp_leIpAddress"));
        mp_leIpAddress->setMinimumSize(QSize(140, 0));
        mp_leIpAddress->setMaxLength(64);
        mp_leIpAddress->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mp_leIpAddress, 1, 1, 1, 1);

        mp_lPort = new QLabel(GuiNetworkTestDialog);
        mp_lPort->setObjectName(QString::fromUtf8("mp_lPort"));
        sizePolicy2.setHeightForWidth(mp_lPort->sizePolicy().hasHeightForWidth());
        mp_lPort->setSizePolicy(sizePolicy2);
        mp_lPort->setMinimumSize(QSize(40, 0));
        mp_lPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_lPort, 1, 2, 1, 1);

        mp_lePort = new QLineEdit(GuiNetworkTestDialog);
        mp_lePort->setObjectName(QString::fromUtf8("mp_lePort"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mp_lePort->sizePolicy().hasHeightForWidth());
        mp_lePort->setSizePolicy(sizePolicy3);
        mp_lePort->setMinimumSize(QSize(75, 0));
        mp_lePort->setMaximumSize(QSize(90, 16777215));
        mp_lePort->setMaxLength(5);
        mp_lePort->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mp_lePort, 1, 3, 1, 1);

        mp_pbTest = new QPushButton(GuiNetworkTestDialog);
        mp_pbTest->setObjectName(QString::fromUtf8("mp_pbTest"));
        mp_pbTest->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(mp_pbTest, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        mp_lHelp2 = new QLabel(GuiNetworkTestDialog);
        mp_lHelp2->setObjectName(QString::fromUtf8("mp_lHelp2"));
        sizePolicy1.setHeightForWidth(mp_lHelp2->sizePolicy().hasHeightForWidth());
        mp_lHelp2->setSizePolicy(sizePolicy1);
        mp_lHelp2->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(mp_lHelp2, 0, 0, 1, 6);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 2);

        mp_teReport = new QTextEdit(GuiNetworkTestDialog);
        mp_teReport->setObjectName(QString::fromUtf8("mp_teReport"));
        mp_teReport->setUndoRedoEnabled(false);
        mp_teReport->setReadOnly(true);

        gridLayout_2->addWidget(mp_teReport, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_pbClear = new QPushButton(GuiNetworkTestDialog);
        mp_pbClear->setObjectName(QString::fromUtf8("mp_pbClear"));
        mp_pbClear->setMinimumSize(QSize(90, 0));

        horizontalLayout_2->addWidget(mp_pbClear);

        horizontalSpacer = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mp_pbClose = new QPushButton(GuiNetworkTestDialog);
        mp_pbClose->setObjectName(QString::fromUtf8("mp_pbClose"));
        mp_pbClose->setMinimumSize(QSize(90, 0));

        horizontalLayout_2->addWidget(mp_pbClose);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        QWidget::setTabOrder(mp_leIpAddress, mp_lePort);
        QWidget::setTabOrder(mp_lePort, mp_pbTest);
        QWidget::setTabOrder(mp_pbTest, mp_teReport);
        QWidget::setTabOrder(mp_teReport, mp_pbClear);
        QWidget::setTabOrder(mp_pbClear, mp_pbClose);

        retranslateUi(GuiNetworkTestDialog);

        QMetaObject::connectSlotsByName(GuiNetworkTestDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiNetworkTestDialog)
    {
        mp_lIp->setText(QCoreApplication::translate("GuiNetworkTestDialog", "IP Address", nullptr));
        mp_lPort->setText(QCoreApplication::translate("GuiNetworkTestDialog", "Port", nullptr));
        mp_pbTest->setText(QCoreApplication::translate("GuiNetworkTestDialog", "Test connection", nullptr));
        mp_pbClear->setText(QCoreApplication::translate("GuiNetworkTestDialog", "Clear report", nullptr));
        mp_pbClose->setText(QCoreApplication::translate("GuiNetworkTestDialog", "Close", nullptr));
        (void)GuiNetworkTestDialog;
    } // retranslateUi

};

namespace Ui {
    class GuiNetworkTestDialog: public Ui_GuiNetworkTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUINETWORKTEST_H
