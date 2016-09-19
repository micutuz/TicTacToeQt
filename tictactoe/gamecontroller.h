#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QObject>
#include <qqmlobjectlistmodel.h>
#include <square.h>

const int kMatrixSize = 3;

class GameController : public QObject
{
    Q_OBJECT
    QML_OBJMODEL_PROPERTY(Square, squares)
    Q_PROPERTY(int player READ getPlayer NOTIFY playerChanged)
    Q_PROPERTY(int scorePlayer1 READ getScorePlayer1 NOTIFY scorePlayer1Changed)
    Q_PROPERTY(int scorePlayer2 READ getScorePlayer2 NOTIFY scorePlayer2Changed)
    Q_PROPERTY(int winner READ getWinner NOTIFY winnerChanged)
    Q_PROPERTY(int isGameFinished READ getGameFinished NOTIFY isGameFinishedChanged)

public:
    explicit GameController(QObject* parent = 0);
    Q_INVOKABLE void requestMove(const int position);
    Q_INVOKABLE void resetGame();
    Q_INVOKABLE void resetScore();

    int  getPlayer() const;
    int  getScorePlayer1() const;
    int  getScorePlayer2() const;
    int  getWinner() const;
    bool getGameFinished() const;

    void setPlayer(const int player);
    void setScorePlayer1(const int score);
    void setScorePlayer2(const int score);
    void setWinner(const int winner);
    void setGameFinished(const bool isGameFinished);

signals:
    void playerChanged();
    void scorePlayer1Changed();
    void scorePlayer2Changed();
    void winnerChanged();
    void isGameFinishedChanged();
public slots:

private:
    // check the winner
    void checkGameStatus(const int position, Square::SelectionType selectedType);
    void selectWinner(const Square::SelectionType selectedType);

private:
    int  m_player;
    int  m_scorePlayer1;
    int  m_scorePlayer2;
    int  m_winner;
    int  m_moveCount;
    bool m_isGameFinished;
};

#endif  // GAMECONTROLLER_H
