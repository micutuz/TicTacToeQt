import QtQuick 2.0
import "UtilityFunctions.js" as UtilityFunctions
Rectangle {
    id: rect
    width:50
    height:50
    color:"grey"
    MouseArea {
        anchors.fill: parent
        onClicked: {
            gameController.requestMove(index)
        }
    }

    Text {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        text: UtilityFunctions.SelectionTypeToString(model.selection)
        font.pointSize: 32
    }
}
