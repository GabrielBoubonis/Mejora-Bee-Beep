/********************************************************************************
** Form generated from reading UI file 'GuiShareBox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISHAREBOX_H
#define UI_GUISHAREBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "GuiShareBoxFileInfoList.h"

QT_BEGIN_NAMESPACE

class Ui_GuiShareBoxWidget
{
public:
    QLabel *mp_lTitle;
    QFrame *mp_myFrame;
    QGridLayout *gridLayout_2;
    QLabel *mp_lMyBox;
    QPushButton *mp_pbMyUpdate;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mp_cbEnableMyBox;
    QPushButton *mp_pbSelectMyBox;
    QSpacerItem *horizontalSpacer_2;
    GuiShareBoxFileInfoList *mp_myBox;
    QPushButton *mp_pbMyCreateFolder;
    QPushButton *mp_pbMyOpenFolder;
    QFrame *mp_outFrame;
    QGridLayout *gridLayout;
    QPushButton *mp_pbOutParentFolder;
    QPushButton *mp_pbOutUpdate;
    QPushButton *mp_pbOutCreateFolder;
    QLabel *mp_lOutBox;
    GuiShareBoxFileInfoList *mp_outBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mp_lUsers;
    QComboBox *mp_comboUsers;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *GuiShareBoxWidget)
    {
        if (GuiShareBoxWidget->objectName().isEmpty())
            GuiShareBoxWidget->setObjectName(QString::fromUtf8("GuiShareBoxWidget"));
        GuiShareBoxWidget->resize(623, 347);
        mp_lTitle = new QLabel(GuiShareBoxWidget);
        mp_lTitle->setObjectName(QString::fromUtf8("mp_lTitle"));
        mp_lTitle->setGeometry(QRect(20, 20, 491, 20));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lTitle->sizePolicy().hasHeightForWidth());
        mp_lTitle->setSizePolicy(sizePolicy);
        mp_lTitle->setMinimumSize(QSize(0, 20));
        mp_lTitle->setAlignment(Qt::AlignCenter);
        mp_myFrame = new QFrame(GuiShareBoxWidget);
        mp_myFrame->setObjectName(QString::fromUtf8("mp_myFrame"));
        mp_myFrame->setGeometry(QRect(20, 50, 251, 261));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_myFrame->sizePolicy().hasHeightForWidth());
        mp_myFrame->setSizePolicy(sizePolicy1);
        mp_myFrame->setFrameShape(QFrame::NoFrame);
        mp_myFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(mp_myFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_lMyBox = new QLabel(mp_myFrame);
        mp_lMyBox->setObjectName(QString::fromUtf8("mp_lMyBox"));
        sizePolicy.setHeightForWidth(mp_lMyBox->sizePolicy().hasHeightForWidth());
        mp_lMyBox->setSizePolicy(sizePolicy);
        mp_lMyBox->setMinimumSize(QSize(80, 0));
        mp_lMyBox->setWordWrap(true);

        gridLayout_2->addWidget(mp_lMyBox, 0, 4, 1, 1);

        mp_pbMyUpdate = new QPushButton(mp_myFrame);
        mp_pbMyUpdate->setObjectName(QString::fromUtf8("mp_pbMyUpdate"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_pbMyUpdate->sizePolicy().hasHeightForWidth());
        mp_pbMyUpdate->setSizePolicy(sizePolicy2);
        mp_pbMyUpdate->setMinimumSize(QSize(26, 26));
        mp_pbMyUpdate->setMaximumSize(QSize(26, 26));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbMyUpdate->setIcon(icon);
        mp_pbMyUpdate->setIconSize(QSize(24, 26));
        mp_pbMyUpdate->setFlat(true);

        gridLayout_2->addWidget(mp_pbMyUpdate, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mp_cbEnableMyBox = new QCheckBox(mp_myFrame);
        mp_cbEnableMyBox->setObjectName(QString::fromUtf8("mp_cbEnableMyBox"));
        mp_cbEnableMyBox->setMinimumSize(QSize(0, 26));
        mp_cbEnableMyBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(mp_cbEnableMyBox);

        mp_pbSelectMyBox = new QPushButton(mp_myFrame);
        mp_pbSelectMyBox->setObjectName(QString::fromUtf8("mp_pbSelectMyBox"));
        sizePolicy2.setHeightForWidth(mp_pbSelectMyBox->sizePolicy().hasHeightForWidth());
        mp_pbSelectMyBox->setSizePolicy(sizePolicy2);
        mp_pbSelectMyBox->setMinimumSize(QSize(26, 26));
        mp_pbSelectMyBox->setMaximumSize(QSize(26, 26));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/sharebox.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSelectMyBox->setIcon(icon1);
        mp_pbSelectMyBox->setIconSize(QSize(24, 26));
        mp_pbSelectMyBox->setFlat(true);

        horizontalLayout->addWidget(mp_pbSelectMyBox);

        horizontalSpacer_2 = new QSpacerItem(42, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 5);

        mp_myBox = new GuiShareBoxFileInfoList(mp_myFrame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_myBox->setHeaderItem(__qtreewidgetitem);
        mp_myBox->setObjectName(QString::fromUtf8("mp_myBox"));
        mp_myBox->setSortingEnabled(true);
        mp_myBox->setAllColumnsShowFocus(true);
        mp_myBox->setColumnCount(3);
        mp_myBox->header()->setStretchLastSection(false);

        gridLayout_2->addWidget(mp_myBox, 1, 0, 1, 6);

        mp_pbMyCreateFolder = new QPushButton(mp_myFrame);
        mp_pbMyCreateFolder->setObjectName(QString::fromUtf8("mp_pbMyCreateFolder"));
        sizePolicy2.setHeightForWidth(mp_pbMyCreateFolder->sizePolicy().hasHeightForWidth());
        mp_pbMyCreateFolder->setSizePolicy(sizePolicy2);
        mp_pbMyCreateFolder->setMinimumSize(QSize(26, 26));
        mp_pbMyCreateFolder->setMaximumSize(QSize(26, 26));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/folder-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbMyCreateFolder->setIcon(icon2);
        mp_pbMyCreateFolder->setIconSize(QSize(24, 26));
        mp_pbMyCreateFolder->setFlat(true);

        gridLayout_2->addWidget(mp_pbMyCreateFolder, 0, 3, 1, 1);

        mp_pbMyOpenFolder = new QPushButton(mp_myFrame);
        mp_pbMyOpenFolder->setObjectName(QString::fromUtf8("mp_pbMyOpenFolder"));
        sizePolicy2.setHeightForWidth(mp_pbMyOpenFolder->sizePolicy().hasHeightForWidth());
        mp_pbMyOpenFolder->setSizePolicy(sizePolicy2);
        mp_pbMyOpenFolder->setMinimumSize(QSize(26, 26));
        mp_pbMyOpenFolder->setMaximumSize(QSize(26, 26));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbMyOpenFolder->setIcon(icon3);
        mp_pbMyOpenFolder->setIconSize(QSize(24, 26));
        mp_pbMyOpenFolder->setFlat(true);

        gridLayout_2->addWidget(mp_pbMyOpenFolder, 0, 2, 1, 1);

        mp_outFrame = new QFrame(GuiShareBoxWidget);
        mp_outFrame->setObjectName(QString::fromUtf8("mp_outFrame"));
        mp_outFrame->setGeometry(QRect(290, 50, 301, 276));
        sizePolicy1.setHeightForWidth(mp_outFrame->sizePolicy().hasHeightForWidth());
        mp_outFrame->setSizePolicy(sizePolicy1);
        mp_outFrame->setFrameShape(QFrame::NoFrame);
        gridLayout = new QGridLayout(mp_outFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_pbOutParentFolder = new QPushButton(mp_outFrame);
        mp_pbOutParentFolder->setObjectName(QString::fromUtf8("mp_pbOutParentFolder"));
        sizePolicy2.setHeightForWidth(mp_pbOutParentFolder->sizePolicy().hasHeightForWidth());
        mp_pbOutParentFolder->setSizePolicy(sizePolicy2);
        mp_pbOutParentFolder->setMinimumSize(QSize(26, 26));
        mp_pbOutParentFolder->setMaximumSize(QSize(26, 26));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbOutParentFolder->setIcon(icon4);
        mp_pbOutParentFolder->setIconSize(QSize(24, 26));
        mp_pbOutParentFolder->setFlat(true);

        gridLayout->addWidget(mp_pbOutParentFolder, 0, 0, 1, 1);

        mp_pbOutUpdate = new QPushButton(mp_outFrame);
        mp_pbOutUpdate->setObjectName(QString::fromUtf8("mp_pbOutUpdate"));
        sizePolicy2.setHeightForWidth(mp_pbOutUpdate->sizePolicy().hasHeightForWidth());
        mp_pbOutUpdate->setSizePolicy(sizePolicy2);
        mp_pbOutUpdate->setMinimumSize(QSize(26, 26));
        mp_pbOutUpdate->setMaximumSize(QSize(26, 26));
        mp_pbOutUpdate->setIcon(icon);
        mp_pbOutUpdate->setIconSize(QSize(24, 26));
        mp_pbOutUpdate->setFlat(true);

        gridLayout->addWidget(mp_pbOutUpdate, 0, 1, 1, 1);

        mp_pbOutCreateFolder = new QPushButton(mp_outFrame);
        mp_pbOutCreateFolder->setObjectName(QString::fromUtf8("mp_pbOutCreateFolder"));
        sizePolicy2.setHeightForWidth(mp_pbOutCreateFolder->sizePolicy().hasHeightForWidth());
        mp_pbOutCreateFolder->setSizePolicy(sizePolicy2);
        mp_pbOutCreateFolder->setMinimumSize(QSize(26, 26));
        mp_pbOutCreateFolder->setMaximumSize(QSize(26, 26));
        mp_pbOutCreateFolder->setIcon(icon2);
        mp_pbOutCreateFolder->setIconSize(QSize(24, 26));
        mp_pbOutCreateFolder->setFlat(true);

        gridLayout->addWidget(mp_pbOutCreateFolder, 0, 2, 1, 1);

        mp_lOutBox = new QLabel(mp_outFrame);
        mp_lOutBox->setObjectName(QString::fromUtf8("mp_lOutBox"));
        sizePolicy.setHeightForWidth(mp_lOutBox->sizePolicy().hasHeightForWidth());
        mp_lOutBox->setSizePolicy(sizePolicy);
        mp_lOutBox->setMinimumSize(QSize(80, 0));
        mp_lOutBox->setWordWrap(true);

        gridLayout->addWidget(mp_lOutBox, 0, 3, 1, 1);

        mp_outBox = new GuiShareBoxFileInfoList(mp_outFrame);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem1->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        mp_outBox->setHeaderItem(__qtreewidgetitem1);
        mp_outBox->setObjectName(QString::fromUtf8("mp_outBox"));
        mp_outBox->setSortingEnabled(true);
        mp_outBox->setAllColumnsShowFocus(true);
        mp_outBox->setColumnCount(3);
        mp_outBox->header()->setStretchLastSection(false);

        gridLayout->addWidget(mp_outBox, 1, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        mp_lUsers = new QLabel(mp_outFrame);
        mp_lUsers->setObjectName(QString::fromUtf8("mp_lUsers"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mp_lUsers->sizePolicy().hasHeightForWidth());
        mp_lUsers->setSizePolicy(sizePolicy3);
        mp_lUsers->setMinimumSize(QSize(75, 26));
        mp_lUsers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(mp_lUsers);

        mp_comboUsers = new QComboBox(mp_outFrame);
        mp_comboUsers->setObjectName(QString::fromUtf8("mp_comboUsers"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mp_comboUsers->sizePolicy().hasHeightForWidth());
        mp_comboUsers->setSizePolicy(sizePolicy4);
        mp_comboUsers->setMinimumSize(QSize(140, 26));

        horizontalLayout_2->addWidget(mp_comboUsers);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 4);

        QWidget::setTabOrder(mp_pbMyUpdate, mp_pbMyOpenFolder);
        QWidget::setTabOrder(mp_pbMyOpenFolder, mp_pbMyCreateFolder);
        QWidget::setTabOrder(mp_pbMyCreateFolder, mp_myBox);
        QWidget::setTabOrder(mp_myBox, mp_cbEnableMyBox);
        QWidget::setTabOrder(mp_cbEnableMyBox, mp_pbSelectMyBox);
        QWidget::setTabOrder(mp_pbSelectMyBox, mp_pbOutParentFolder);
        QWidget::setTabOrder(mp_pbOutParentFolder, mp_pbOutUpdate);
        QWidget::setTabOrder(mp_pbOutUpdate, mp_pbOutCreateFolder);
        QWidget::setTabOrder(mp_pbOutCreateFolder, mp_outBox);
        QWidget::setTabOrder(mp_outBox, mp_comboUsers);

        retranslateUi(GuiShareBoxWidget);

        QMetaObject::connectSlotsByName(GuiShareBoxWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiShareBoxWidget)
    {
        GuiShareBoxWidget->setWindowTitle(QCoreApplication::translate("GuiShareBoxWidget", "Form", nullptr));
        mp_lTitle->setText(QString());
        mp_lMyBox->setText(QString());
        mp_pbMyUpdate->setText(QString());
        mp_cbEnableMyBox->setText(QCoreApplication::translate("GuiShareBoxWidget", "Enable my BeeBOX", nullptr));
#if QT_CONFIG(tooltip)
        mp_pbSelectMyBox->setToolTip(QCoreApplication::translate("GuiShareBoxWidget", "Select your folder", nullptr));
#endif // QT_CONFIG(tooltip)
        mp_pbSelectMyBox->setText(QString());
        mp_pbMyCreateFolder->setText(QString());
        mp_pbMyOpenFolder->setText(QString());
        mp_pbOutParentFolder->setText(QString());
        mp_pbOutUpdate->setText(QString());
        mp_pbOutCreateFolder->setText(QString());
        mp_lOutBox->setText(QString());
        mp_lUsers->setText(QCoreApplication::translate("GuiShareBoxWidget", "Select user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiShareBoxWidget: public Ui_GuiShareBoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISHAREBOX_H
