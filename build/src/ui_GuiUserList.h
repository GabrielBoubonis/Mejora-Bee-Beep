/********************************************************************************
** Form generated from reading UI file 'GuiUserList.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIUSERLIST_H
#define UI_GUIUSERLIST_H

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

class Ui_GuiUserListWidget
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mp_twUsers;
    QHBoxLayout *horizontalLayout;
    QPushButton *mp_pbSettings;
    QLineEdit *mp_leFilter;
    QPushButton *mp_pbClearFilter;

    void setupUi(QWidget *GuiUserListWidget)
    {
        if (GuiUserListWidget->objectName().isEmpty())
            GuiUserListWidget->setObjectName(QString::fromUtf8("GuiUserListWidget"));
        GuiUserListWidget->resize(157, 191);
        GuiUserListWidget->setMinimumSize(QSize(120, 0));
        GuiUserListWidget->setAcceptDrops(true);
        gridLayout = new QGridLayout(GuiUserListWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_twUsers = new QTreeWidget(GuiUserListWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twUsers->setHeaderItem(__qtreewidgetitem);
        mp_twUsers->setObjectName(QString::fromUtf8("mp_twUsers"));
        mp_twUsers->setDragDropMode(QAbstractItemView::DropOnly);

        gridLayout->addWidget(mp_twUsers, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        mp_pbSettings = new QPushButton(GuiUserListWidget);
        mp_pbSettings->setObjectName(QString::fromUtf8("mp_pbSettings"));
        mp_pbSettings->setMaximumSize(QSize(26, 26));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSettings->setIcon(icon);
        mp_pbSettings->setIconSize(QSize(16, 16));
        mp_pbSettings->setFlat(true);

        horizontalLayout->addWidget(mp_pbSettings);

        mp_leFilter = new QLineEdit(GuiUserListWidget);
        mp_leFilter->setObjectName(QString::fromUtf8("mp_leFilter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_leFilter->sizePolicy().hasHeightForWidth());
        mp_leFilter->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mp_leFilter);

        mp_pbClearFilter = new QPushButton(GuiUserListWidget);
        mp_pbClearFilter->setObjectName(QString::fromUtf8("mp_pbClearFilter"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_pbClearFilter->sizePolicy().hasHeightForWidth());
        mp_pbClearFilter->setSizePolicy(sizePolicy1);
        mp_pbClearFilter->setMaximumSize(QSize(26, 26));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbClearFilter->setIcon(icon1);
        mp_pbClearFilter->setIconSize(QSize(16, 16));
        mp_pbClearFilter->setFlat(true);

        horizontalLayout->addWidget(mp_pbClearFilter);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(mp_twUsers, mp_pbSettings);
        QWidget::setTabOrder(mp_pbSettings, mp_leFilter);
        QWidget::setTabOrder(mp_leFilter, mp_pbClearFilter);

        retranslateUi(GuiUserListWidget);

        QMetaObject::connectSlotsByName(GuiUserListWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiUserListWidget)
    {
#if QT_CONFIG(tooltip)
        mp_pbSettings->setToolTip(QCoreApplication::translate("GuiUserListWidget", "View options", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mp_leFilter->setToolTip(QCoreApplication::translate("GuiUserListWidget", "Insert keywords", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mp_pbClearFilter->setToolTip(QCoreApplication::translate("GuiUserListWidget", "Clear keywords", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)GuiUserListWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiUserListWidget: public Ui_GuiUserListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIUSERLIST_H
