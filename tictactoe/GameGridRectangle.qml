import QtQuick 2.0


Rectangle {
    width: 156
    height: 156
    GridView {
        anchors.fill: parent
        cellWidth: 52
        cellHeight: 52
        id:gameGrid
        model: gameController.squares
        delegate: GameSquare {}
    }
    WinnerRectangle {
        anchors.centerIn: parent
    }
}
