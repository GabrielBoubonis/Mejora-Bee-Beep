/********************************************************************************
** Form generated from reading UI file 'GuiHome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIHOME_H
#define UI_GUIHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiHomeWidget
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *mp_teSystem;
    QLabel *mp_lNews;

    void setupUi(QWidget *GuiHomeWidget)
    {
        if (GuiHomeWidget->objectName().isEmpty())
            GuiHomeWidget->setObjectName(QString::fromUtf8("GuiHomeWidget"));
        GuiHomeWidget->resize(195, 260);
        gridLayout = new QGridLayout(GuiHomeWidget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_teSystem = new QTextBrowser(GuiHomeWidget);
        mp_teSystem->setObjectName(QString::fromUtf8("mp_teSystem"));
        mp_teSystem->setUndoRedoEnabled(false);
        mp_teSystem->setReadOnly(true);
        mp_teSystem->setAcceptRichText(true);

        gridLayout->addWidget(mp_teSystem, 0, 0, 1, 2);

        mp_lNews = new QLabel(GuiHomeWidget);
        mp_lNews->setObjectName(QString::fromUtf8("mp_lNews"));
        mp_lNews->setMinimumSize(QSize(0, 30));
        mp_lNews->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 136, 136);\n"
"color: rgb(0, 0, 0);\n"
""));
        mp_lNews->setFrameShape(QFrame::Box);
        mp_lNews->setFrameShadow(QFrame::Sunken);
        mp_lNews->setAlignment(Qt::AlignCenter);
        mp_lNews->setWordWrap(true);
        mp_lNews->setMargin(4);
        mp_lNews->setOpenExternalLinks(true);

        gridLayout->addWidget(mp_lNews, 1, 0, 1, 2);


        retranslateUi(GuiHomeWidget);

        QMetaObject::connectSlotsByName(GuiHomeWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiHomeWidget)
    {
        mp_lNews->setText(QCoreApplication::translate("GuiHomeWidget", "News", nullptr));
        (void)GuiHomeWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiHomeWidget: public Ui_GuiHomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIHOME_H
