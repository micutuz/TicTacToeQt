import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 200
    height: 230
    title: qsTr("Tic Tac Toe")

    GameInterface {
        anchors.fill:parent
    }
}
