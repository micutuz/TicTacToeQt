import QtQuick 2.0

Row {
    spacing:2
    GameButton {
        id: buttonPlayAgain
        text: "Play Again"
        onClicked: {
            game.resetGame()
        }
    }
    GameButton {
        id: resetScore
        text: "Reset Score"
        onClicked: {
            game.resetScore()
        }
    }
}
