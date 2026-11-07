/********************************************************************************
** Form generated from reading UI file 'GuiPluginManager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPLUGINMANAGER_H
#define UI_GUIPLUGINMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiPluginManager
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mp_twPlugins;
    QLineEdit *mp_leFolder;
    QPushButton *mp_pbFolder;
    QPushButton *mp_pbLoad;
    QFrame *line;
    QPushButton *mp_pbEnableAll;
    QPushButton *mp_pbDisableAll;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbClose;

    void setupUi(QDialog *GuiPluginManager)
    {
        if (GuiPluginManager->objectName().isEmpty())
            GuiPluginManager->setObjectName(QString::fromUtf8("GuiPluginManager"));
        GuiPluginManager->resize(530, 319);
        gridLayout = new QGridLayout(GuiPluginManager);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_twPlugins = new QTreeWidget(GuiPluginManager);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twPlugins->setHeaderItem(__qtreewidgetitem);
        mp_twPlugins->setObjectName(QString::fromUtf8("mp_twPlugins"));
        mp_twPlugins->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(mp_twPlugins, 0, 0, 1, 6);

        mp_leFolder = new QLineEdit(GuiPluginManager);
        mp_leFolder->setObjectName(QString::fromUtf8("mp_leFolder"));

        gridLayout->addWidget(mp_leFolder, 1, 0, 1, 4);

        mp_pbFolder = new QPushButton(GuiPluginManager);
        mp_pbFolder->setObjectName(QString::fromUtf8("mp_pbFolder"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_pbFolder->sizePolicy().hasHeightForWidth());
        mp_pbFolder->setSizePolicy(sizePolicy);
        mp_pbFolder->setMinimumSize(QSize(20, 20));
        mp_pbFolder->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbFolder->setIcon(icon);
        mp_pbFolder->setFlat(true);

        gridLayout->addWidget(mp_pbFolder, 1, 4, 1, 1);

        mp_pbLoad = new QPushButton(GuiPluginManager);
        mp_pbLoad->setObjectName(QString::fromUtf8("mp_pbLoad"));
        sizePolicy.setHeightForWidth(mp_pbLoad->sizePolicy().hasHeightForWidth());
        mp_pbLoad->setSizePolicy(sizePolicy);
        mp_pbLoad->setMinimumSize(QSize(20, 20));
        mp_pbLoad->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbLoad->setIcon(icon1);
        mp_pbLoad->setFlat(true);

        gridLayout->addWidget(mp_pbLoad, 1, 5, 1, 1);

        line = new QFrame(GuiPluginManager);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 6);

        mp_pbEnableAll = new QPushButton(GuiPluginManager);
        mp_pbEnableAll->setObjectName(QString::fromUtf8("mp_pbEnableAll"));
        mp_pbEnableAll->setAutoDefault(false);

        gridLayout->addWidget(mp_pbEnableAll, 3, 0, 1, 1);

        mp_pbDisableAll = new QPushButton(GuiPluginManager);
        mp_pbDisableAll->setObjectName(QString::fromUtf8("mp_pbDisableAll"));
        mp_pbDisableAll->setAutoDefault(false);

        gridLayout->addWidget(mp_pbDisableAll, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);

        mp_pbClose = new QPushButton(GuiPluginManager);
        mp_pbClose->setObjectName(QString::fromUtf8("mp_pbClose"));
        mp_pbClose->setAutoDefault(false);

        gridLayout->addWidget(mp_pbClose, 3, 3, 1, 3);

        QWidget::setTabOrder(mp_twPlugins, mp_leFolder);
        QWidget::setTabOrder(mp_leFolder, mp_pbFolder);
        QWidget::setTabOrder(mp_pbFolder, mp_pbLoad);
        QWidget::setTabOrder(mp_pbLoad, mp_pbEnableAll);
        QWidget::setTabOrder(mp_pbEnableAll, mp_pbDisableAll);
        QWidget::setTabOrder(mp_pbDisableAll, mp_pbClose);

        retranslateUi(GuiPluginManager);

        QMetaObject::connectSlotsByName(GuiPluginManager);
    } // setupUi

    void retranslateUi(QDialog *GuiPluginManager)
    {
        GuiPluginManager->setWindowTitle(QCoreApplication::translate("GuiPluginManager", "Dialog", nullptr));
        mp_pbEnableAll->setText(QCoreApplication::translate("GuiPluginManager", "Enable All", nullptr));
        mp_pbDisableAll->setText(QCoreApplication::translate("GuiPluginManager", "Disable All", nullptr));
        mp_pbClose->setText(QCoreApplication::translate("GuiPluginManager", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiPluginManager: public Ui_GuiPluginManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPLUGINMANAGER_H
