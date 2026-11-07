/****************************************************************************
** Meta object code from reading C++ file 'Core.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/core/Core.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Core_t {
    QByteArrayData data[85];
    char stringdata0[1549];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Core_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Core_t qt_meta_stringdata_Core = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Core"
QT_MOC_LITERAL(1, 5, 9), // "connected"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "disconnected"
QT_MOC_LITERAL(4, 29, 11), // "userChanged"
QT_MOC_LITERAL(5, 41, 4), // "User"
QT_MOC_LITERAL(6, 46, 13), // "userIsWriting"
QT_MOC_LITERAL(7, 60, 7), // "VNumber"
QT_MOC_LITERAL(8, 68, 11), // "userRemoved"
QT_MOC_LITERAL(9, 80, 11), // "chatChanged"
QT_MOC_LITERAL(10, 92, 4), // "Chat"
QT_MOC_LITERAL(11, 97, 11), // "chatRemoved"
QT_MOC_LITERAL(12, 109, 14), // "newChatMessage"
QT_MOC_LITERAL(13, 124, 11), // "ChatMessage"
QT_MOC_LITERAL(14, 136, 14), // "chatReadByUser"
QT_MOC_LITERAL(15, 151, 24), // "offlineMessageSentToUser"
QT_MOC_LITERAL(16, 176, 19), // "fileDownloadRequest"
QT_MOC_LITERAL(17, 196, 8), // "FileInfo"
QT_MOC_LITERAL(18, 205, 21), // "folderDownloadRequest"
QT_MOC_LITERAL(19, 227, 15), // "QList<FileInfo>"
QT_MOC_LITERAL(20, 243, 20), // "fileTransferProgress"
QT_MOC_LITERAL(21, 264, 12), // "FileSizeType"
QT_MOC_LITERAL(22, 277, 19), // "fileTransferMessage"
QT_MOC_LITERAL(23, 297, 31), // "FileTransferPeer::TransferState"
QT_MOC_LITERAL(24, 329, 18), // "fileShareAvailable"
QT_MOC_LITERAL(25, 348, 23), // "localShareListAvailable"
QT_MOC_LITERAL(26, 372, 22), // "savedChatListAvailable"
QT_MOC_LITERAL(27, 395, 27), // "userConnectionStatusChanged"
QT_MOC_LITERAL(28, 423, 22), // "networkInterfaceIsDown"
QT_MOC_LITERAL(29, 446, 20), // "networkInterfaceIsUp"
QT_MOC_LITERAL(30, 467, 17), // "shareBoxAvailable"
QT_MOC_LITERAL(31, 485, 19), // "shareBoxUnavailable"
QT_MOC_LITERAL(32, 505, 19), // "localUserIsBuzzedBy"
QT_MOC_LITERAL(33, 525, 15), // "helpRequestFrom"
QT_MOC_LITERAL(34, 541, 14), // "helpAnswerFrom"
QT_MOC_LITERAL(35, 556, 22), // "newSystemStatusMessage"
QT_MOC_LITERAL(36, 579, 13), // "newsAvailable"
QT_MOC_LITERAL(37, 593, 26), // "shareDesktopImageAvailable"
QT_MOC_LITERAL(38, 620, 4), // "QRgb"
QT_MOC_LITERAL(39, 625, 18), // "shareDesktopUpdate"
QT_MOC_LITERAL(40, 644, 20), // "sendBroadcastMessage"
QT_MOC_LITERAL(41, 665, 21), // "checkNetworkInterface"
QT_MOC_LITERAL(42, 687, 15), // "checkNewVersion"
QT_MOC_LITERAL(43, 703, 19), // "postUsageStatistics"
QT_MOC_LITERAL(44, 723, 11), // "onTickEvent"
QT_MOC_LITERAL(45, 735, 20), // "checkConnectionPorts"
QT_MOC_LITERAL(46, 756, 13), // "checkFirewall"
QT_MOC_LITERAL(47, 770, 26), // "updateNetworkConfiguration"
QT_MOC_LITERAL(48, 797, 18), // "sendWritingMessage"
QT_MOC_LITERAL(49, 816, 18), // "buildSavedChatList"
QT_MOC_LITERAL(50, 835, 19), // "buildLocalShareList"
QT_MOC_LITERAL(51, 855, 25), // "sendFileShareRequestToAll"
QT_MOC_LITERAL(52, 881, 18), // "cancelFileTransfer"
QT_MOC_LITERAL(53, 900, 17), // "pauseFileTransfer"
QT_MOC_LITERAL(54, 918, 23), // "removeAllPathsFromShare"
QT_MOC_LITERAL(55, 942, 20), // "sendScreenshotToChat"
QT_MOC_LITERAL(56, 963, 7), // "chat_id"
QT_MOC_LITERAL(57, 971, 17), // "restartConnection"
QT_MOC_LITERAL(58, 989, 21), // "onUpdaterJobCompleted"
QT_MOC_LITERAL(59, 1011, 33), // "onPostUsageStatisticsJobCompl..."
QT_MOC_LITERAL(60, 1045, 18), // "saveUsersAndGroups"
QT_MOC_LITERAL(61, 1064, 18), // "checkNewConnection"
QT_MOC_LITERAL(62, 1083, 7), // "qintptr"
QT_MOC_LITERAL(63, 1091, 12), // "newPeerFound"
QT_MOC_LITERAL(64, 1104, 12), // "QHostAddress"
QT_MOC_LITERAL(65, 1117, 18), // "setConnectionError"
QT_MOC_LITERAL(66, 1136, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(67, 1165, 19), // "setConnectionClosed"
QT_MOC_LITERAL(68, 1185, 23), // "checkUserAuthentication"
QT_MOC_LITERAL(69, 1209, 19), // "checkNetworkAddress"
QT_MOC_LITERAL(70, 1229, 14), // "NetworkAddress"
QT_MOC_LITERAL(71, 1244, 24), // "showNewGenerationMessage"
QT_MOC_LITERAL(72, 1269, 12), // "parseMessage"
QT_MOC_LITERAL(73, 1282, 7), // "Message"
QT_MOC_LITERAL(74, 1290, 25), // "checkFileTransferProgress"
QT_MOC_LITERAL(75, 1316, 24), // "checkFileTransferMessage"
QT_MOC_LITERAL(76, 1341, 29), // "onFileTransferServerListening"
QT_MOC_LITERAL(77, 1371, 19), // "addListToLocalShare"
QT_MOC_LITERAL(78, 1391, 23), // "addFolderToFileTransfer"
QT_MOC_LITERAL(79, 1415, 16), // "sendShareBoxList"
QT_MOC_LITERAL(80, 1432, 28), // "onShareDesktopImageAvailable"
QT_MOC_LITERAL(81, 1461, 16), // "ShareDesktopData"
QT_MOC_LITERAL(82, 1478, 19), // "addListToSavedChats"
QT_MOC_LITERAL(83, 1498, 20), // "autoSaveChatMessages"
QT_MOC_LITERAL(84, 1519, 29) // "autoSaveChatMessagesCompleted"

    },
    "Core\0connected\0\0disconnected\0userChanged\0"
    "User\0userIsWriting\0VNumber\0userRemoved\0"
    "chatChanged\0Chat\0chatRemoved\0"
    "newChatMessage\0ChatMessage\0chatReadByUser\0"
    "offlineMessageSentToUser\0fileDownloadRequest\0"
    "FileInfo\0folderDownloadRequest\0"
    "QList<FileInfo>\0fileTransferProgress\0"
    "FileSizeType\0fileTransferMessage\0"
    "FileTransferPeer::TransferState\0"
    "fileShareAvailable\0localShareListAvailable\0"
    "savedChatListAvailable\0"
    "userConnectionStatusChanged\0"
    "networkInterfaceIsDown\0networkInterfaceIsUp\0"
    "shareBoxAvailable\0shareBoxUnavailable\0"
    "localUserIsBuzzedBy\0helpRequestFrom\0"
    "helpAnswerFrom\0newSystemStatusMessage\0"
    "newsAvailable\0shareDesktopImageAvailable\0"
    "QRgb\0shareDesktopUpdate\0sendBroadcastMessage\0"
    "checkNetworkInterface\0checkNewVersion\0"
    "postUsageStatistics\0onTickEvent\0"
    "checkConnectionPorts\0checkFirewall\0"
    "updateNetworkConfiguration\0"
    "sendWritingMessage\0buildSavedChatList\0"
    "buildLocalShareList\0sendFileShareRequestToAll\0"
    "cancelFileTransfer\0pauseFileTransfer\0"
    "removeAllPathsFromShare\0sendScreenshotToChat\0"
    "chat_id\0restartConnection\0"
    "onUpdaterJobCompleted\0"
    "onPostUsageStatisticsJobCompleted\0"
    "saveUsersAndGroups\0checkNewConnection\0"
    "qintptr\0newPeerFound\0QHostAddress\0"
    "setConnectionError\0QAbstractSocket::SocketError\0"
    "setConnectionClosed\0checkUserAuthentication\0"
    "checkNetworkAddress\0NetworkAddress\0"
    "showNewGenerationMessage\0parseMessage\0"
    "Message\0checkFileTransferProgress\0"
    "checkFileTransferMessage\0"
    "onFileTransferServerListening\0"
    "addListToLocalShare\0addFolderToFileTransfer\0"
    "sendShareBoxList\0onShareDesktopImageAvailable\0"
    "ShareDesktopData\0addListToSavedChats\0"
    "autoSaveChatMessages\0autoSaveChatMessagesCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Core[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      68,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  354,    2, 0x06 /* Public */,
       3,    0,  355,    2, 0x06 /* Public */,
       4,    1,  356,    2, 0x06 /* Public */,
       6,    2,  359,    2, 0x06 /* Public */,
       8,    1,  364,    2, 0x06 /* Public */,
       9,    1,  367,    2, 0x06 /* Public */,
      11,    1,  370,    2, 0x06 /* Public */,
      12,    2,  373,    2, 0x06 /* Public */,
      14,    2,  378,    2, 0x06 /* Public */,
      15,    1,  383,    2, 0x06 /* Public */,
      16,    2,  386,    2, 0x06 /* Public */,
      18,    3,  391,    2, 0x06 /* Public */,
      20,    5,  398,    2, 0x06 /* Public */,
      22,    5,  409,    2, 0x06 /* Public */,
      24,    1,  420,    2, 0x06 /* Public */,
      25,    0,  423,    2, 0x06 /* Public */,
      26,    0,  424,    2, 0x06 /* Public */,
      27,    1,  425,    2, 0x06 /* Public */,
      28,    0,  428,    2, 0x06 /* Public */,
      29,    0,  429,    2, 0x06 /* Public */,
      30,    3,  430,    2, 0x06 /* Public */,
      31,    2,  437,    2, 0x06 /* Public */,
      32,    2,  442,    2, 0x06 /* Public */,
      33,    2,  447,    2, 0x06 /* Public */,
      34,    2,  452,    2, 0x06 /* Public */,
      35,    2,  457,    2, 0x06 /* Public */,
      36,    1,  462,    2, 0x06 /* Public */,
      37,    4,  465,    2, 0x06 /* Public */,
      39,    1,  474,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      40,    0,  477,    2, 0x0a /* Public */,
      41,    0,  478,    2, 0x0a /* Public */,
      42,    0,  479,    2, 0x0a /* Public */,
      43,    0,  480,    2, 0x0a /* Public */,
      44,    1,  481,    2, 0x0a /* Public */,
      45,    0,  484,    2, 0x0a /* Public */,
      46,    0,  485,    2, 0x0a /* Public */,
      47,    0,  486,    2, 0x0a /* Public */,
      48,    1,  487,    2, 0x0a /* Public */,
      49,    0,  490,    2, 0x0a /* Public */,
      50,    0,  491,    2, 0x0a /* Public */,
      51,    0,  492,    2, 0x0a /* Public */,
      52,    1,  493,    2, 0x0a /* Public */,
      53,    1,  496,    2, 0x0a /* Public */,
      54,    0,  499,    2, 0x0a /* Public */,
      55,    1,  500,    2, 0x0a /* Public */,
      57,    0,  503,    2, 0x09 /* Protected */,
      58,    0,  504,    2, 0x09 /* Protected */,
      59,    0,  505,    2, 0x09 /* Protected */,
      60,    0,  506,    2, 0x09 /* Protected */,
      61,    1,  507,    2, 0x09 /* Protected */,
      63,    2,  510,    2, 0x09 /* Protected */,
      65,    1,  515,    2, 0x09 /* Protected */,
      67,    0,  518,    2, 0x09 /* Protected */,
      68,    1,  519,    2, 0x09 /* Protected */,
      69,    1,  522,    2, 0x09 /* Protected */,
      71,    0,  525,    2, 0x09 /* Protected */,
      72,    2,  526,    2, 0x09 /* Protected */,
      72,    2,  531,    2, 0x09 /* Protected */,
      74,    5,  536,    2, 0x09 /* Protected */,
      75,    5,  547,    2, 0x09 /* Protected */,
      76,    0,  558,    2, 0x09 /* Protected */,
      77,    0,  559,    2, 0x09 /* Protected */,
      78,    0,  560,    2, 0x09 /* Protected */,
      79,    0,  561,    2, 0x09 /* Protected */,
      80,    1,  562,    2, 0x09 /* Protected */,
      82,    0,  565,    2, 0x09 /* Protected */,
      83,    0,  566,    2, 0x09 /* Protected */,
      84,    0,  567,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 13,    2,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 17,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, 0x80000000 | 19,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5, 0x80000000 | 17, 0x80000000 | 21, QMetaType::LongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5, 0x80000000 | 17, QMetaType::QString, 0x80000000 | 23,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, 0x80000000 | 19,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QImage, QMetaType::QString, 0x80000000 | 38,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 7,   56,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,    2,
    QMetaType::Void, 0x80000000 | 64, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 66,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 70,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 73,    2,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 73,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 17, 0x80000000 | 21, QMetaType::LongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 17, QMetaType::QString, 0x80000000 | 23,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 81,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Core *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->userChanged((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 3: _t->userIsWriting((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 4: _t->userRemoved((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 5: _t->chatChanged((*reinterpret_cast< const Chat(*)>(_a[1]))); break;
        case 6: _t->chatRemoved((*reinterpret_cast< const Chat(*)>(_a[1]))); break;
        case 7: _t->newChatMessage((*reinterpret_cast< const Chat(*)>(_a[1])),(*reinterpret_cast< const ChatMessage(*)>(_a[2]))); break;
        case 8: _t->chatReadByUser((*reinterpret_cast< const Chat(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2]))); break;
        case 9: _t->offlineMessageSentToUser((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 10: _t->fileDownloadRequest((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const FileInfo(*)>(_a[2]))); break;
        case 11: _t->folderDownloadRequest((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<FileInfo>(*)>(_a[3]))); break;
        case 12: _t->fileTransferProgress((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< FileSizeType(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5]))); break;
        case 13: _t->fileTransferMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const User(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< FileTransferPeer::TransferState(*)>(_a[5]))); break;
        case 14: _t->fileShareAvailable((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 15: _t->localShareListAvailable(); break;
        case 16: _t->savedChatListAvailable(); break;
        case 17: _t->userConnectionStatusChanged((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 18: _t->networkInterfaceIsDown(); break;
        case 19: _t->networkInterfaceIsUp(); break;
        case 20: _t->shareBoxAvailable((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<FileInfo>(*)>(_a[3]))); break;
        case 21: _t->shareBoxUnavailable((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->localUserIsBuzzedBy((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 23: _t->helpRequestFrom((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 24: _t->helpAnswerFrom((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 25: _t->newSystemStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->newsAvailable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->shareDesktopImageAvailable((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QRgb(*)>(_a[4]))); break;
        case 28: _t->shareDesktopUpdate((*reinterpret_cast< const User(*)>(_a[1]))); break;
        case 29: _t->sendBroadcastMessage(); break;
        case 30: _t->checkNetworkInterface(); break;
        case 31: _t->checkNewVersion(); break;
        case 32: _t->postUsageStatistics(); break;
        case 33: _t->onTickEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->checkConnectionPorts(); break;
        case 35: _t->checkFirewall(); break;
        case 36: _t->updateNetworkConfiguration(); break;
        case 37: _t->sendWritingMessage((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 38: _t->buildSavedChatList(); break;
        case 39: _t->buildLocalShareList(); break;
        case 40: _t->sendFileShareRequestToAll(); break;
        case 41: _t->cancelFileTransfer((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 42: _t->pauseFileTransfer((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 43: _t->removeAllPathsFromShare(); break;
        case 44: { bool _r = _t->sendScreenshotToChat((*reinterpret_cast< VNumber(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->restartConnection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->onUpdaterJobCompleted(); break;
        case 47: _t->onPostUsageStatisticsJobCompleted(); break;
        case 48: _t->saveUsersAndGroups(); break;
        case 49: _t->checkNewConnection((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 50: _t->newPeerFound((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 51: _t->setConnectionError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 52: _t->setConnectionClosed(); break;
        case 53: _t->checkUserAuthentication((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 54: _t->checkNetworkAddress((*reinterpret_cast< const NetworkAddress(*)>(_a[1]))); break;
        case 55: _t->showNewGenerationMessage(); break;
        case 56: _t->parseMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const Message(*)>(_a[2]))); break;
        case 57: _t->parseMessage((*reinterpret_cast< const User(*)>(_a[1])),(*reinterpret_cast< const Message(*)>(_a[2]))); break;
        case 58: _t->checkFileTransferProgress((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< FileSizeType(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5]))); break;
        case 59: _t->checkFileTransferMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2])),(*reinterpret_cast< const FileInfo(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< FileTransferPeer::TransferState(*)>(_a[5]))); break;
        case 60: _t->onFileTransferServerListening(); break;
        case 61: _t->addListToLocalShare(); break;
        case 62: _t->addFolderToFileTransfer(); break;
        case 63: _t->sendShareBoxList(); break;
        case 64: _t->onShareDesktopImageAvailable((*reinterpret_cast< const ShareDesktopData(*)>(_a[1]))); break;
        case 65: _t->addListToSavedChats(); break;
        case 66: _t->autoSaveChatMessages(); break;
        case 67: _t->autoSaveChatMessagesCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::userChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::userIsWriting)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::userRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Core::*)(const Chat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::chatChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Core::*)(const Chat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::chatRemoved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Core::*)(const Chat & , const ChatMessage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::newChatMessage)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Core::*)(const Chat & , const User & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::chatReadByUser)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::offlineMessageSentToUser)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , const FileInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::fileDownloadRequest)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , const QString & , const QList<FileInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::folderDownloadRequest)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Core::*)(VNumber , const User & , const FileInfo & , FileSizeType , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::fileTransferProgress)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Core::*)(VNumber , const User & , const FileInfo & , const QString & , FileTransferPeer::TransferState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::fileTransferMessage)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::fileShareAvailable)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::localShareListAvailable)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::savedChatListAvailable)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::userConnectionStatusChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::networkInterfaceIsDown)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Core::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::networkInterfaceIsUp)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , const QString & , const QList<FileInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::shareBoxAvailable)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::shareBoxUnavailable)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::localUserIsBuzzedBy)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::helpRequestFrom)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::helpAnswerFrom)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Core::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::newSystemStatusMessage)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Core::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::newsAvailable)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & , const QImage & , const QString & , QRgb );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::shareDesktopImageAvailable)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Core::*)(const User & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Core::shareDesktopUpdate)) {
                *result = 28;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Core::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Core.data,
    qt_meta_data_Core,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Core::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Core.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    }
    return _id;
}

// SIGNAL 0
void Core::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Core::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Core::userChanged(const User & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Core::userIsWriting(const User & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Core::userRemoved(const User & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Core::chatChanged(const Chat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Core::chatRemoved(const Chat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Core::newChatMessage(const Chat & _t1, const ChatMessage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Core::chatReadByUser(const Chat & _t1, const User & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Core::offlineMessageSentToUser(const User & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Core::fileDownloadRequest(const User & _t1, const FileInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Core::folderDownloadRequest(const User & _t1, const QString & _t2, const QList<FileInfo> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Core::fileTransferProgress(VNumber _t1, const User & _t2, const FileInfo & _t3, FileSizeType _t4, qint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Core::fileTransferMessage(VNumber _t1, const User & _t2, const FileInfo & _t3, const QString & _t4, FileTransferPeer::TransferState _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Core::fileShareAvailable(const User & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Core::localShareListAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Core::savedChatListAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Core::userConnectionStatusChanged(const User & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Core::networkInterfaceIsDown()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Core::networkInterfaceIsUp()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Core::shareBoxAvailable(const User & _t1, const QString & _t2, const QList<FileInfo> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Core::shareBoxUnavailable(const User & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Core::localUserIsBuzzedBy(const User & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Core::helpRequestFrom(const User & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void Core::helpAnswerFrom(const User & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void Core::newSystemStatusMessage(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void Core::newsAvailable(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void Core::shareDesktopImageAvailable(const User & _t1, const QImage & _t2, const QString & _t3, QRgb _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Core::shareDesktopUpdate(const User & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
