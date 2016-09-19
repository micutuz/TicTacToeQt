import QtQuick 2.0
import "../javascript/UtilityFunctions.js" as UtilityFunctions

Text {
    text:UtilityFunctions.ScoreToString(gameController.scorePlayer1 , gameController.scorePlayer2)
}
