TEMPLATE = app

QT += qml quick
CONFIG += c++11

RESOURCES += ../tictactoe/qml.qrc

SOURCES += \
    main.cpp

macx: LIBS += -L$$PWD/../../build-TicTacToeGame/tictactoe/ -ltictactoe.1.0.0

INCLUDEPATH += $$PWD/../tictactoe
DEPENDPATH += $$PWD/../tictactoe

DISTFILES +=
