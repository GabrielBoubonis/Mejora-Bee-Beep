/********************************************************************************
** Form generated from reading UI file 'GuiChatList.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUICHATLIST_H
#define UI_GUICHATLIST_H

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

class Ui_GuiChatListWidget
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mp_twChatList;
    QHBoxLayout *horizontalLayout;
    QPushButton *mp_pbSettings;
    QLineEdit *mp_leFilter;
    QPushButton *mp_pbClearFilter;

    void setupUi(QWidget *GuiChatListWidget)
    {
        if (GuiChatListWidget->objectName().isEmpty())
            GuiChatListWidget->setObjectName(QString::fromUtf8("GuiChatListWidget"));
        GuiChatListWidget->resize(157, 191);
        GuiChatListWidget->setMinimumSize(QSize(120, 0));
        GuiChatListWidget->setAcceptDrops(true);
        gridLayout = new QGridLayout(GuiChatListWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_twChatList = new QTreeWidget(GuiChatListWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twChatList->setHeaderItem(__qtreewidgetitem);
        mp_twChatList->setObjectName(QString::fromUtf8("mp_twChatList"));
        mp_twChatList->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(mp_twChatList, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        mp_pbSettings = new QPushButton(GuiChatListWidget);
        mp_pbSettings->setObjectName(QString::fromUtf8("mp_pbSettings"));
        mp_pbSettings->setMaximumSize(QSize(26, 26));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSettings->setIcon(icon);
        mp_pbSettings->setIconSize(QSize(16, 16));
        mp_pbSettings->setFlat(true);

        horizontalLayout->addWidget(mp_pbSettings);

        mp_leFilter = new QLineEdit(GuiChatListWidget);
        mp_leFilter->setObjectName(QString::fromUtf8("mp_leFilter"));

        horizontalLayout->addWidget(mp_leFilter);

        mp_pbClearFilter = new QPushButton(GuiChatListWidget);
        mp_pbClearFilter->setObjectName(QString::fromUtf8("mp_pbClearFilter"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_pbClearFilter->sizePolicy().hasHeightForWidth());
        mp_pbClearFilter->setSizePolicy(sizePolicy);
        mp_pbClearFilter->setMaximumSize(QSize(26, 26));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbClearFilter->setIcon(icon1);
        mp_pbClearFilter->setIconSize(QSize(16, 16));
        mp_pbClearFilter->setFlat(true);

        horizontalLayout->addWidget(mp_pbClearFilter);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(mp_twChatList, mp_pbSettings);
        QWidget::setTabOrder(mp_pbSettings, mp_leFilter);
        QWidget::setTabOrder(mp_leFilter, mp_pbClearFilter);

        retranslateUi(GuiChatListWidget);

        QMetaObject::connectSlotsByName(GuiChatListWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiChatListWidget)
    {
#if QT_CONFIG(tooltip)
        mp_pbSettings->setToolTip(QCoreApplication::translate("GuiChatListWidget", "View options", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mp_leFilter->setToolTip(QCoreApplication::translate("GuiChatListWidget", "Insert keywords", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        mp_pbClearFilter->setToolTip(QCoreApplication::translate("GuiChatListWidget", "Clear keywords", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)GuiChatListWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiChatListWidget: public Ui_GuiChatListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUICHATLIST_H
