import QtQuick 2.0
import "../javascript/UtilityFunctions.js" as UtilityFunctions
//better action_button?

Rectangle {
    color:"light grey"
    //anchors.centerIn: parent
    width:100
    height:25
    visible: game.isGameFinished
    Text {
        anchors.centerIn: parent
        text: UtilityFunctions.ResultToString(winner)
    }
}

// Winner PopUp
