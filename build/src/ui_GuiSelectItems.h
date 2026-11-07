/********************************************************************************
** Form generated from reading UI file 'GuiSelectItems.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISELECTITEMS_H
#define UI_GUISELECTITEMS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiSelectItemsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mp_lSearch;
    QLineEdit *mp_leSearch;
    QPushButton *mp_pbClearFilter;
    QTreeWidget *mp_tw;
    QPushButton *mp_pbClear;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;

    void setupUi(QWidget *GuiSelectItemsWidget)
    {
        if (GuiSelectItemsWidget->objectName().isEmpty())
            GuiSelectItemsWidget->setObjectName(QString::fromUtf8("GuiSelectItemsWidget"));
        GuiSelectItemsWidget->resize(360, 387);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GuiSelectItemsWidget->sizePolicy().hasHeightForWidth());
        GuiSelectItemsWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(GuiSelectItemsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_lSearch = new QLabel(GuiSelectItemsWidget);
        mp_lSearch->setObjectName(QString::fromUtf8("mp_lSearch"));
        mp_lSearch->setMinimumSize(QSize(24, 24));
        mp_lSearch->setMaximumSize(QSize(24, 24));
        mp_lSearch->setPixmap(QPixmap(QString::fromUtf8(":/images/search.png")));
        mp_lSearch->setScaledContents(true);

        gridLayout->addWidget(mp_lSearch, 0, 0, 1, 1);

        mp_leSearch = new QLineEdit(GuiSelectItemsWidget);
        mp_leSearch->setObjectName(QString::fromUtf8("mp_leSearch"));
        mp_leSearch->setMaxLength(20);

        gridLayout->addWidget(mp_leSearch, 0, 1, 1, 3);

        mp_pbClearFilter = new QPushButton(GuiSelectItemsWidget);
        mp_pbClearFilter->setObjectName(QString::fromUtf8("mp_pbClearFilter"));
        mp_pbClearFilter->setMaximumSize(QSize(48, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbClearFilter->setIcon(icon);

        gridLayout->addWidget(mp_pbClearFilter, 0, 4, 1, 1);

        mp_tw = new QTreeWidget(GuiSelectItemsWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_tw->setHeaderItem(__qtreewidgetitem);
        mp_tw->setObjectName(QString::fromUtf8("mp_tw"));

        gridLayout->addWidget(mp_tw, 1, 0, 1, 5);

        mp_pbClear = new QPushButton(GuiSelectItemsWidget);
        mp_pbClear->setObjectName(QString::fromUtf8("mp_pbClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/group-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbClear->setIcon(icon1);

        gridLayout->addWidget(mp_pbClear, 2, 0, 1, 2);

        mp_pbOk = new QPushButton(GuiSelectItemsWidget);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        gridLayout->addWidget(mp_pbOk, 2, 2, 1, 1);

        mp_pbCancel = new QPushButton(GuiSelectItemsWidget);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        gridLayout->addWidget(mp_pbCancel, 2, 3, 1, 2);

        QWidget::setTabOrder(mp_leSearch, mp_pbClearFilter);
        QWidget::setTabOrder(mp_pbClearFilter, mp_tw);
        QWidget::setTabOrder(mp_tw, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbClear);
        QWidget::setTabOrder(mp_pbClear, mp_pbCancel);

        retranslateUi(GuiSelectItemsWidget);

        QMetaObject::connectSlotsByName(GuiSelectItemsWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiSelectItemsWidget)
    {
        mp_leSearch->setPlaceholderText(QCoreApplication::translate("GuiSelectItemsWidget", "Search", nullptr));
#if QT_CONFIG(tooltip)
        mp_pbClearFilter->setToolTip(QCoreApplication::translate("GuiSelectItemsWidget", "Clear filter", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbClear->setText(QCoreApplication::translate("GuiSelectItemsWidget", "Clear selection", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiSelectItemsWidget", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiSelectItemsWidget", "Cancel", nullptr));
        (void)GuiSelectItemsWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiSelectItemsWidget: public Ui_GuiSelectItemsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISELECTITEMS_H
