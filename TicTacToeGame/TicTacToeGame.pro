TEMPLATE = subdirs

SUBDIRS += \
        tictactoe

CONFIG += c++11
GoogleTest.depends = tictactoe
TicTacToeAppStarter.depends = tictactoe
USE_TEST {
    SUBDIRS += GoogleTest
} else {
    SUBDIRS += TicTacToeAppStarter
}


