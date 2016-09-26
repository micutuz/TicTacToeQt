#include "gametest.h"

GameTest::GameTest()
{
}

GameTest::~GameTest()
{
}

TEST_F(GameTest, TestColumnWin)
{
    GameController* gc = new GameController();
    gc->requestMove(0);
    gc->requestMove(1);

    gc->requestMove(3);
    gc->requestMove(2);

    gc->requestMove(6);
    gc->requestMove(8);

    EXPECT_EQ(true, gc->getGameFinished());
    EXPECT_EQ(1, gc->getWinner());

    delete gc;
}

TEST_F(GameTest, TestRowWin)
{
    GameController* gc = new GameController();
    gc->requestMove(0);
    gc->requestMove(3);

    gc->requestMove(1);
    gc->requestMove(4);

    gc->requestMove(2);
    gc->requestMove(5);

    EXPECT_EQ(true, gc->getGameFinished());
    EXPECT_EQ(1, gc->getWinner());

    delete gc;
}

TEST_F(GameTest, TestFirstDiagWin)
{
    GameController* gc = new GameController();
    gc->requestMove(0);
    gc->requestMove(3);

    gc->requestMove(4);
    gc->requestMove(5);

    gc->requestMove(8);
    gc->requestMove(1);

    EXPECT_EQ(true, gc->getGameFinished());
    EXPECT_EQ(1, gc->getWinner());

    delete gc;
}

TEST_F(GameTest, TestSecondDiagWin)
{
    GameController* gc = new GameController();

    gc->requestMove(2);
    gc->requestMove(3);

    gc->requestMove(4);
    gc->requestMove(5);

    gc->requestMove(6);
    gc->requestMove(1);

    EXPECT_EQ(true, gc->getGameFinished());
    EXPECT_EQ(0, gc->get_squares()->at(8)->getSelection());
    EXPECT_EQ(1, gc->getWinner());

    delete gc;
}

TEST_F(GameTest, TestDraw)
{
    GameController* gc = new GameController();

    gc->requestMove(0);
    gc->requestMove(1);

    gc->requestMove(3);
    gc->requestMove(6);

    gc->requestMove(4);
    gc->requestMove(5);

    gc->requestMove(7);
    gc->requestMove(8);

    gc->requestMove(2);

    EXPECT_EQ(true, gc->getGameFinished());
    EXPECT_EQ(0, gc->getWinner());

    delete gc;
}
