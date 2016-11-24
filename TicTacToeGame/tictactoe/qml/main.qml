import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 200
    height: 230
    title: qsTr("Tic Tac Toe")

    property var game: gameController
    GameInterface {
        anchors.fill:parent
    }
}
