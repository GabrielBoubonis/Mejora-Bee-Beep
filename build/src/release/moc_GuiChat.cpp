/****************************************************************************
** Meta object code from reading C++ file 'GuiChat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../beebeep-code-r1612/src/desktop/GuiChat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiChat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiChat_t {
    QByteArrayData data[69];
    char stringdata0[1309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiChat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiChat_t qt_meta_stringdata_GuiChat = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GuiChat"
QT_MOC_LITERAL(1, 8, 10), // "newMessage"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "VNumber"
QT_MOC_LITERAL(4, 28, 14), // "is_source_code"
QT_MOC_LITERAL(5, 43, 20), // "newSourceCodeMessage"
QT_MOC_LITERAL(6, 64, 7), // "writing"
QT_MOC_LITERAL(7, 72, 8), // "nextChat"
QT_MOC_LITERAL(8, 81, 7), // "openUrl"
QT_MOC_LITERAL(9, 89, 23), // "sendFileFromChatRequest"
QT_MOC_LITERAL(10, 113, 24), // "sendFilesFromChatRequest"
QT_MOC_LITERAL(11, 138, 16), // "editGroupRequest"
QT_MOC_LITERAL(12, 155, 11), // "chatToClear"
QT_MOC_LITERAL(13, 167, 34), // "clearSystemMessagesRequestFro..."
QT_MOC_LITERAL(14, 202, 19), // "showChatMenuRequest"
QT_MOC_LITERAL(15, 222, 27), // "saveStateAndGeometryRequest"
QT_MOC_LITERAL(16, 250, 37), // "toggleVisibilityEmoticonsPane..."
QT_MOC_LITERAL(17, 288, 42), // "toggleVisibilityPresetMessage..."
QT_MOC_LITERAL(18, 331, 11), // "hideRequest"
QT_MOC_LITERAL(19, 343, 12), // "closeRequest"
QT_MOC_LITERAL(20, 356, 21), // "updateChatFontRequest"
QT_MOC_LITERAL(21, 378, 23), // "updateChatColorsRequest"
QT_MOC_LITERAL(22, 402, 24), // "showStatusMessageRequest"
QT_MOC_LITERAL(23, 427, 20), // "openSavedChatRequest"
QT_MOC_LITERAL(24, 448, 25), // "shareDesktopToChatRequest"
QT_MOC_LITERAL(25, 474, 23), // "screenshotToChatRequest"
QT_MOC_LITERAL(26, 498, 29), // "showVoiceMessageDialogRequest"
QT_MOC_LITERAL(27, 528, 11), // "addEmoticon"
QT_MOC_LITERAL(28, 540, 8), // "Emoticon"
QT_MOC_LITERAL(29, 549, 17), // "ensureFocusInChat"
QT_MOC_LITERAL(30, 567, 7), // "addText"
QT_MOC_LITERAL(31, 575, 17), // "loadSavedMessages"
QT_MOC_LITERAL(32, 593, 11), // "sendMessage"
QT_MOC_LITERAL(33, 605, 12), // "checkWriting"
QT_MOC_LITERAL(34, 618, 17), // "customContextMenu"
QT_MOC_LITERAL(35, 636, 25), // "showChatMessageFilterMenu"
QT_MOC_LITERAL(36, 662, 23), // "changeChatMessageFilter"
QT_MOC_LITERAL(37, 686, 18), // "checkAnchorClicked"
QT_MOC_LITERAL(38, 705, 15), // "selectFontColor"
QT_MOC_LITERAL(39, 721, 21), // "selectBackgroundColor"
QT_MOC_LITERAL(40, 743, 21), // "selectForegroundColor"
QT_MOC_LITERAL(41, 765, 17), // "selectSystemColor"
QT_MOC_LITERAL(42, 783, 10), // "selectFont"
QT_MOC_LITERAL(43, 794, 8), // "saveChat"
QT_MOC_LITERAL(44, 803, 9), // "clearChat"
QT_MOC_LITERAL(45, 813, 8), // "sendFile"
QT_MOC_LITERAL(46, 822, 10), // "sendFolder"
QT_MOC_LITERAL(47, 833, 16), // "checkAndSendUrls"
QT_MOC_LITERAL(48, 850, 16), // "const QMimeData*"
QT_MOC_LITERAL(49, 867, 17), // "checkAndSendImage"
QT_MOC_LITERAL(50, 885, 31), // "onUseReturnToSendMessageClicked"
QT_MOC_LITERAL(51, 917, 27), // "onSpellCheckerActionClicked"
QT_MOC_LITERAL(52, 945, 24), // "onCompleterActionClicked"
QT_MOC_LITERAL(53, 970, 9), // "printChat"
QT_MOC_LITERAL(54, 980, 24), // "showFindTextInChatDialog"
QT_MOC_LITERAL(55, 1005, 18), // "findNextTextInChat"
QT_MOC_LITERAL(56, 1024, 22), // "findPreviousTextInChat"
QT_MOC_LITERAL(57, 1047, 21), // "openSelectedTextAsUrl"
QT_MOC_LITERAL(58, 1069, 17), // "quoteSelectedText"
QT_MOC_LITERAL(59, 1087, 35), // "changeBackgroundColorInSelect..."
QT_MOC_LITERAL(60, 1123, 22), // "resetChatFontToDefault"
QT_MOC_LITERAL(61, 1146, 18), // "operationCompleted"
QT_MOC_LITERAL(62, 1165, 19), // "clearSystemMessages"
QT_MOC_LITERAL(63, 1185, 12), // "sendTextCode"
QT_MOC_LITERAL(64, 1198, 18), // "copyUrlToClipboard"
QT_MOC_LITERAL(65, 1217, 18), // "shareDesktopToChat"
QT_MOC_LITERAL(66, 1236, 20), // "sendScreenshotToChat"
QT_MOC_LITERAL(67, 1257, 28), // "sendScreenshotToChat_Private"
QT_MOC_LITERAL(68, 1286, 22) // "enableScreenshotAction"

    },
    "GuiChat\0newMessage\0\0VNumber\0is_source_code\0"
    "newSourceCodeMessage\0writing\0nextChat\0"
    "openUrl\0sendFileFromChatRequest\0"
    "sendFilesFromChatRequest\0editGroupRequest\0"
    "chatToClear\0clearSystemMessagesRequestFromChat\0"
    "showChatMenuRequest\0saveStateAndGeometryRequest\0"
    "toggleVisibilityEmoticonsPanelRequest\0"
    "toggleVisibilityPresetMessagesPanelRequest\0"
    "hideRequest\0closeRequest\0updateChatFontRequest\0"
    "updateChatColorsRequest\0"
    "showStatusMessageRequest\0openSavedChatRequest\0"
    "shareDesktopToChatRequest\0"
    "screenshotToChatRequest\0"
    "showVoiceMessageDialogRequest\0addEmoticon\0"
    "Emoticon\0ensureFocusInChat\0addText\0"
    "loadSavedMessages\0sendMessage\0"
    "checkWriting\0customContextMenu\0"
    "showChatMessageFilterMenu\0"
    "changeChatMessageFilter\0checkAnchorClicked\0"
    "selectFontColor\0selectBackgroundColor\0"
    "selectForegroundColor\0selectSystemColor\0"
    "selectFont\0saveChat\0clearChat\0sendFile\0"
    "sendFolder\0checkAndSendUrls\0"
    "const QMimeData*\0checkAndSendImage\0"
    "onUseReturnToSendMessageClicked\0"
    "onSpellCheckerActionClicked\0"
    "onCompleterActionClicked\0printChat\0"
    "showFindTextInChatDialog\0findNextTextInChat\0"
    "findPreviousTextInChat\0openSelectedTextAsUrl\0"
    "quoteSelectedText\0changeBackgroundColorInSelectedText\0"
    "resetChatFontToDefault\0operationCompleted\0"
    "clearSystemMessages\0sendTextCode\0"
    "copyUrlToClipboard\0shareDesktopToChat\0"
    "sendScreenshotToChat\0sendScreenshotToChat_Private\0"
    "enableScreenshotAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiChat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  329,    2, 0x06 /* Public */,
       5,    2,  336,    2, 0x06 /* Public */,
       6,    1,  341,    2, 0x06 /* Public */,
       7,    0,  344,    2, 0x06 /* Public */,
       8,    2,  345,    2, 0x06 /* Public */,
       9,    2,  350,    2, 0x06 /* Public */,
      10,    2,  355,    2, 0x06 /* Public */,
      11,    1,  360,    2, 0x06 /* Public */,
      12,    1,  363,    2, 0x06 /* Public */,
      13,    1,  366,    2, 0x06 /* Public */,
      14,    0,  369,    2, 0x06 /* Public */,
      15,    0,  370,    2, 0x06 /* Public */,
      16,    0,  371,    2, 0x06 /* Public */,
      17,    0,  372,    2, 0x06 /* Public */,
      18,    0,  373,    2, 0x06 /* Public */,
      19,    0,  374,    2, 0x06 /* Public */,
      20,    0,  375,    2, 0x06 /* Public */,
      21,    0,  376,    2, 0x06 /* Public */,
      22,    2,  377,    2, 0x06 /* Public */,
      23,    1,  382,    2, 0x06 /* Public */,
      24,    2,  385,    2, 0x06 /* Public */,
      25,    1,  390,    2, 0x06 /* Public */,
      26,    0,  393,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  394,    2, 0x0a /* Public */,
      29,    0,  397,    2, 0x0a /* Public */,
      30,    1,  398,    2, 0x0a /* Public */,
      31,    0,  401,    2, 0x0a /* Public */,
      32,    0,  402,    2, 0x08 /* Private */,
      33,    0,  403,    2, 0x08 /* Private */,
      34,    1,  404,    2, 0x08 /* Private */,
      35,    0,  407,    2, 0x08 /* Private */,
      36,    0,  408,    2, 0x08 /* Private */,
      37,    1,  409,    2, 0x08 /* Private */,
      38,    0,  412,    2, 0x08 /* Private */,
      39,    0,  413,    2, 0x08 /* Private */,
      40,    0,  414,    2, 0x08 /* Private */,
      41,    0,  415,    2, 0x08 /* Private */,
      42,    0,  416,    2, 0x08 /* Private */,
      43,    0,  417,    2, 0x08 /* Private */,
      44,    0,  418,    2, 0x08 /* Private */,
      45,    0,  419,    2, 0x08 /* Private */,
      46,    0,  420,    2, 0x08 /* Private */,
      47,    1,  421,    2, 0x08 /* Private */,
      49,    1,  424,    2, 0x08 /* Private */,
      50,    0,  427,    2, 0x08 /* Private */,
      51,    0,  428,    2, 0x08 /* Private */,
      52,    0,  429,    2, 0x08 /* Private */,
      53,    0,  430,    2, 0x08 /* Private */,
      54,    0,  431,    2, 0x08 /* Private */,
      55,    0,  432,    2, 0x08 /* Private */,
      56,    0,  433,    2, 0x08 /* Private */,
      57,    0,  434,    2, 0x08 /* Private */,
      58,    0,  435,    2, 0x08 /* Private */,
      59,    0,  436,    2, 0x08 /* Private */,
      60,    0,  437,    2, 0x08 /* Private */,
      61,    0,  438,    2, 0x08 /* Private */,
      62,    0,  439,    2, 0x08 /* Private */,
      63,    0,  440,    2, 0x08 /* Private */,
      64,    0,  441,    2, 0x08 /* Private */,
      65,    0,  442,    2, 0x08 /* Private */,
      66,    0,  443,    2, 0x08 /* Private */,
      67,    0,  444,    2, 0x08 /* Private */,
      68,    0,  445,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Bool,    2,    2,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48,    2,
    QMetaType::Void, 0x80000000 | 48,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GuiChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiChat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->newSourceCodeMessage((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->writing((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 3: _t->nextChat(); break;
        case 4: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< VNumber(*)>(_a[2]))); break;
        case 5: _t->sendFileFromChatRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->sendFilesFromChatRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 7: _t->editGroupRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 8: _t->chatToClear((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 9: _t->clearSystemMessagesRequestFromChat((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 10: _t->showChatMenuRequest(); break;
        case 11: _t->saveStateAndGeometryRequest(); break;
        case 12: _t->toggleVisibilityEmoticonsPanelRequest(); break;
        case 13: _t->toggleVisibilityPresetMessagesPanelRequest(); break;
        case 14: _t->hideRequest(); break;
        case 15: _t->closeRequest(); break;
        case 16: _t->updateChatFontRequest(); break;
        case 17: _t->updateChatColorsRequest(); break;
        case 18: _t->showStatusMessageRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->openSavedChatRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 20: _t->shareDesktopToChatRequest((*reinterpret_cast< VNumber(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->screenshotToChatRequest((*reinterpret_cast< VNumber(*)>(_a[1]))); break;
        case 22: _t->showVoiceMessageDialogRequest(); break;
        case 23: _t->addEmoticon((*reinterpret_cast< const Emoticon(*)>(_a[1]))); break;
        case 24: _t->ensureFocusInChat(); break;
        case 25: _t->addText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->loadSavedMessages(); break;
        case 27: _t->sendMessage(); break;
        case 28: _t->checkWriting(); break;
        case 29: _t->customContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 30: _t->showChatMessageFilterMenu(); break;
        case 31: _t->changeChatMessageFilter(); break;
        case 32: _t->checkAnchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 33: _t->selectFontColor(); break;
        case 34: _t->selectBackgroundColor(); break;
        case 35: _t->selectForegroundColor(); break;
        case 36: _t->selectSystemColor(); break;
        case 37: _t->selectFont(); break;
        case 38: _t->saveChat(); break;
        case 39: _t->clearChat(); break;
        case 40: _t->sendFile(); break;
        case 41: _t->sendFolder(); break;
        case 42: _t->checkAndSendUrls((*reinterpret_cast< const QMimeData*(*)>(_a[1]))); break;
        case 43: _t->checkAndSendImage((*reinterpret_cast< const QMimeData*(*)>(_a[1]))); break;
        case 44: _t->onUseReturnToSendMessageClicked(); break;
        case 45: _t->onSpellCheckerActionClicked(); break;
        case 46: _t->onCompleterActionClicked(); break;
        case 47: _t->printChat(); break;
        case 48: _t->showFindTextInChatDialog(); break;
        case 49: _t->findNextTextInChat(); break;
        case 50: _t->findPreviousTextInChat(); break;
        case 51: _t->openSelectedTextAsUrl(); break;
        case 52: _t->quoteSelectedText(); break;
        case 53: _t->changeBackgroundColorInSelectedText(); break;
        case 54: _t->resetChatFontToDefault(); break;
        case 55: _t->operationCompleted(); break;
        case 56: _t->clearSystemMessages(); break;
        case 57: _t->sendTextCode(); break;
        case 58: _t->copyUrlToClipboard(); break;
        case 59: _t->shareDesktopToChat(); break;
        case 60: _t->sendScreenshotToChat(); break;
        case 61: _t->sendScreenshotToChat_Private(); break;
        case 62: _t->enableScreenshotAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GuiChat::*)(VNumber , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::newMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::newSourceCodeMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::writing)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::nextChat)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(const QUrl & , VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::openUrl)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::sendFileFromChatRequest)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::sendFilesFromChatRequest)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::editGroupRequest)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::chatToClear)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::clearSystemMessagesRequestFromChat)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::showChatMenuRequest)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::saveStateAndGeometryRequest)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::toggleVisibilityEmoticonsPanelRequest)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::toggleVisibilityPresetMessagesPanelRequest)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::hideRequest)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::closeRequest)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::updateChatFontRequest)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::updateChatColorsRequest)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::showStatusMessageRequest)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::openSavedChatRequest)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::shareDesktopToChatRequest)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)(VNumber );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::screenshotToChatRequest)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (GuiChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GuiChat::showVoiceMessageDialogRequest)) {
                *result = 22;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GuiChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GuiChat.data,
    qt_meta_data_GuiChat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GuiChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiChat.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void GuiChat::newMessage(VNumber _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GuiChat::newSourceCodeMessage(VNumber _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GuiChat::writing(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GuiChat::nextChat()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GuiChat::openUrl(const QUrl & _t1, VNumber _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GuiChat::sendFileFromChatRequest(VNumber _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GuiChat::sendFilesFromChatRequest(VNumber _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GuiChat::editGroupRequest(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GuiChat::chatToClear(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GuiChat::clearSystemMessagesRequestFromChat(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GuiChat::showChatMenuRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void GuiChat::saveStateAndGeometryRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void GuiChat::toggleVisibilityEmoticonsPanelRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void GuiChat::toggleVisibilityPresetMessagesPanelRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void GuiChat::hideRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void GuiChat::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void GuiChat::updateChatFontRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void GuiChat::updateChatColorsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void GuiChat::showStatusMessageRequest(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void GuiChat::openSavedChatRequest(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void GuiChat::shareDesktopToChatRequest(VNumber _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void GuiChat::screenshotToChatRequest(VNumber _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void GuiChat::showVoiceMessageDialogRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
