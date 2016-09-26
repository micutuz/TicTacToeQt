
CONFIG += c++11

SOURCES += \
    main.cpp \
    gametest.cpp


macx: LIBS += -L$$PWD/lib/ -lgtest

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

macx: PRE_TARGETDEPS += $$PWD/lib/libgtest.a

# game library
macx: LIBS += -L$$PWD/../build/tictactoe/ -ltictactoe.1.0.0

INCLUDEPATH += $$PWD/../build/tictactoe
DEPENDPATH += $$PWD/../build/tictactoe

HEADERS += \
    gametest.h
