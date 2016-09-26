TEMPLATE = app

CONFIG += c++11

SOURCES += \
    main.cpp

macx: LIBS += -L$$PWD/../build/tictactoe/ -ltictactoe.1.0.0

INCLUDEPATH += $$PWD/../build/tictactoe
DEPENDPATH += $$PWD/../build/tictactoe
