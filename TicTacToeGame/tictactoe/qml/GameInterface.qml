import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1

Rectangle {
    id:interfaceRectangle

    ColumnLayout {
        anchors.horizontalCenter: parent.horizontalCenter
        CurrentPlayer {
            id:currentPlayer
            anchors.horizontalCenter: parent.horizontalCenter
        }


        GameGridRectangle {
            width:156
            height:156
        }


        ScoreText {
        }

        OptionButtons {
        }
    }
}
