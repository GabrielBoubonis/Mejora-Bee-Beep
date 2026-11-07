/********************************************************************************
** Form generated from reading UI file 'GuiShareDesktop.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISHAREDESKTOP_H
#define UI_GUISHAREDESKTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiShareDesktopWidget
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *mp_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *mp_lView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GuiShareDesktopWidget)
    {
        if (GuiShareDesktopWidget->objectName().isEmpty())
            GuiShareDesktopWidget->setObjectName(QString::fromUtf8("GuiShareDesktopWidget"));
        GuiShareDesktopWidget->resize(366, 311);
        centralwidget = new QWidget(GuiShareDesktopWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mp_scrollArea = new QScrollArea(centralwidget);
        mp_scrollArea->setObjectName(QString::fromUtf8("mp_scrollArea"));
        mp_scrollArea->setFrameShape(QFrame::NoFrame);
        mp_scrollArea->setFrameShadow(QFrame::Plain);
        mp_scrollArea->setLineWidth(1);
        mp_scrollArea->setWidgetResizable(true);
        mp_scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 348, 273));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mp_lView = new QLabel(scrollAreaWidgetContents);
        mp_lView->setObjectName(QString::fromUtf8("mp_lView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lView->sizePolicy().hasHeightForWidth());
        mp_lView->setSizePolicy(sizePolicy);
        mp_lView->setTextFormat(Qt::PlainText);
        mp_lView->setAlignment(Qt::AlignCenter);
        mp_lView->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_2->addWidget(mp_lView, 0, 0, 1, 1);

        mp_scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(mp_scrollArea, 0, 0, 1, 1);

        GuiShareDesktopWidget->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GuiShareDesktopWidget);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GuiShareDesktopWidget->setStatusBar(statusbar);

        retranslateUi(GuiShareDesktopWidget);

        QMetaObject::connectSlotsByName(GuiShareDesktopWidget);
    } // setupUi

    void retranslateUi(QMainWindow *GuiShareDesktopWidget)
    {
        (void)GuiShareDesktopWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiShareDesktopWidget: public Ui_GuiShareDesktopWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISHAREDESKTOP_H
