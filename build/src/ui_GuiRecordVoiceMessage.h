/********************************************************************************
** Form generated from reading UI file 'GuiRecordVoiceMessage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIRECORDVOICEMESSAGE_H
#define UI_GUIRECORDVOICEMESSAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GuiRecordVoiceMessageDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *mp_pbCancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mp_pbSend;
    QGroupBox *mp_gbVoiceMessage;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QProgressBar *mp_progressBar;
    QLabel *mp_lDuration;
    QPushButton *mp_pbRecord;
    QLabel *mp_lStatus;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mp_lVolume;
    QSlider *mp_sliderVolume;
    QVBoxLayout *mp_layoutLevels;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mp_labelTo;
    QLineEdit *mp_leTo;

    void setupUi(QDialog *GuiRecordVoiceMessageDialog)
    {
        if (GuiRecordVoiceMessageDialog->objectName().isEmpty())
            GuiRecordVoiceMessageDialog->setObjectName(QString::fromUtf8("GuiRecordVoiceMessageDialog"));
        GuiRecordVoiceMessageDialog->setWindowModality(Qt::WindowModal);
        GuiRecordVoiceMessageDialog->resize(368, 316);
        GuiRecordVoiceMessageDialog->setMinimumSize(QSize(320, 280));
        GuiRecordVoiceMessageDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(GuiRecordVoiceMessageDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_pbCancel = new QPushButton(GuiRecordVoiceMessageDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));
        mp_pbCancel->setMinimumSize(QSize(90, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbCancel->setIcon(icon);

        gridLayout->addWidget(mp_pbCancel, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        mp_pbSend = new QPushButton(GuiRecordVoiceMessageDialog);
        mp_pbSend->setObjectName(QString::fromUtf8("mp_pbSend"));
        mp_pbSend->setMinimumSize(QSize(90, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbSend->setIcon(icon1);

        gridLayout->addWidget(mp_pbSend, 2, 2, 1, 1);

        mp_gbVoiceMessage = new QGroupBox(GuiRecordVoiceMessageDialog);
        mp_gbVoiceMessage->setObjectName(QString::fromUtf8("mp_gbVoiceMessage"));
        mp_gbVoiceMessage->setMinimumSize(QSize(0, 80));
        mp_gbVoiceMessage->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(mp_gbVoiceMessage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mp_progressBar = new QProgressBar(mp_gbVoiceMessage);
        mp_progressBar->setObjectName(QString::fromUtf8("mp_progressBar"));
        mp_progressBar->setMinimumSize(QSize(100, 26));
        mp_progressBar->setMaximum(200);
        mp_progressBar->setValue(0);
        mp_progressBar->setTextVisible(false);
        mp_progressBar->setFormat(QString::fromUtf8("%v s"));

        horizontalLayout->addWidget(mp_progressBar);

        mp_lDuration = new QLabel(mp_gbVoiceMessage);
        mp_lDuration->setObjectName(QString::fromUtf8("mp_lDuration"));
        mp_lDuration->setMinimumSize(QSize(30, 0));
        mp_lDuration->setTextFormat(Qt::PlainText);
        mp_lDuration->setAlignment(Qt::AlignCenter);
        mp_lDuration->setWordWrap(true);

        horizontalLayout->addWidget(mp_lDuration);

        mp_pbRecord = new QPushButton(mp_gbVoiceMessage);
        mp_pbRecord->setObjectName(QString::fromUtf8("mp_pbRecord"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        mp_pbRecord->setIcon(icon2);

        horizontalLayout->addWidget(mp_pbRecord);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        mp_lStatus = new QLabel(mp_gbVoiceMessage);
        mp_lStatus->setObjectName(QString::fromUtf8("mp_lStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mp_lStatus->sizePolicy().hasHeightForWidth());
        mp_lStatus->setSizePolicy(sizePolicy);
        mp_lStatus->setMinimumSize(QSize(0, 42));
        mp_lStatus->setFrameShape(QFrame::StyledPanel);
        mp_lStatus->setAlignment(Qt::AlignCenter);
        mp_lStatus->setWordWrap(true);

        gridLayout_2->addWidget(mp_lStatus, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_lVolume = new QLabel(mp_gbVoiceMessage);
        mp_lVolume->setObjectName(QString::fromUtf8("mp_lVolume"));
        mp_lVolume->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(mp_lVolume);

        mp_sliderVolume = new QSlider(mp_gbVoiceMessage);
        mp_sliderVolume->setObjectName(QString::fromUtf8("mp_sliderVolume"));
        mp_sliderVolume->setMinimumSize(QSize(0, 0));
        mp_sliderVolume->setMaximum(100);
        mp_sliderVolume->setSingleStep(1);
        mp_sliderVolume->setValue(100);
        mp_sliderVolume->setOrientation(Qt::Horizontal);
        mp_sliderVolume->setTickPosition(QSlider::TicksBothSides);
        mp_sliderVolume->setTickInterval(10);

        horizontalLayout_2->addWidget(mp_sliderVolume);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        mp_layoutLevels = new QVBoxLayout();
        mp_layoutLevels->setObjectName(QString::fromUtf8("mp_layoutLevels"));

        gridLayout_2->addLayout(mp_layoutLevels, 2, 0, 1, 1);


        gridLayout->addWidget(mp_gbVoiceMessage, 1, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mp_labelTo = new QLabel(GuiRecordVoiceMessageDialog);
        mp_labelTo->setObjectName(QString::fromUtf8("mp_labelTo"));

        horizontalLayout_3->addWidget(mp_labelTo);

        mp_leTo = new QLineEdit(GuiRecordVoiceMessageDialog);
        mp_leTo->setObjectName(QString::fromUtf8("mp_leTo"));
        mp_leTo->setMinimumSize(QSize(0, 26));
        mp_leTo->setReadOnly(true);

        horizontalLayout_3->addWidget(mp_leTo);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 3);

        QWidget::setTabOrder(mp_pbRecord, mp_sliderVolume);
        QWidget::setTabOrder(mp_sliderVolume, mp_pbSend);
        QWidget::setTabOrder(mp_pbSend, mp_pbCancel);
        QWidget::setTabOrder(mp_pbCancel, mp_leTo);

        retranslateUi(GuiRecordVoiceMessageDialog);

        QMetaObject::connectSlotsByName(GuiRecordVoiceMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiRecordVoiceMessageDialog)
    {
        mp_pbCancel->setText(QCoreApplication::translate("GuiRecordVoiceMessageDialog", "Cancel", nullptr));
        mp_pbSend->setText(QCoreApplication::translate("GuiRecordVoiceMessageDialog", "Send", nullptr));
        mp_gbVoiceMessage->setTitle(QCoreApplication::translate("GuiRecordVoiceMessageDialog", "Voice message", nullptr));
        mp_pbRecord->setText(QCoreApplication::translate("GuiRecordVoiceMessageDialog", "Record", nullptr));
        mp_lVolume->setText(QCoreApplication::translate("GuiRecordVoiceMessageDialog", "Volume", nullptr));
        mp_labelTo->setText(QCoreApplication::translate("GuiRecordVoiceMessageDialog", "To", nullptr));
        (void)GuiRecordVoiceMessageDialog;
    } // retranslateUi

};

namespace Ui {
    class GuiRecordVoiceMessageDialog: public Ui_GuiRecordVoiceMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIRECORDVOICEMESSAGE_H
