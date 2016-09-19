import QtQuick 2.0
import "UtilityFunctions.js" as UtilityFunctions

Text {
    text:UtilityFunctions.ScoreToString(gameController.scorePlayer1 , gameController.scorePlayer2)
}
