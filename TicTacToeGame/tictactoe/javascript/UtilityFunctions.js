
function SelectionTypeToString(type)
{
    if(type === 0)
        return "";
    else if(type === 1)
        return "X";
    else if(type === 2)
        return "O";
}

function ResultToString(result)
{
    if(result === 0)
        return "DRAW";
    else if(result === 1)
        return "Player 1 Won";
    else if(result === 2)
        return "Player 2 Won";
}

function ScoreToString(scorePlayer1, scorePlayer2)
{
    return "Player 1    " + scorePlayer1 + " - " + scorePlayer2 + "    Player 2";
}
