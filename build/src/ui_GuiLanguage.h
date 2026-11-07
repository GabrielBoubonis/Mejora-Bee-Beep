/********************************************************************************
** Form generated from reading UI file 'GuiLanguage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUILANGUAGE_H
#define UI_GUILANGUAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiLanguageDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *mp_labelLanguageSite;
    QLabel *mp_labelLanguage;
    QLineEdit *mp_leLanguage;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mp_labelPath;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mp_lePath;
    QPushButton *mp_pbSelectFolder;
    QTreeWidget *mp_twLanguage;
    QPushButton *mp_pbDefault;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbSelect;
    QPushButton *mp_pbCancel;

    void setupUi(QDialog *GuiLanguageDialog)
    {
        if (GuiLanguageDialog->objectName().isEmpty())
            GuiLanguageDialog->setObjectName(QString::fromUtf8("GuiLanguageDialog"));
        GuiLanguageDialog->setWindowModality(Qt::NonModal);
        GuiLanguageDialog->resize(449, 385);
        gridLayout = new QGridLayout(GuiLanguageDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_labelLanguageSite = new QLabel(GuiLanguageDialog);
        mp_labelLanguageSite->setObjectName(QString::fromUtf8("mp_labelLanguageSite"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_labelLanguageSite->sizePolicy().hasHeightForWidth());
        mp_labelLanguageSite->setSizePolicy(sizePolicy);
        mp_labelLanguageSite->setAlignment(Qt::AlignCenter);
        mp_labelLanguageSite->setOpenExternalLinks(true);

        gridLayout->addWidget(mp_labelLanguageSite, 0, 0, 1, 6);

        mp_labelLanguage = new QLabel(GuiLanguageDialog);
        mp_labelLanguage->setObjectName(QString::fromUtf8("mp_labelLanguage"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_labelLanguage->sizePolicy().hasHeightForWidth());
        mp_labelLanguage->setSizePolicy(sizePolicy1);
        mp_labelLanguage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_labelLanguage, 1, 0, 1, 1);

        mp_leLanguage = new QLineEdit(GuiLanguageDialog);
        mp_leLanguage->setObjectName(QString::fromUtf8("mp_leLanguage"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mp_leLanguage->sizePolicy().hasHeightForWidth());
        mp_leLanguage->setSizePolicy(sizePolicy2);
        mp_leLanguage->setMaximumSize(QSize(80, 16777215));
        mp_leLanguage->setMaxLength(5);
        mp_leLanguage->setReadOnly(true);

        gridLayout->addWidget(mp_leLanguage, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 3);

        mp_labelPath = new QLabel(GuiLanguageDialog);
        mp_labelPath->setObjectName(QString::fromUtf8("mp_labelPath"));
        sizePolicy1.setHeightForWidth(mp_labelPath->sizePolicy().hasHeightForWidth());
        mp_labelPath->setSizePolicy(sizePolicy1);
        mp_labelPath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mp_labelPath, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mp_lePath = new QLineEdit(GuiLanguageDialog);
        mp_lePath->setObjectName(QString::fromUtf8("mp_lePath"));
        mp_lePath->setReadOnly(true);

        horizontalLayout->addWidget(mp_lePath);

        mp_pbSelectFolder = new QPushButton(GuiLanguageDialog);
        mp_pbSelectFolder->setObjectName(QString::fromUtf8("mp_pbSelectFolder"));
        sizePolicy2.setHeightForWidth(mp_pbSelectFolder->sizePolicy().hasHeightForWidth());
        mp_pbSelectFolder->setSizePolicy(sizePolicy2);
        mp_pbSelectFolder->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSelectFolder->setIcon(icon);
        mp_pbSelectFolder->setAutoDefault(false);
        mp_pbSelectFolder->setFlat(true);

        horizontalLayout->addWidget(mp_pbSelectFolder);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 5);

        mp_twLanguage = new QTreeWidget(GuiLanguageDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        mp_twLanguage->setHeaderItem(__qtreewidgetitem);
        mp_twLanguage->setObjectName(QString::fromUtf8("mp_twLanguage"));
        mp_twLanguage->setRootIsDecorated(true);
        mp_twLanguage->setColumnCount(2);

        gridLayout->addWidget(mp_twLanguage, 3, 0, 1, 6);

        mp_pbDefault = new QPushButton(GuiLanguageDialog);
        mp_pbDefault->setObjectName(QString::fromUtf8("mp_pbDefault"));
        mp_pbDefault->setAutoDefault(false);

        gridLayout->addWidget(mp_pbDefault, 4, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 2, 1, 2);

        mp_pbSelect = new QPushButton(GuiLanguageDialog);
        mp_pbSelect->setObjectName(QString::fromUtf8("mp_pbSelect"));

        gridLayout->addWidget(mp_pbSelect, 4, 4, 1, 1);

        mp_pbCancel = new QPushButton(GuiLanguageDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        gridLayout->addWidget(mp_pbCancel, 4, 5, 1, 1);

        QWidget::setTabOrder(mp_leLanguage, mp_lePath);
        QWidget::setTabOrder(mp_lePath, mp_pbSelectFolder);
        QWidget::setTabOrder(mp_pbSelectFolder, mp_twLanguage);
        QWidget::setTabOrder(mp_twLanguage, mp_pbDefault);
        QWidget::setTabOrder(mp_pbDefault, mp_pbSelect);
        QWidget::setTabOrder(mp_pbSelect, mp_pbCancel);

        retranslateUi(GuiLanguageDialog);

        mp_pbSelect->setDefault(true);


        QMetaObject::connectSlotsByName(GuiLanguageDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiLanguageDialog)
    {
        GuiLanguageDialog->setWindowTitle(QCoreApplication::translate("GuiLanguageDialog", "Dialog", nullptr));
        mp_labelLanguage->setText(QCoreApplication::translate("GuiLanguageDialog", "Language", nullptr));
        mp_labelPath->setText(QCoreApplication::translate("GuiLanguageDialog", "Path", nullptr));
#if QT_CONFIG(statustip)
        mp_pbSelectFolder->setStatusTip(QCoreApplication::translate("GuiLanguageDialog", "Select language folder", nullptr));
#endif // QT_CONFIG(statustip)
        mp_pbSelectFolder->setText(QString());
#if QT_CONFIG(statustip)
        mp_pbDefault->setStatusTip(QCoreApplication::translate("GuiLanguageDialog", "Restore to default language", nullptr));
#endif // QT_CONFIG(statustip)
        mp_pbDefault->setText(QCoreApplication::translate("GuiLanguageDialog", "Restore", nullptr));
        mp_pbSelect->setText(QCoreApplication::translate("GuiLanguageDialog", "Select", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiLanguageDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiLanguageDialog: public Ui_GuiLanguageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUILANGUAGE_H
