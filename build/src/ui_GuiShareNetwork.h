/********************************************************************************
** Form generated from reading UI file 'GuiShareNetwork.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISHARENETWORK_H
#define UI_GUISHARENETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiShareNetworkWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mp_lTitle;
    QTreeWidget *mp_twShares;

    void setupUi(QWidget *GuiShareNetworkWidget)
    {
        if (GuiShareNetworkWidget->objectName().isEmpty())
            GuiShareNetworkWidget->setObjectName(QString::fromUtf8("GuiShareNetworkWidget"));
        GuiShareNetworkWidget->resize(483, 310);
        gridLayout = new QGridLayout(GuiShareNetworkWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        mp_lTitle = new QLabel(GuiShareNetworkWidget);
        mp_lTitle->setObjectName(QString::fromUtf8("mp_lTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lTitle->sizePolicy().hasHeightForWidth());
        mp_lTitle->setSizePolicy(sizePolicy);
        mp_lTitle->setMinimumSize(QSize(0, 20));
        mp_lTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mp_lTitle, 0, 0, 1, 1);

        mp_twShares = new QTreeWidget(GuiShareNetworkWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twShares->setHeaderItem(__qtreewidgetitem);
        mp_twShares->setObjectName(QString::fromUtf8("mp_twShares"));
        mp_twShares->setSortingEnabled(true);
        mp_twShares->setAllColumnsShowFocus(true);
        mp_twShares->setColumnCount(3);
        mp_twShares->header()->setStretchLastSection(false);

        gridLayout->addWidget(mp_twShares, 1, 0, 1, 1);


        retranslateUi(GuiShareNetworkWidget);

        QMetaObject::connectSlotsByName(GuiShareNetworkWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiShareNetworkWidget)
    {
        GuiShareNetworkWidget->setWindowTitle(QCoreApplication::translate("GuiShareNetworkWidget", "Form", nullptr));
        mp_lTitle->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GuiShareNetworkWidget: public Ui_GuiShareNetworkWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISHARENETWORK_H
