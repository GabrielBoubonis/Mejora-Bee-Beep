/********************************************************************************
** Form generated from reading UI file 'GuiRecordVoiceMessageSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIRECORDVOICEMESSAGESETTINGS_H
#define UI_GUIRECORDVOICEMESSAGESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GuiRecordVoiceMessageSettingsDialog
{
public:
    QGridLayout *mp_customLayout1;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mp_cbUseSystemEncoder;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *mp_cbUseCustomSettings;
    QGroupBox *mp_gbEncodingMode;
    QGridLayout *gridLayout;
    QComboBox *mp_comboBitrate;
    QRadioButton *mp_rbConstantBitRate;
    QRadioButton *mp_rbAverageBitRate;
    QSlider *mp_sliderQuality;
    QRadioButton *mp_rbConstantQuality;
    QRadioButton *mp_rbTwoPass;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *mp_pbReset;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mp_pbOk;
    QPushButton *mp_pbCancel;
    QGroupBox *mp_gbVoiceRecorder;
    QGridLayout *gridLayout_2;
    QLabel *mp_lInputDevice;
    QComboBox *mp_comboInputDevice;
    QLabel *mp_lAudioCodec;
    QComboBox *mp_comboAudioCodec;
    QLabel *mp_lContainer;
    QComboBox *mp_comboContainer;
    QLabel *mp_lSampleRate;
    QComboBox *mp_comboSampleRate;
    QLabel *mp_lChannels;
    QComboBox *mp_comboChannels;

    void setupUi(QDialog *GuiRecordVoiceMessageSettingsDialog)
    {
        if (GuiRecordVoiceMessageSettingsDialog->objectName().isEmpty())
            GuiRecordVoiceMessageSettingsDialog->setObjectName(QString::fromUtf8("GuiRecordVoiceMessageSettingsDialog"));
        GuiRecordVoiceMessageSettingsDialog->resize(621, 301);
        mp_customLayout1 = new QGridLayout(GuiRecordVoiceMessageSettingsDialog);
        mp_customLayout1->setObjectName(QString::fromUtf8("mp_customLayout1"));
        line = new QFrame(GuiRecordVoiceMessageSettingsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        mp_customLayout1->addWidget(line, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mp_cbUseSystemEncoder = new QCheckBox(GuiRecordVoiceMessageSettingsDialog);
        mp_cbUseSystemEncoder->setObjectName(QString::fromUtf8("mp_cbUseSystemEncoder"));

        horizontalLayout_2->addWidget(mp_cbUseSystemEncoder);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        mp_cbUseCustomSettings = new QCheckBox(GuiRecordVoiceMessageSettingsDialog);
        mp_cbUseCustomSettings->setObjectName(QString::fromUtf8("mp_cbUseCustomSettings"));

        horizontalLayout_2->addWidget(mp_cbUseCustomSettings);


        mp_customLayout1->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        mp_gbEncodingMode = new QGroupBox(GuiRecordVoiceMessageSettingsDialog);
        mp_gbEncodingMode->setObjectName(QString::fromUtf8("mp_gbEncodingMode"));
        mp_gbEncodingMode->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(mp_gbEncodingMode);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mp_comboBitrate = new QComboBox(mp_gbEncodingMode);
        mp_comboBitrate->setObjectName(QString::fromUtf8("mp_comboBitrate"));
        mp_comboBitrate->setEnabled(false);
        sizePolicy.setHeightForWidth(mp_comboBitrate->sizePolicy().hasHeightForWidth());
        mp_comboBitrate->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mp_comboBitrate, 1, 1, 1, 1);

        mp_rbConstantBitRate = new QRadioButton(mp_gbEncodingMode);
        mp_rbConstantBitRate->setObjectName(QString::fromUtf8("mp_rbConstantBitRate"));

        gridLayout->addWidget(mp_rbConstantBitRate, 1, 0, 1, 1);

        mp_rbAverageBitRate = new QRadioButton(mp_gbEncodingMode);
        mp_rbAverageBitRate->setObjectName(QString::fromUtf8("mp_rbAverageBitRate"));

        gridLayout->addWidget(mp_rbAverageBitRate, 2, 0, 1, 1);

        mp_sliderQuality = new QSlider(mp_gbEncodingMode);
        mp_sliderQuality->setObjectName(QString::fromUtf8("mp_sliderQuality"));
        mp_sliderQuality->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(mp_sliderQuality, 0, 1, 1, 1);

        mp_rbConstantQuality = new QRadioButton(mp_gbEncodingMode);
        mp_rbConstantQuality->setObjectName(QString::fromUtf8("mp_rbConstantQuality"));
        mp_rbConstantQuality->setChecked(true);

        gridLayout->addWidget(mp_rbConstantQuality, 0, 0, 1, 1);

        mp_rbTwoPass = new QRadioButton(mp_gbEncodingMode);
        mp_rbTwoPass->setObjectName(QString::fromUtf8("mp_rbTwoPass"));

        gridLayout->addWidget(mp_rbTwoPass, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 1, 1, 1);


        mp_customLayout1->addWidget(mp_gbEncodingMode, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mp_customLayout1->addItem(verticalSpacer, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mp_pbReset = new QPushButton(GuiRecordVoiceMessageSettingsDialog);
        mp_pbReset->setObjectName(QString::fromUtf8("mp_pbReset"));

        horizontalLayout->addWidget(mp_pbReset);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mp_pbOk = new QPushButton(GuiRecordVoiceMessageSettingsDialog);
        mp_pbOk->setObjectName(QString::fromUtf8("mp_pbOk"));

        horizontalLayout->addWidget(mp_pbOk);

        mp_pbCancel = new QPushButton(GuiRecordVoiceMessageSettingsDialog);
        mp_pbCancel->setObjectName(QString::fromUtf8("mp_pbCancel"));

        horizontalLayout->addWidget(mp_pbCancel);


        mp_customLayout1->addLayout(horizontalLayout, 6, 0, 1, 2);

        mp_gbVoiceRecorder = new QGroupBox(GuiRecordVoiceMessageSettingsDialog);
        mp_gbVoiceRecorder->setObjectName(QString::fromUtf8("mp_gbVoiceRecorder"));
        mp_gbVoiceRecorder->setMinimumSize(QSize(330, 0));
        mp_gbVoiceRecorder->setAlignment(Qt::AlignCenter);
        mp_gbVoiceRecorder->setCheckable(false);
        gridLayout_2 = new QGridLayout(mp_gbVoiceRecorder);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mp_lInputDevice = new QLabel(mp_gbVoiceRecorder);
        mp_lInputDevice->setObjectName(QString::fromUtf8("mp_lInputDevice"));
        mp_lInputDevice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(mp_lInputDevice, 0, 0, 1, 1);

        mp_comboInputDevice = new QComboBox(mp_gbVoiceRecorder);
        mp_comboInputDevice->setObjectName(QString::fromUtf8("mp_comboInputDevice"));
        sizePolicy.setHeightForWidth(mp_comboInputDevice->sizePolicy().hasHeightForWidth());
        mp_comboInputDevice->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mp_comboInputDevice, 0, 1, 1, 1);

        mp_lAudioCodec = new QLabel(mp_gbVoiceRecorder);
        mp_lAudioCodec->setObjectName(QString::fromUtf8("mp_lAudioCodec"));
        mp_lAudioCodec->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(mp_lAudioCodec, 1, 0, 1, 1);

        mp_comboAudioCodec = new QComboBox(mp_gbVoiceRecorder);
        mp_comboAudioCodec->setObjectName(QString::fromUtf8("mp_comboAudioCodec"));
        sizePolicy.setHeightForWidth(mp_comboAudioCodec->sizePolicy().hasHeightForWidth());
        mp_comboAudioCodec->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mp_comboAudioCodec, 1, 1, 1, 1);

        mp_lContainer = new QLabel(mp_gbVoiceRecorder);
        mp_lContainer->setObjectName(QString::fromUtf8("mp_lContainer"));
        mp_lContainer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(mp_lContainer, 2, 0, 1, 1);

        mp_comboContainer = new QComboBox(mp_gbVoiceRecorder);
        mp_comboContainer->setObjectName(QString::fromUtf8("mp_comboContainer"));
        sizePolicy.setHeightForWidth(mp_comboContainer->sizePolicy().hasHeightForWidth());
        mp_comboContainer->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mp_comboContainer, 2, 1, 1, 1);

        mp_lSampleRate = new QLabel(mp_gbVoiceRecorder);
        mp_lSampleRate->setObjectName(QString::fromUtf8("mp_lSampleRate"));
        mp_lSampleRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(mp_lSampleRate, 3, 0, 1, 1);

        mp_comboSampleRate = new QComboBox(mp_gbVoiceRecorder);
        mp_comboSampleRate->setObjectName(QString::fromUtf8("mp_comboSampleRate"));
        sizePolicy.setHeightForWidth(mp_comboSampleRate->sizePolicy().hasHeightForWidth());
        mp_comboSampleRate->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mp_comboSampleRate, 3, 1, 1, 1);

        mp_lChannels = new QLabel(mp_gbVoiceRecorder);
        mp_lChannels->setObjectName(QString::fromUtf8("mp_lChannels"));
        mp_lChannels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(mp_lChannels, 4, 0, 1, 1);

        mp_comboChannels = new QComboBox(mp_gbVoiceRecorder);
        mp_comboChannels->setObjectName(QString::fromUtf8("mp_comboChannels"));
        sizePolicy.setHeightForWidth(mp_comboChannels->sizePolicy().hasHeightForWidth());
        mp_comboChannels->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mp_comboChannels, 4, 1, 1, 1);


        mp_customLayout1->addWidget(mp_gbVoiceRecorder, 2, 0, 1, 1);

        QWidget::setTabOrder(mp_cbUseSystemEncoder, mp_cbUseCustomSettings);
        QWidget::setTabOrder(mp_cbUseCustomSettings, mp_comboInputDevice);
        QWidget::setTabOrder(mp_comboInputDevice, mp_comboAudioCodec);
        QWidget::setTabOrder(mp_comboAudioCodec, mp_comboContainer);
        QWidget::setTabOrder(mp_comboContainer, mp_comboSampleRate);
        QWidget::setTabOrder(mp_comboSampleRate, mp_comboChannels);
        QWidget::setTabOrder(mp_comboChannels, mp_rbConstantQuality);
        QWidget::setTabOrder(mp_rbConstantQuality, mp_sliderQuality);
        QWidget::setTabOrder(mp_sliderQuality, mp_rbConstantBitRate);
        QWidget::setTabOrder(mp_rbConstantBitRate, mp_comboBitrate);
        QWidget::setTabOrder(mp_comboBitrate, mp_rbAverageBitRate);
        QWidget::setTabOrder(mp_rbAverageBitRate, mp_rbTwoPass);
        QWidget::setTabOrder(mp_rbTwoPass, mp_pbReset);
        QWidget::setTabOrder(mp_pbReset, mp_pbOk);
        QWidget::setTabOrder(mp_pbOk, mp_pbCancel);

        retranslateUi(GuiRecordVoiceMessageSettingsDialog);

        QMetaObject::connectSlotsByName(GuiRecordVoiceMessageSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiRecordVoiceMessageSettingsDialog)
    {
        mp_cbUseSystemEncoder->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Use system voice encoder", nullptr));
        mp_cbUseCustomSettings->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Use custom settings", nullptr));
        mp_gbEncodingMode->setTitle(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Encoding mode", nullptr));
        mp_rbConstantBitRate->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Constant bit rate", nullptr));
        mp_rbAverageBitRate->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Average bit tate", nullptr));
        mp_rbConstantQuality->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Constant quality", nullptr));
        mp_rbTwoPass->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Two pass", nullptr));
        mp_pbReset->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Restore to system defaults", nullptr));
        mp_pbOk->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Ok", nullptr));
        mp_pbCancel->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Cancel", nullptr));
        mp_gbVoiceRecorder->setTitle(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Voice message recorder", nullptr));
        mp_lInputDevice->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Input device", nullptr));
        mp_lAudioCodec->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Audio codec", nullptr));
        mp_lContainer->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "File container", nullptr));
        mp_lSampleRate->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Sample rate", nullptr));
        mp_lChannels->setText(QCoreApplication::translate("GuiRecordVoiceMessageSettingsDialog", "Channels", nullptr));
        (void)GuiRecordVoiceMessageSettingsDialog;
    } // retranslateUi

};

namespace Ui {
    class GuiRecordVoiceMessageSettingsDialog: public Ui_GuiRecordVoiceMessageSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIRECORDVOICEMESSAGESETTINGS_H
