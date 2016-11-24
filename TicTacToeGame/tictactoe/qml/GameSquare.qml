import QtQuick 2.0
import "../javascript/UtilityFunctions.js" as UtilityFunctions
Rectangle {
    id: rect
    width:50
    height:50
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

// TO DO : relative sizes
