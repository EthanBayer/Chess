
#include "../../headers/cpStrategies/knight.hpp"

/*
Return 1 to indicate a valid movement,
Return 2 to indicate an invalid movement,
Return 3 to indicate an invalid choice,

turn => which player is playing
*/
int KnightC::movement(int turn, int origRow, int origCol, int newRow, int newCol)
{
    // Check to see if you are not selectingan empty space or an enemy piece
    if (cb->getTileOnBoard(origRow, origCol).getPiece().getPlayer() != turn)
    {
        return 3;
    }

    // Check to see if you are not moving on a friendly Piece
    if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() == turn)
    {
        return 3;
    }

    // Up
    if ((origRow + 2) <= 7 && (origRow + 2) == newRow)
    {
        if ((origCol + 1) <= 7 && (origCol + 1) == newCol)
        {
            return 1;
        }
        else if ((origCol - 1) >= 0 && (origCol - 1) == newCol)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }

    // Down
    if ((origRow - 2) >= 0 && (origRow - 2) == newRow)
    {
        if ((origCol + 1) <= 7 && (origCol + 1) == newCol)
        {
            return 1;
        }
        else if ((origCol - 1) >= 0 && (origCol - 1) == newCol)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }

    // Right
    if ((origCol + 2) <= 7 && (origCol + 2) == newCol)
    {
        if ((origRow + 1) <= 7 && (origRow + 1) == newRow)
        {
            return 1;
        }
        else if ((origRow - 1) >= 0 && (origRow - 1) == newRow)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }

    // Left
    if ((origCol - 2) <= 7 && (origCol - 2) == newCol)
    {
        if ((origRow + 1) <= 7 && (origRow + 1) == newRow)
        {
            return 1;
        }
        else if ((origRow - 1) >= 0 && (origRow - 1) == newRow)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }

    return 2;

}