#include "gamecontroller.h"
#include <QDebug>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

GameController::GameController(QObject* parent)
    : QObject(parent)
{
    init();
}

void GameController::init()
{
    this->m_squares        = new QQmlObjectListModel<Square>(this);
    this->m_player         = 1;
    this->m_scorePlayer1   = 0;
    this->m_scorePlayer2   = 0;
    this->m_winner         = 0;
    this->m_moveCount      = 0;
    this->m_isGameFinished = false;

    for (int i = 0; i < kMatrixSize * kMatrixSize; i++)
    {
        m_squares->append(new Square(this));
    }
}

void GameController::requestMove(const int position)
{
    Square* selectedSquare = m_squares->at(position);

    if (m_isGameFinished)  // check game finished
    {
        return;
    }
    else if (selectedSquare->getSelection() != Square::SelectionType::Empty)  // check square empty
    {
        return;
    }

    makeMoveOnSelectedSquare(position);
}

void GameController::makeMoveOnSelectedSquare(const int position)
{
    Square* selectedSquare = m_squares->at(position);
    if (m_player == 1)  // check player turn
    {
        selectedSquare->setSelection(Square::SelectionType::Player1);
        setPlayer(2);
    }
    else
    {
        selectedSquare->setSelection(Square::SelectionType::Player2);
        setPlayer(1);
    }

    m_moveCount++;
    checkGameStatus(position, selectedSquare->getSelection());
}

void GameController::checkGameStatus(const int position, Square::SelectionType selectedType)
{
    int i;
    int posX = position / kMatrixSize;
    int posY = position % kMatrixSize;

    // check column
    for (i = 0; i < kMatrixSize; i++)
    {
        if (selectedType != m_squares->at(posX * kMatrixSize + i)->getSelection())
        {
            break;
        }

        if (i == kMatrixSize - 1)
        {
            selectWinner(selectedType);
        }
    }

    // check row
    for (i = 0; i < kMatrixSize; i++)
    {
        if (selectedType != m_squares->at(i * kMatrixSize + posY)->getSelection())
        {
            break;
        }

        if (i == kMatrixSize - 1)
        {
            selectWinner(selectedType);
        }
    }

    // check first diagonal
    if (posX == posY)
    {
        for (i = 0; i < kMatrixSize; i++)
        {
            if (selectedType != m_squares->at(i * kMatrixSize + i)->getSelection())
            {
                break;
            }

            if (i == kMatrixSize - 1)
            {
                selectWinner(selectedType);
            }
        }
    }

    // check second diagonal
    for (i = 0; i < kMatrixSize; i++)
    {
        if (selectedType != m_squares->at(i * kMatrixSize + (kMatrixSize - 1 - i))->getSelection())
        {
            break;
        }

        if (i == kMatrixSize - 1)
        {
            selectWinner(selectedType);
        }
    }

    // check draw
    if (m_moveCount == kMatrixSize * kMatrixSize &&
        !m_isGameFinished)  // add check if won and all moves made
    {
        setWinner(0);
        setGameFinished(true);
    }
}

void GameController::selectWinner(Square::SelectionType selectedType)
{
    if (selectedType == Square::SelectionType::Player1)
    {
        setScorePlayer1(++m_scorePlayer1);
        setWinner(1);
        setGameFinished(true);
    }
    else if (selectedType == Square::SelectionType::Player2)
    {
        setScorePlayer2(++m_scorePlayer2);
        setWinner(2);
        setGameFinished(true);
    }
}

void GameController::resetGame()
{
    setGameFinished(false);
    setWinner(0);
    m_moveCount = 0;

    for (int i = 0; i < m_squares->count(); i++)
    {
        m_squares->at(i)->setSelection(Square::SelectionType::Empty);
    }
}

void GameController::resetScore()
{
    setScorePlayer1(0);
    setScorePlayer2(0);
}

int GameController::getPlayer() const
{
    return m_player;
}

void GameController::setPlayer(const int player)
{
    m_player = player;
    emit playerChanged();
}

int GameController::getScorePlayer1() const
{
    return m_scorePlayer1;
}

int GameController::getScorePlayer2() const
{
    return m_scorePlayer2;
}

void GameController::setScorePlayer1(const int score)
{
    m_scorePlayer1 = score;
    emit scorePlayer1Changed();
}

void GameController::setScorePlayer2(const int score)
{
    m_scorePlayer2 = score;
    emit scorePlayer2Changed();
}

int GameController::getWinner() const
{
    return m_winner;
}

void GameController::setWinner(const int winner)
{
    m_winner = winner;
    emit winnerChanged();
}

bool GameController::getGameFinished() const
{
    return m_isGameFinished;
}

void GameController::setGameFinished(const bool isGameFinished)
{
    m_isGameFinished = isGameFinished;
    emit isGameFinishedChanged();
}
