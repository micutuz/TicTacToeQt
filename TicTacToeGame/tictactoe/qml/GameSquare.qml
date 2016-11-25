import QtQuick 2.0
import "../javascript/UtilityFunctions.js" as UtilityFunctions
Rectangle {
    id: rect
    height: cellSize-2
    width:  cellSize-2

    color:"grey"
    MouseArea {
        anchors.fill: parent
        onClicked: {
            game.requestMove(index)
        }
    }

    Text {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        text: UtilityFunctions.SelectionTypeToString(model.selection)
        font.pointSize: 32
    }
}
