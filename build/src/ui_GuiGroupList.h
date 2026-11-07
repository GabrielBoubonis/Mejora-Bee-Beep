/********************************************************************************
** Form generated from reading UI file 'GuiGroupList.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIGROUPLIST_H
#define UI_GUIGROUPLIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiGroupListWidget
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mp_twGroupList;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mp_leFilter;
    QPushButton *mp_pbClearFilter;

    void setupUi(QWidget *GuiGroupListWidget)
    {
        if (GuiGroupListWidget->objectName().isEmpty())
            GuiGroupListWidget->setObjectName(QString::fromUtf8("GuiGroupListWidget"));
        GuiGroupListWidget->resize(157, 191);
        GuiGroupListWidget->setMinimumSize(QSize(120, 0));
        gridLayout = new QGridLayout(GuiGroupListWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_twGroupList = new QTreeWidget(GuiGroupListWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twGroupList->setHeaderItem(__qtreewidgetitem);
        mp_twGroupList->setObjectName(QString::fromUtf8("mp_twGroupList"));

        gridLayout->addWidget(mp_twGroupList, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        mp_leFilter = new QLineEdit(GuiGroupListWidget);
        mp_leFilter->setObjectName(QString::fromUtf8("mp_leFilter"));

        horizontalLayout->addWidget(mp_leFilter);

        mp_pbClearFilter = new QPushButton(GuiGroupListWidget);
        mp_pbClearFilter->setObjectName(QString::fromUtf8("mp_pbClearFilter"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_pbClearFilter->sizePolicy().hasHeightForWidth());
        mp_pbClearFilter->setSizePolicy(sizePolicy);
        mp_pbClearFilter->setMaximumSize(QSize(26, 26));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbClearFilter->setIcon(icon);
        mp_pbClearFilter->setIconSize(QSize(16, 16));
        mp_pbClearFilter->setFlat(true);

        horizontalLayout->addWidget(mp_pbClearFilter);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(mp_twGroupList, mp_leFilter);
        QWidget::setTabOrder(mp_leFilter, mp_pbClearFilter);

        retranslateUi(GuiGroupListWidget);

        QMetaObject::connectSlotsByName(GuiGroupListWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiGroupListWidget)
    {
#if QT_CONFIG(tooltip)
        mp_leFilter->setToolTip(QCoreApplication::translate("GuiGroupListWidget", "Insert keywords", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mp_pbClearFilter->setToolTip(QCoreApplication::translate("GuiGroupListWidget", "Clear keywords", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)GuiGroupListWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiGroupListWidget: public Ui_GuiGroupListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIGROUPLIST_H
