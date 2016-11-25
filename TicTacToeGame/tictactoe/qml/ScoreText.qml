import QtQuick 2.0
import "../javascript/UtilityFunctions.js" as UtilityFunctions

Text {
    text:UtilityFunctions.ScoreToString(game.scorePlayer1 , game.scorePlayer2)
}
