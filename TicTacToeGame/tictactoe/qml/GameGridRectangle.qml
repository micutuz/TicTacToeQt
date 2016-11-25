import QtQuick 2.0


Rectangle {
    width: 156
    height: 156
    GridView {
        anchors.fill: parent
        cellWidth: 52
        cellHeight: 52
        id:gameGrid
        model: game.squares
        delegate: GameSquare {}
    }

    property var winner : game.winner
    WinnerPopUp {
        anchors.centerIn: parent
    }
}


// TO DO : try relative sizes ( ex : /3, or model.count ; parent width also relative)
