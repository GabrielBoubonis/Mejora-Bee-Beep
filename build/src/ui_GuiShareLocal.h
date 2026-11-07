/********************************************************************************
** Form generated from reading UI file 'GuiShareLocal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISHARELOCAL_H
#define UI_GUISHARELOCAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiShareLocalWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mp_lTitle;
    QTreeWidget *mp_twMyShares;

    void setupUi(QWidget *GuiShareLocalWidget)
    {
        if (GuiShareLocalWidget->objectName().isEmpty())
            GuiShareLocalWidget->setObjectName(QString::fromUtf8("GuiShareLocalWidget"));
        GuiShareLocalWidget->resize(452, 404);
        gridLayout = new QGridLayout(GuiShareLocalWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        mp_lTitle = new QLabel(GuiShareLocalWidget);
        mp_lTitle->setObjectName(QString::fromUtf8("mp_lTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lTitle->sizePolicy().hasHeightForWidth());
        mp_lTitle->setSizePolicy(sizePolicy);
        mp_lTitle->setMinimumSize(QSize(0, 20));
        mp_lTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mp_lTitle, 0, 0, 1, 1);

        mp_twMyShares = new QTreeWidget(GuiShareLocalWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twMyShares->setHeaderItem(__qtreewidgetitem);
        mp_twMyShares->setObjectName(QString::fromUtf8("mp_twMyShares"));
        mp_twMyShares->setSelectionMode(QAbstractItemView::SingleSelection);
        mp_twMyShares->setColumnCount(3);
        mp_twMyShares->header()->setStretchLastSection(true);

        gridLayout->addWidget(mp_twMyShares, 1, 0, 1, 1);


        retranslateUi(GuiShareLocalWidget);

        QMetaObject::connectSlotsByName(GuiShareLocalWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiShareLocalWidget)
    {
        GuiShareLocalWidget->setWindowTitle(QCoreApplication::translate("GuiShareLocalWidget", "Form", nullptr));
        mp_lTitle->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = mp_twMyShares->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("GuiShareLocalWidget", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiShareLocalWidget: public Ui_GuiShareLocalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISHARELOCAL_H
