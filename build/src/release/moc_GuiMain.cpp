/****************************************************************************
** Meta object code from reading C++ file 'GuiMain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiMain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiMain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiMain_t {
    QByteArrayData data[170];
    char stringdata0[2931];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiMain_t qt_meta_stringdata_GuiMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GuiMain"
QT_MOC_LITERAL(1, 8, 11), // "loadSession"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 23), // "checkWindowFlagsAndShow"
QT_MOC_LITERAL(4, 45, 9), // "startCore"
QT_MOC_LITERAL(5, 55, 8), // "stopCore"
QT_MOC_LITERAL(6, 64, 11), // "restartCore"
QT_MOC_LITERAL(7, 76, 13), // "forceShutdown"
QT_MOC_LITERAL(8, 90, 14), // "hideToTrayIcon"
QT_MOC_LITERAL(9, 105, 9), // "setInIdle"
QT_MOC_LITERAL(10, 115, 12), // "exitFromIdle"
QT_MOC_LITERAL(11, 128, 11), // "showMessage"
QT_MOC_LITERAL(12, 140, 6), // "showUp"
QT_MOC_LITERAL(13, 147, 10), // "raiseOnTop"
QT_MOC_LITERAL(14, 158, 11), // "onTickEvent"
QT_MOC_LITERAL(15, 170, 11), // "saveSession"
QT_MOC_LITERAL(16, 182, 16), // "QSessionManager&"
QT_MOC_LITERAL(17, 199, 15), // "onWakeUpRequest"
QT_MOC_LITERAL(18, 215, 14), // "onSleepRequest"
QT_MOC_LITERAL(19, 230, 21), // "disconnectFromNetwork"
QT_MOC_LITERAL(20, 252, 9), // "loadStyle"
QT_MOC_LITERAL(21, 262, 15), // "onCoreConnected"
QT_MOC_LITERAL(22, 278, 18), // "onCoreDisconnected"
QT_MOC_LITERAL(23, 297, 9), // "showAbout"
QT_MOC_LITERAL(24, 307, 11), // "showLicense"
QT_MOC_LITERAL(25, 319, 11), // "showAboutQt"
QT_MOC_LITERAL(26, 331, 13), // "onUserChanged"
QT_MOC_LITERAL(27, 345, 4), // "User"
QT_MOC_LITERAL(28, 350, 15), // "showWritingUser"
QT_MOC_LITERAL(29, 366, 7), // "VNumber"
QT_MOC_LITERAL(30, 374, 13), // "onUserRemoved"
QT_MOC_LITERAL(31, 388, 16), // "onNewChatMessage"
QT_MOC_LITERAL(32, 405, 4), // "Chat"
QT_MOC_LITERAL(33, 410, 11), // "ChatMessage"
QT_MOC_LITERAL(34, 422, 13), // "onChatChanged"
QT_MOC_LITERAL(35, 436, 13), // "onChatRemoved"
QT_MOC_LITERAL(36, 450, 11), // "sendMessage"
QT_MOC_LITERAL(37, 462, 15), // "showTipOfTheDay"
QT_MOC_LITERAL(38, 478, 7), // "showFaq"
QT_MOC_LITERAL(39, 486, 16), // "showFactOfTheDay"
QT_MOC_LITERAL(40, 503, 11), // "searchUsers"
QT_MOC_LITERAL(41, 515, 15), // "settingsChanged"
QT_MOC_LITERAL(42, 531, 8), // "QAction*"
QT_MOC_LITERAL(43, 540, 12), // "showNextChat"
QT_MOC_LITERAL(44, 553, 14), // "statusSelected"
QT_MOC_LITERAL(45, 568, 23), // "changeStatusDescription"
QT_MOC_LITERAL(46, 592, 16), // "sendFileFromChat"
QT_MOC_LITERAL(47, 609, 17), // "sendFilesFromChat"
QT_MOC_LITERAL(48, 627, 8), // "sendFile"
QT_MOC_LITERAL(49, 636, 14), // "downloadFolder"
QT_MOC_LITERAL(50, 651, 15), // "QList<FileInfo>"
QT_MOC_LITERAL(51, 667, 12), // "downloadFile"
QT_MOC_LITERAL(52, 680, 8), // "FileInfo"
QT_MOC_LITERAL(53, 689, 18), // "downloadSharedFile"
QT_MOC_LITERAL(54, 708, 19), // "downloadSharedFiles"
QT_MOC_LITERAL(55, 728, 21), // "QList<SharedFileInfo>"
QT_MOC_LITERAL(56, 750, 23), // "selectDownloadDirectory"
QT_MOC_LITERAL(57, 774, 11), // "changeVCard"
QT_MOC_LITERAL(58, 786, 9), // "showVCard"
QT_MOC_LITERAL(59, 796, 15), // "changeUserColor"
QT_MOC_LITERAL(60, 812, 14), // "showPluginHelp"
QT_MOC_LITERAL(61, 827, 17), // "showPluginManager"
QT_MOC_LITERAL(62, 845, 8), // "showChat"
QT_MOC_LITERAL(63, 854, 10), // "showWizard"
QT_MOC_LITERAL(64, 865, 15), // "trayIconClicked"
QT_MOC_LITERAL(65, 881, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(66, 915, 18), // "trayMessageClicked"
QT_MOC_LITERAL(67, 934, 10), // "addToShare"
QT_MOC_LITERAL(68, 945, 15), // "removeFromShare"
QT_MOC_LITERAL(69, 961, 7), // "openUrl"
QT_MOC_LITERAL(70, 969, 15), // "openUrlFromChat"
QT_MOC_LITERAL(71, 985, 14), // "selectBeepFile"
QT_MOC_LITERAL(72, 1000, 12), // "testBeepFile"
QT_MOC_LITERAL(73, 1013, 8), // "playBeep"
QT_MOC_LITERAL(74, 1022, 8), // "playBuzz"
QT_MOC_LITERAL(75, 1031, 13), // "editGroupChat"
QT_MOC_LITERAL(76, 1045, 15), // "createGroupChat"
QT_MOC_LITERAL(77, 1061, 21), // "showSavedChatSelected"
QT_MOC_LITERAL(78, 1083, 15), // "removeSavedChat"
QT_MOC_LITERAL(79, 1099, 13), // "linkSavedChat"
QT_MOC_LITERAL(80, 1113, 15), // "checkNewVersion"
QT_MOC_LITERAL(81, 1129, 11), // "openWebSite"
QT_MOC_LITERAL(82, 1141, 22), // "openDownloadPluginPage"
QT_MOC_LITERAL(83, 1164, 16), // "openDonationPage"
QT_MOC_LITERAL(84, 1181, 20), // "openDeveloperWebSite"
QT_MOC_LITERAL(85, 1202, 12), // "openHelpPage"
QT_MOC_LITERAL(86, 1215, 9), // "clearChat"
QT_MOC_LITERAL(87, 1225, 25), // "clearSystemMessagesInChat"
QT_MOC_LITERAL(88, 1251, 10), // "removeChat"
QT_MOC_LITERAL(89, 1262, 17), // "showSharesForUser"
QT_MOC_LITERAL(90, 1280, 14), // "selectLanguage"
QT_MOC_LITERAL(91, 1295, 18), // "showLocalUserVCard"
QT_MOC_LITERAL(92, 1314, 11), // "showAddUser"
QT_MOC_LITERAL(93, 1326, 20), // "showChatSettingsMenu"
QT_MOC_LITERAL(94, 1347, 20), // "sendBroadcastMessage"
QT_MOC_LITERAL(95, 1368, 21), // "enableBroadcastAction"
QT_MOC_LITERAL(96, 1390, 17), // "checkUserSelected"
QT_MOC_LITERAL(97, 1408, 27), // "showConnectionStatusChanged"
QT_MOC_LITERAL(98, 1436, 22), // "changeAvatarSizeInList"
QT_MOC_LITERAL(99, 1459, 18), // "toggleUserFavorite"
QT_MOC_LITERAL(100, 1478, 18), // "removeUserFromList"
QT_MOC_LITERAL(101, 1497, 14), // "openDataFolder"
QT_MOC_LITERAL(102, 1512, 18), // "openResourceFolder"
QT_MOC_LITERAL(103, 1531, 18), // "openDownloadFolder"
QT_MOC_LITERAL(104, 1550, 21), // "readAllMessagesInChat"
QT_MOC_LITERAL(105, 1572, 30), // "recentlyUsedUserStatusSelected"
QT_MOC_LITERAL(106, 1603, 27), // "clearRecentlyUsedUserStatus"
QT_MOC_LITERAL(107, 1631, 23), // "loadSavedChatsCompleted"
QT_MOC_LITERAL(108, 1655, 13), // "editShortcuts"
QT_MOC_LITERAL(109, 1669, 16), // "minimizeAllChats"
QT_MOC_LITERAL(110, 1686, 12), // "showAllChats"
QT_MOC_LITERAL(111, 1699, 15), // "sendHelpMessage"
QT_MOC_LITERAL(112, 1715, 21), // "sendHelpMessageToUser"
QT_MOC_LITERAL(113, 1737, 20), // "selectDictionatyPath"
QT_MOC_LITERAL(114, 1758, 22), // "onNetworkInterfaceDown"
QT_MOC_LITERAL(115, 1781, 20), // "onNetworkInterfaceUp"
QT_MOC_LITERAL(116, 1802, 16), // "onChatReadByUser"
QT_MOC_LITERAL(117, 1819, 23), // "askSaveGeometryAndState"
QT_MOC_LITERAL(118, 1843, 24), // "askResetGeometryAndState"
QT_MOC_LITERAL(119, 1868, 29), // "onChangeSettingOnExistingFile"
QT_MOC_LITERAL(120, 1898, 28), // "onShareDesktopImageAvailable"
QT_MOC_LITERAL(121, 1927, 4), // "QRgb"
QT_MOC_LITERAL(122, 1932, 24), // "onShareDesktopCloseEvent"
QT_MOC_LITERAL(123, 1957, 27), // "onShareDesktopDeleteRequest"
QT_MOC_LITERAL(124, 1985, 29), // "onShareDesktopRequestFromChat"
QT_MOC_LITERAL(125, 2015, 20), // "onShareDesktopUpdate"
QT_MOC_LITERAL(126, 2036, 20), // "sendScreenshotToChat"
QT_MOC_LITERAL(127, 2057, 38), // "startExternalApplicationFromA..."
QT_MOC_LITERAL(128, 2096, 22), // "onFileTransferProgress"
QT_MOC_LITERAL(129, 2119, 12), // "FileSizeType"
QT_MOC_LITERAL(130, 2132, 21), // "onFileTransferMessage"
QT_MOC_LITERAL(131, 2154, 31), // "FileTransferPeer::TransferState"
QT_MOC_LITERAL(132, 2186, 14), // "sendBuzzToUser"
QT_MOC_LITERAL(133, 2201, 16), // "showBuzzFromUser"
QT_MOC_LITERAL(134, 2218, 23), // "showHelpRequestFromUser"
QT_MOC_LITERAL(135, 2242, 22), // "showHelpAnswerFromUser"
QT_MOC_LITERAL(136, 2265, 26), // "removeFloatingChatFromList"
QT_MOC_LITERAL(137, 2292, 21), // "showFileSharingWindow"
QT_MOC_LITERAL(138, 2314, 25), // "onFileSharingWindowClosed"
QT_MOC_LITERAL(139, 2340, 20), // "showScreenShotWindow"
QT_MOC_LITERAL(140, 2361, 24), // "onScreenShotWindowClosed"
QT_MOC_LITERAL(141, 2386, 13), // "showLogWindow"
QT_MOC_LITERAL(142, 2400, 17), // "onLogWindowClosed"
QT_MOC_LITERAL(143, 2418, 16), // "onMainTabChanged"
QT_MOC_LITERAL(144, 2435, 14), // "showWorkgroups"
QT_MOC_LITERAL(145, 2450, 16), // "showRefusedChats"
QT_MOC_LITERAL(146, 2467, 24), // "updateLocalStatusMessage"
QT_MOC_LITERAL(147, 2492, 25), // "onStatusBarMessageChanged"
QT_MOC_LITERAL(148, 2518, 20), // "selectIconSourcePath"
QT_MOC_LITERAL(149, 2539, 24), // "selectEmoticonSourcePath"
QT_MOC_LITERAL(150, 2564, 15), // "onNewsAvailable"
QT_MOC_LITERAL(151, 2580, 27), // "showDefaultServerPortInMenu"
QT_MOC_LITERAL(152, 2608, 13), // "createMessage"
QT_MOC_LITERAL(153, 2622, 14), // "updateChatFont"
QT_MOC_LITERAL(154, 2637, 16), // "updateChatColors"
QT_MOC_LITERAL(155, 2654, 14), // "resetAllColors"
QT_MOC_LITERAL(156, 2669, 23), // "onHideEmptyChatsRequest"
QT_MOC_LITERAL(157, 2693, 10), // "updateUser"
QT_MOC_LITERAL(158, 2704, 25), // "onApplicationFocusChanged"
QT_MOC_LITERAL(159, 2730, 8), // "QWidget*"
QT_MOC_LITERAL(160, 2739, 15), // "showNetworkTest"
QT_MOC_LITERAL(161, 2755, 25), // "onNetworkTestWindowClosed"
QT_MOC_LITERAL(162, 2781, 22), // "sendVoiceMessageToChat"
QT_MOC_LITERAL(163, 2804, 24), // "showVoiceEncoderSettings"
QT_MOC_LITERAL(164, 2829, 18), // "resumeFileTransfer"
QT_MOC_LITERAL(165, 2848, 7), // "user_id"
QT_MOC_LITERAL(166, 2856, 24), // "changeEmoticonSizeInChat"
QT_MOC_LITERAL(167, 2881, 15), // "selectFirstChat"
QT_MOC_LITERAL(168, 2897, 25), // "removeUnsentMessageInChat"
QT_MOC_LITERAL(169, 2923, 7) // "chat_id"

    },
    "GuiMain\0loadSession\0\0checkWindowFlagsAndShow\0"
    "startCore\0stopCore\0restartCore\0"
    "forceShutdown\0hideToTrayIcon\0setInIdle\0"
    "exitFromIdle\0showMessage\0showUp\0"
    "raiseOnTop\0onTickEvent\0saveSession\0"
    "QSessionManager&\0onWakeUpRequest\0"
    "onSleepRequest\0disconnectFromNetwork\0"
    "loadStyle\0onCoreConnected\0onCoreDisconnected\0"
    "showAbout\0showLicense\0showAboutQt\0"
    "onUserChanged\0User\0showWritingUser\0"
    "VNumber\0onUserRemoved\0onNewChatMessage\0"
    "Chat\0ChatMessage\0onChatChanged\0"
    "onChatRemoved\0sendMessage\0showTipOfTheDay\0"
    "showFaq\0showFactOfTheDay\0searchUsers\0"
    "settingsChanged\0QAction*\0showNextChat\0"
    "statusSelected\0changeStatusDescription\0"
    "sendFileFromChat\0sendFilesFromChat\0"
    "sendFile\0downloadFolder\0QList<FileInfo>\0"
    "downloadFile\0FileInfo\0downloadSharedFile\0"
    "downloadSharedFiles\0QList<SharedFileInfo>\0"
    "selectDownloadDirectory\0changeVCard\0"
    "showVCard\0changeUserColor\0showPluginHelp\0"
    "showPluginManager\0showChat\0showWizard\0"
    "trayIconClicked\0QSystemTrayIcon::ActivationReason\0"
    "trayMessageClicked\0addToShare\0"
    "removeFromShare\0openUrl\0openUrlFromChat\0"
    "selectBeepFile\0testBeepFile\0playBeep\0"
    "playBuzz\0editGroupChat\0createGroupChat\0"
    "showSavedChatSelected\0removeSavedChat\0"
    "linkSavedChat\0checkNewVersion\0openWebSite\0"
    "openDownloadPluginPage\0openDonationPage\0"
    "openDeveloperWebSite\0openHelpPage\0"
    "clearChat\0clearSystemMessagesInChat\0"
    "removeChat\0showSharesForUser\0"
    "selectLanguage\0showLocalUserVCard\0"
    "showAddUser\0showChatSettingsMenu\0"
    "sendBroadcastMessage\0enableBroadcastAction\0"
    "checkUserSelected\0showConnectionStatusChanged\0"
    "changeAvatarSizeInList\0toggleUserFavorite\0"
    "removeUserFromList\0openDataFolder\0"
    "openResourceFolder\0openDownloadFolder\0"
    "readAllMessagesInChat\0"
    "recentlyUsedUserStatusSelected\0"
    "clearRecentlyUsedUserStatus\0"
    "loadSavedChatsCompleted\0editShortcuts\0"
    "minimizeAllChats\0showAllChats\0"
    "sendHelpMessage\0sendHelpMessageToUser\0"
    "selectDictionatyPath\0onNetworkInterfaceDown\0"
    "onNetworkInterfaceUp\0onChatReadByUser\0"
    "askSaveGeometryAndState\0"
    "askResetGeometryAndState\0"
    "onChangeSettingOnExistingFile\0"
    "onShareDesktopImageAvailable\0QRgb\0"
    "onShareDesktopCloseEvent\0"
    "onShareDesktopDeleteRequest\0"
    "onShareDesktopRequestFromChat\0"
    "onShareDesktopUpdate\0sendScreenshotToChat\0"
    "startExternalApplicationFromActionData\0"
    "onFileTransferProgress\0FileSizeType\0"
    "onFileTransferMessage\0"
    "FileTransferPeer::TransferState\0"
    "sendBuzzToUser\0showBuzzFromUser\0"
    "showHelpRequestFromUser\0showHelpAnswerFromUser\0"
    "removeFloatingChatFromList\0"
    "showFileSharingWindow\0onFileSharingWindowClosed\0"
    "showScreenShotWindow\0onScreenShotWindowClosed\0"
    "showLogWindow\0onLogWindowClosed\0"
    "onMainTabChanged\0showWorkgroups\0"
    "showRefusedChats\0updateLocalStatusMessage\0"
    "onStatusBarMessageChanged\0"
    "selectIconSourcePath\0selectEmoticonSourcePath\0"
    "onNewsAvailable\0showDefaultServerPortInMenu\0"
    "createMessage\0updateChatFont\0"
    "updateChatColors\0resetAllColors\0"
    "onHideEmptyChatsRequest\0updateUser\0"
    "onApplicationFocusChanged\0QWidget*\0"
    "showNetworkTest\0onNetworkTestWindowClosed\0"
    "sendVoiceMessageToChat\0showVoiceEncoderSettings\0"
    "resumeFileTransfer\0user_id\0"
    "changeEmoticonSizeInChat\0selectFirstChat\0"
    "removeUnsentMessageInChat\0chat_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     154,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  784,    2, 0x0a /* Public */,
       3,    0,  785,    2, 0x0a /* Public */,
       4,    0,  786,    2, 0x0a /* Public */,
       5,    0,  787,    2, 0x0a /* Public */,
       6,    0,  788,    2, 0x0a /* Public */,
       7,    0,  789,    2, 0x0a /* Public */,
       8,    0,  790,    2, 0x0a /* Public */,
       9,    0,  791,    2, 0x0a /* Public */,
      10,    0,  792,    2, 0x0a /* Public */,
      11,    2,  793,    2, 0x0a /* Public */,
      12,    0,  798,    2, 0x0a /* Public */,
      13,    0,  799,    2, 0x0a /* Public */,
      14,    1,  800,    2, 0x0a /* Public */,
      15,    1,  803,    2, 0x0a /* Public */,
      17,    0,  806,    2, 0x0a /* Public */,
      18,    0,  807,    2, 0x0a /* Public */,
      19,    0,  808,    2, 0x0a /* Public */,
      20,    0,  809,    2, 0x0a /* Public */,
      21,    0,  810,    2, 0x08 /* Private */,
      22,    0,  811,    2, 0x08 /* Private */,
      23,    0,  812,    2, 0x08 /* Private */,
      24,    0,  813,    2, 0x08 /* Private */,
      25,    0,  814,    2, 0x08 /* Private */,
      26,    1,  815,    2, 0x08 /* Private */,
      28,    2,  818,    2, 0x08 /* Private */,
      30,    1,  823,    2, 0x08 /* Private */,
      31,    2,  826,    2, 0x08 /* Private */,
      34,    1,  831,    2, 0x08 /* Private */,
      35,    1,  834,    2, 0x08 /* Private */,
      36,    3,  837,    2, 0x08 /* Private */,
      37,    0,  844,    2, 0x08 /* Private */,
      38,    0,  845,    2, 0x08 /* Private */,
      39,    0,  846,    2, 0x08 /* Private */,
      40,    0,  847,    2, 0x08 /* Private */,
      41,    0,  848,    2, 0x08 /* Private */,
      41,    1,  849,    2, 0x08 /* Private */,
      43,    0,  852,    2, 0x08 /* Private */,
      44,    0,  853,    2, 0x08 /* Private */,
      45,    0,  854,    2, 0x08 /* Private */,
      46,    2,  855,    2, 0x08 /* Private */,
      47,    2,  860,    2, 0x08 /* Private */,
      48,    1,  865,    2, 0x08 /* Private */,
      48,    1,  868,    2, 0x08 /* Private */,
      49,    3,  871,    2, 0x08 /* Private */,
      51,    2,  878,    2, 0x08 /* Private */,
      53,    2,  883,    2, 0x08 /* Private */,
      54,    1,  888,    2, 0x08 /* Private */,
      56,    0,  891,    2, 0x08 /* Private */,
      57,    0,  892,    2, 0x08 /* Private */,
      58,    1,  893,    2, 0x08 /* Private */,
      59,    2,  896,    2, 0x08 /* Private */,
      60,    0,  901,    2, 0x08 /* Private */,
      61,    0,  902,    2, 0x08 /* Private */,
      62,    1,  903,    2, 0x08 /* Private */,
      63,    0,  906,    2, 0x08 /* Private */,
      64,    1,  907,    2, 0x08 /* Private */,
      66,    0,  910,    2, 0x08 /* Private */,
      67,    1,  911,    2, 0x08 /* Private */,
      68,    1,  914,    2, 0x08 /* Private */,
      69,    1,  917,    2, 0x08 /* Private */,
      70,    2,  920,    2, 0x08 /* Private */,
      71,    0,  925,    2, 0x08 /* Private */,
      72,    0,  926,    2, 0x08 /* Private */,
      73,    0,  927,    2, 0x08 /* Private */,
      74,    0,  928,    2, 0x08 /* Private */,
      75,    1,  929,    2, 0x08 /* Private */,
      76,    0,  932,    2, 0x08 /* Private */,
      77,    1,  933,    2, 0x08 /* Private */,
      78,    1,  936,    2, 0x08 /* Private */,
      79,    1,  939,    2, 0x08 /* Private */,
      80,    0,  942,    2, 0x08 /* Private */,
      81,    0,  943,    2, 0x08 /* Private */,
      82,    0,  944,    2, 0x08 /* Private */,
      83,    0,  945,    2, 0x08 /* Private */,
      84,    0,  946,    2, 0x08 /* Private */,
      85,    0,  947,    2, 0x08 /* Private */,
      86,    1,  948,    2, 0x08 /* Private */,
      87,    1,  951,    2, 0x08 /* Private */,
      88,    1,  954,    2, 0x08 /* Private */,
      89,    1,  957,    2, 0x08 /* Private */,
      90,    0,  960,    2, 0x08 /* Private */,
      91,    0,  961,    2, 0x08 /* Private */,
      92,    0,  962,    2, 0x08 /* Private */,
      93,    0,  963,    2, 0x08 /* Private */,
      94,    0,  964,    2, 0x08 /* Private */,
      95,    0,  965,    2, 0x08 /* Private */,
      96,    1,  966,    2, 0x08 /* Private */,
      97,    1,  969,    2, 0x08 /* Private */,
      98,    0,  972,    2, 0x08 /* Private */,
      99,    1,  973,    2, 0x08 /* Private */,
     100,    1,  976,    2, 0x08 /* Private */,
     101,    0,  979,    2, 0x08 /* Private */,
     102,    0,  980,    2, 0x08 /* Private */,
     103,    0,  981,    2, 0x08 /* Private */,
     104,    1,  982,    2, 0x08 /* Private */,
     105,    0,  985,    2, 0x08 /* Private */,
     106,    0,  986,    2, 0x08 /* Private */,
     107,    0,  987,    2, 0x08 /* Private */,
     108,    0,  988,    2, 0x08 /* Private */,
     109,    0,  989,    2, 0x08 /* Private */,
     110,    0,  990,    2, 0x08 /* Private */,
     111,    0,  991,    2, 0x08 /* Private */,
     112,    1,  992,    2, 0x08 /* Private */,
     113,    0,  995,    2, 0x08 /* Private */,
     114,    0,  996,    2, 0x08 /* Private */,
     115,    0,  997,    2, 0x08 /* Private */,
     116,    2,  998,    2, 0x08 /* Private */,
     117,    0, 1003,    2, 0x08 /* Private */,
     118,    0, 1004,    2, 0x08 /* Private */,
     119,    1, 1005,    2, 0x08 /* Private */,
     120,    4, 1008,    2, 0x08 /* Private */,
     122,    1, 1017,    2, 0x08 /* Private */,
     123,    1, 1020,    2, 0x08 /* Private */,
     124,    2, 1023,    2, 0x08 /* Private */,
     125,    1, 1028,    2, 0x08 /* Private */,
     126,    1, 1031,    2, 0x08 /* Private */,
     127,    0, 1034,    2, 0x08 /* Private */,
     128,    5, 1035,    2, 0x08 /* Private */,
     130,    5, 1046,    2, 0x08 /* Private */,
     132,    1, 1057,    2, 0x08 /* Private */,
     133,    2, 1060,    2, 0x08 /* Private */,
     134,    2, 1065,    2, 0x08 /* Private */,
     135,    2, 1070,    2, 0x08 /* Private */,
     136,    1, 1075,    2, 0x08 /* Private */,
     137,    0, 1078,    2, 0x08 /* Private */,
     138,    0, 1079,    2, 0x08 /* Private */,
     139,    0, 1080,    2, 0x08 /* Private */,
     140,    0, 1081,    2, 0x08 /* Private */,
     141,    0, 1082,    2, 0x08 /* Private */,
     142,    0, 1083,    2, 0x08 /* Private */,
     143,    1, 1084,    2, 0x08 /* Private */,
     144,    0, 1087,    2, 0x08 /* Private */,
     145,    0, 1088,    2, 0x08 /* Private */,
     146,    0, 1089,    2, 0x08 /* Private */,
     147,    1, 1090,    2, 0x08 /* Private */,
     148,    0, 1093,    2, 0x08 /* Private */,
     149,    0, 1094,    2, 0x08 /* Private */,
     150,    1, 1095,    2, 0x08 /* Private */,
     151,    0, 1098,    2, 0x08 /* Private */,
     152,    0, 1099,    2, 0x08 /* Private */,
     153,    0, 1100,    2, 0x08 /* Private */,
     154,    0, 1101,    2, 0x08 /* Private */,
     155,    0, 1102,    2, 0x08 /* Private */,
     156,    0, 1103,    2, 0x08 /* Private */,
     157,    1, 1104,    2, 0x08 /* Private */,
     158,    2, 1107,    2, 0x08 /* Private */,
     160,    0, 1112,    2, 0x08 /* Private */,
     161,    0, 1113,    2, 0x08 /* Private */,
     162,    3, 1114,    2, 0x08 /* Private */,
     163,    0, 1121,    2, 0x08 /* Private */,
     164,    2, 1122,    2, 0x08 /* Private */,
     166,    0, 1127,    2, 0x08 /* Private */,
     167,    0, 1128,    2, 0x08 /* Private */,
     168,    1, 1129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 29,    2,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 33,    2,    2,
    QMetaType::Void, 0x80000000 | 32,    2,
    QMetaType::Void, 0x80000000 | 32,    2,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QStringList,    2,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, 0x80000000 | 50,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 52,    2,    2,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,    2,    2,
    QMetaType::Void, 0x80000000 | 55,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 65,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 29,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 27,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,    2,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QImage, QMetaType::QString, 0x80000000 | 121,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 27, 0x80000000 | 52, 0x80000000 | 129, QMetaType::LongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 27, 0x80000000 | 52, QMetaType::QString, 0x80000000 | 131,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 29,    2,    2,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 29,    2,    2,
    QMetaType::Void, 0x80000000 | 27, 0x80000000 | 29,    2,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, 0x80000000 | 159, 0x80000000 | 159,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, QMetaType::QString, QMetaType::LongLong,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 52,  165,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,  169,

       0        // eod
};

void GuiMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadSession(); break;
        case 1: _t->checkWindowFlagsAndShow(); break;
        case 2: _t->startCore(); break;
        case 3: _t->stopCore(); break;
        case 4: _t->restartCore(); break;
        case 5: _t->forceShutdown(); break;
        case 6: _t->hideToTrayIcon(); break;
        case 7: _t->setInIdle(); break;
        case 8: _t->exitFromIdle(); break;
        case 9: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->showUp(); break;
        case 11: _t->raiseOnTop(); break;
        case 12: _t->onTickEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->saveSession((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 14: _t->onWakeUpRequest(); break;
        case 15: _t->onSleepRequest(); break;
        case 16: _t->disconnectFromNetwork(); break;
        case 17: _t->loadStyle(); break;
        case 18: _t->onCoreConnected(); break;
        case 19: _t->onCoreDisconnected(); break;
        case 20: _t->showAbout(); break;
        case 21: _t->showLicense(); break;
        case 22: _t->showAboutQt(); break;
        case 23: _t->onUserChanged((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 24: _t->showWritingUser((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 25: _t->onUserRemoved((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 26: _t->onNewChatMessage((*reinterpret_cast< const Chat(*)>(_a[1])),(*reinterpret_cast< const ChatMessage(*)>(_a[2]))); break;
        case 27: _t->onChatChanged((*reinterpret_cast< const Chat(*)>(_a[1]))); break;
        case 28: _t->onChatRemoved((*reinterpret_cast< const Chat(*)>(_a[1]))); break;
        case 29: _t->sendMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->showTipOfTheDay(); break;
        case 31: _t->showFaq(); break;
        case 32: _t->showFactOfTheDay(); break;
        case 33: _t->searchUsers(); break;
        case 34: _t->settingsChanged(); break;
        case 35: _t->settingsChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 36: _t->showNextChat(); break;
        case 37: _t->statusSelected(); break;
        case 38: _t->changeStatusDescription(); break;
        case 39: _t->sendFileFromChat((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 40: _t->sendFilesFromChat((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 41: _t->sendFile((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 42: _t->sendFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: _t->downloadFolder((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<FileInfo>(*)>(_a[3]))); break;
        case 44: _t->downloadFile((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const FileInfo(*)>(_a[2]))); break;
        case 45: _t->downloadSharedFile((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 46: _t->downloadSharedFiles((*reinterpret_cast< const QList<SharedFileInfo>(*)>(_a[1]))); break;
        case 47: _t->selectDownloadDirectory(); break;
        case 48: _t->changeVCard(); break;
        case 49: _t->showVCard((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 50: _t->changeUserColor((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 51: _t->showPluginHelp(); break;
        case 52: _t->showPluginManager(); break;
        case 53: _t->showChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 54: { bool _r = _t->showWizard();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->trayIconClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 56: _t->trayMessageClicked(); break;
        case 57: _t->addToShare((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->removeFromShare((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 59: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 60: _t->openUrlFromChat((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 61: _t->selectBeepFile(); break;
        case 62: _t->testBeepFile(); break;
        case 63: _t->playBeep(); break;
        case 64: _t->playBuzz(); break;
        case 65: _t->editGroupChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 66: _t->createGroupChat(); break;
        case 67: _t->showSavedChatSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 68: _t->removeSavedChat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 69: _t->linkSavedChat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 70: _t->checkNewVersion(); break;
        case 71: _t->openWebSite(); break;
        case 72: _t->openDownloadPluginPage(); break;
        case 73: _t->openDonationPage(); break;
        case 74: _t->openDeveloperWebSite(); break;
        case 75: _t->openHelpPage(); break;
        case 76: _t->clearChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 77: _t->clearSystemMessagesInChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 78: _t->removeChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 79: _t->showSharesForUser((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 80: _t->selectLanguage(); break;
        case 81: _t->showLocalUserVCard(); break;
        case 82: _t->showAddUser(); break;
        case 83: _t->showChatSettingsMenu(); break;
        case 84: _t->sendBroadcastMessage(); break;
        case 85: _t->enableBroadcastAction(); break;
        case 86: _t->checkUserSelected((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 87: _t->showConnectionStatusChanged((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 88: _t->changeAvatarSizeInList(); break;
        case 89: _t->toggleUserFavorite((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 90: _t->removeUserFromList((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 91: _t->openDataFolder(); break;
        case 92: _t->openResourceFolder(); break;
        case 93: _t->openDownloadFolder(); break;
        case 94: _t->readAllMessagesInChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 95: _t->recentlyUsedUserStatusSelected(); break;
        case 96: _t->clearRecentlyUsedUserStatus(); break;
        case 97: _t->loadSavedChatsCompleted(); break;
        case 98: _t->editShortcuts(); break;
        case 99: _t->minimizeAllChats(); break;
        case 100: _t->showAllChats(); break;
        case 101: _t->sendHelpMessage(); break;
        case 102: _t->sendHelpMessageToUser((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 103: _t->selectDictionatyPath(); break;
        case 104: _t->onNetworkInterfaceDown(); break;
        case 105: _t->onNetworkInterfaceUp(); break;
        case 106: _t->onChatReadByUser((*reinterpret_cast< const Chat(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 107: _t->askSaveGeometryAndState(); break;
        case 108: _t->askResetGeometryAndState(); break;
        case 109: _t->onChangeSettingOnExistingFile((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 110: _t->onShareDesktopImageAvailable((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QRgb(*)>(_a[4]))); break;
        case 111: _t->onShareDesktopCloseEvent((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 112: _t->onShareDesktopDeleteRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 113: _t->onShareDesktopRequestFromChat((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 114: _t->onShareDesktopUpdate((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 115: _t->sendScreenshotToChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 116: _t->startExternalApplicationFromActionData(); break;
        case 117: _t->onFileTransferProgress((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< FileSizeType(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5]))); break;
        case 118: _t->onFileTransferMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< FileTransferPeer::TransferState(*)>(_a[5]))); break;
        case 119: _t->sendBuzzToUser((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 120: _t->showBuzzFromUser((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 121: _t->showHelpRequestFromUser((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 122: _t->showHelpAnswerFromUser((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 123: _t->removeFloatingChatFromList((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 124: _t->showFileSharingWindow(); break;
        case 125: _t->onFileSharingWindowClosed(); break;
        case 126: _t->showScreenShotWindow(); break;
        case 127: _t->onScreenShotWindowClosed(); break;
        case 128: _t->showLogWindow(); break;
        case 129: _t->onLogWindowClosed(); break;
        case 130: _t->onMainTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 131: _t->showWorkgroups(); break;
        case 132: _t->showRefusedChats(); break;
        case 133: _t->updateLocalStatusMessage(); break;
        case 134: _t->onStatusBarMessageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 135: _t->selectIconSourcePath(); break;
        case 136: _t->selectEmoticonSourcePath(); break;
        case 137: _t->onNewsAvailable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 138: _t->showDefaultServerPortInMenu(); break;
        case 139: _t->createMessage(); break;
        case 140: _t->updateChatFont(); break;
        case 141: _t->updateChatColors(); break;
        case 142: _t->resetAllColors(); break;
        case 143: _t->onHideEmptyChatsRequest(); break;
        case 144: _t->updateUser((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 145: _t->onApplicationFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 146: _t->showNetworkTest(); break;
        case 147: _t->onNetworkTestWindowClosed(); break;
        case 148: _t->sendVoiceMessageToChat((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 149: _t->showVoiceEncoderSettings(); break;
        case 150: _t->resumeFileTransfer((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const FileInfo(*)>(_a[2]))); break;
        case 151: _t->changeEmoticonSizeInChat(); break;
        case 152: _t->selectFirstChat(); break;
        case 153: _t->removeUnsentMessageInChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 145:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_GuiMain.data,
    qt_meta_data_GuiMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GuiMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 154)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 154;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 154)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 154;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
