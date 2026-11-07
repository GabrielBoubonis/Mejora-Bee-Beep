/********************************************************************************
** Form generated from reading UI file 'GuiVoicePlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIVOICEPLAYER_H
#define UI_GUIVOICEPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiVoicePlayerWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *mp_lVoiceFile;
    QPushButton *mp_pbPlay;
    QLabel *mp_lPosition;
    QSlider *mp_sliderPosition;
    QLabel *mp_lDuration;
    QSpacerItem *horizontalSpacer;
    QPushButton *mp_pbClose;

    void setupUi(QWidget *GuiVoicePlayerWidget)
    {
        if (GuiVoicePlayerWidget->objectName().isEmpty())
            GuiVoicePlayerWidget->setObjectName(QString::fromUtf8("GuiVoicePlayerWidget"));
        GuiVoicePlayerWidget->resize(360, 38);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GuiVoicePlayerWidget->sizePolicy().hasHeightForWidth());
        GuiVoicePlayerWidget->setSizePolicy(sizePolicy);
        GuiVoicePlayerWidget->setMinimumSize(QSize(360, 38));
        horizontalLayout = new QHBoxLayout(GuiVoicePlayerWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 2, -1, 2);
        mp_lVoiceFile = new QLabel(GuiVoicePlayerWidget);
        mp_lVoiceFile->setObjectName(QString::fromUtf8("mp_lVoiceFile"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mp_lVoiceFile->sizePolicy().hasHeightForWidth());
        mp_lVoiceFile->setSizePolicy(sizePolicy1);
        mp_lVoiceFile->setMinimumSize(QSize(24, 24));
        mp_lVoiceFile->setMaximumSize(QSize(24, 24));
        mp_lVoiceFile->setPixmap(QPixmap(QString::fromUtf8(":/images/voice-message.png")));
        mp_lVoiceFile->setScaledContents(true);
        mp_lVoiceFile->setAlignment(Qt::AlignCenter);
        mp_lVoiceFile->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout->addWidget(mp_lVoiceFile);

        mp_pbPlay = new QPushButton(GuiVoicePlayerWidget);
        mp_pbPlay->setObjectName(QString::fromUtf8("mp_pbPlay"));
        mp_pbPlay->setMinimumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbPlay->setIcon(icon);
        mp_pbPlay->setIconSize(QSize(24, 24));
        mp_pbPlay->setFlat(true);

        horizontalLayout->addWidget(mp_pbPlay);

        mp_lPosition = new QLabel(GuiVoicePlayerWidget);
        mp_lPosition->setObjectName(QString::fromUtf8("mp_lPosition"));
        mp_lPosition->setMinimumSize(QSize(46, 0));
        mp_lPosition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mp_lPosition->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(mp_lPosition);

        mp_sliderPosition = new QSlider(GuiVoicePlayerWidget);
        mp_sliderPosition->setObjectName(QString::fromUtf8("mp_sliderPosition"));
        mp_sliderPosition->setMinimumSize(QSize(60, 32));
        mp_sliderPosition->setOrientation(Qt::Horizontal);
        mp_sliderPosition->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(mp_sliderPosition);

        mp_lDuration = new QLabel(GuiVoicePlayerWidget);
        mp_lDuration->setObjectName(QString::fromUtf8("mp_lDuration"));
        mp_lDuration->setMinimumSize(QSize(46, 2));
        mp_lDuration->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mp_lDuration->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(mp_lDuration);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mp_pbClose = new QPushButton(GuiVoicePlayerWidget);
        mp_pbClose->setObjectName(QString::fromUtf8("mp_pbClose"));
        mp_pbClose->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbClose->setIcon(icon1);
        mp_pbClose->setIconSize(QSize(24, 24));
        mp_pbClose->setFlat(true);

        horizontalLayout->addWidget(mp_pbClose);


        retranslateUi(GuiVoicePlayerWidget);

        QMetaObject::connectSlotsByName(GuiVoicePlayerWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiVoicePlayerWidget)
    {
#if QT_CONFIG(tooltip)
        mp_pbClose->setToolTip(QCoreApplication::translate("GuiVoicePlayerWidget", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)GuiVoicePlayerWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiVoicePlayerWidget: public Ui_GuiVoicePlayerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIVOICEPLAYER_H
