
#include "../../headers/cpStrategies/knight.hpp"

/*
Return 1 to indicate a valid movement,
Return 2 to indicate an invalid movement,
Return 3 to indicate an invalid choice,
*/
int KnightC::movement(int turn, int origRow, int origCol, int newRow, int newCol)
{
    if (board[origRow][origCol].getPiece().getPlayer() != turn)
    {
        return 3;
    }

    // Up
    if ((origRow + 2) <= 7 && (origRow + 2) == newRow)
    {
        if ((origCol + 1) <= 7 && (origCol + 1) == newCol)
        {
            return 1
        }
        else if ((origCol - 1) >= 0 && (origCol - 1) == newCol)
        {
            return 1
        }
        else
        {
            return 2
        }
    }
    else
    {
        return 2
    }

    // Down
    if ((origRow - 2) >= 0 && (origRow - 2) == newRow)
    {
        if ((origCol + 1) <= 7 && (origCol + 1) == newCol)
        {
            return 1
        }
        else if ((origCol - 1) >= 0 && (origCol - 1) == newCol)
        {
            return 1
        }
        else
        {
            return 2
        }
    }
    else
    {
        return 2
    }

    // Right
    if ((origCol + 2) <= 7 && (origCol + 2) == newCol)
    {
        if ((origRow + 1) <= 7 && (origRow + 1) == newRow)
        {
            return 1
        }
        else if ((origRow - 1) >= 0 && (origRow - 1) == newRow)
        {
            return 1
        }
        else
        {
            return 2
        }
    }
    else
    {
        return 2
    }

    // Left
    if ((origCol - 2) <= 7 && (origCol - 2) == newCol)
    {
        if ((origRow + 1) <= 7 && (origRow + 1) == newRow)
        {
            return 1
        }
        else if ((origRow - 1) >= 0 && (origRow - 1) == newRow)
        {
            return 1
        }
        else
        {
            return 2
        }
    }
    else
    {
        return 2
    }

}