import QtQuick 2.5
import QtQuick.Controls 1.4


Rectangle {
    id:interfaceRectangle

    property var currentPlayer: game.player
    CurrentPlayer {
        id:currentPlayer
        anchors.horizontalCenter: parent.horizontalCenter
    }

    property var squares: game.squares
    GameGridRectangle {
        id: gameRectangle
        anchors.top: currentPlayer.bottom
        anchors.horizontalCenter: interfaceRectangle.horizontalCenter
    }

    property var scorePlayer1: game.scorePlayer1
    property var scorePlayer2: game.scorePlayer2
    ScoreText {
        id:scoreText
        anchors.top: gameRectangle.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }

    OptionButtons {
        anchors.top:scoreText.bottom
        anchors.horizontalCenter: interfaceRectangle.horizontalCenter
    }
}
