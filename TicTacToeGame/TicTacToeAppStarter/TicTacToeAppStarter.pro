TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += \
    main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../build/tictactoe/release/ -ltictactoe.1.0.0
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../build/tictactoe/debug/ -ltictactoe.1.0.0
else:unix: LIBS += -L$$PWD/../../build/tictactoe/ -ltictactoe.1.0.0

INCLUDEPATH += $$PWD/../../build/tictactoe
DEPENDPATH += $$PWD/../../build/tictactoe

DISTFILES +=
