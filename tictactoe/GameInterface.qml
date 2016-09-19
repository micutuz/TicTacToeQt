import QtQuick 2.5
import QtQuick.Controls 1.4


Rectangle {
    id:interfaceRectangle

    CurrentPlayer {
        id:currentPlayer
        anchors.horizontalCenter: parent.horizontalCenter
    }

    GameGridRectangle {
        id: gameRectangle
        anchors.top: currentPlayer.bottom
        anchors.horizontalCenter: interfaceRectangle.horizontalCenter
    }

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
