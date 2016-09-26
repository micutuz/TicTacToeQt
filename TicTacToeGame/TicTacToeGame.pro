TEMPLATE = subdirs

SUBDIRS += \
        tictactoe \
        GoogleTest \
        TicTacToeAppStarter

CONFIG += c++11

GoogleTest.depends = tictactoe
TicTacToeAppStarter.depends = tictactoe
