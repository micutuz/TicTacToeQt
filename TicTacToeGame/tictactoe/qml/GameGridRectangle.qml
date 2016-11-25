import QtQuick 2.0
import "../javascript/UtilityFunctions.js" as UtilityFunctions


Rectangle {
    property var gridCount: UtilityFunctions.CellsPerRow(game.squares.count)
    property var cellSize: width / gridCount
    GridView {
        anchors.fill: parent
        id:gameGrid
        cellHeight: cellSize
        cellWidth:  cellSize
        model: game.squares
        delegate: GameSquare {}
    }

    property var winner : game.winner
    WinnerPopUp {
        anchors.centerIn: parent
    }
}
