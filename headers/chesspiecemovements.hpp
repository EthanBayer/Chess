#ifndef CHESSPIECEMOVEMENTS_HPP
#define CHESSPIECEMOVEMENTS_HPP

#include "chessboard.hpp"
#include "functions.hpp"

/*
Return 1 to indicate a valid movement,
Return 2 to indicate an invalid movement,
Return 3 to indicate an invalid choice,
Return 4, exclusive for pawn when reaching end of board

turn => which player is playing
*/

// turn = 1 = white
// turn = 2 = black

// Pawn
static int movementPawn(ChessBoard* cb, int turn, int origRow, int origCol, int newRow, int newCol)
{
    // Check to see if you are not selecting an empty space or an enemy piece
    if (cb->getTileOnBoard(origRow, origCol).getPiece().getPlayer() != turn)
    {
        return 3;
    }

    // Check to see if you are not moving on a friendly Piece
    if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() == turn)
    {
        return 3;
    }

    // Checking out of bounds - Not Really needed here, handled in move function
    if (checkPositions(origRow, origCol, newRow, newCol) == 3)
    {
        return 3;
    }

    // Pawn Move
    if (turn == 1) // White player
    {
        // Checking if pawn has moved up once or twice
        if (origCol == newCol && origRow != newRow)
        {
            if (origRow - 1 == newRow)
            {
                if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() != 2)
                {
                    if (newRow == 0)
                    {
                        return 4;
                    }
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else if (origRow - 2 == newRow)
            {
                if (origRow == 6 && cb->getTileOnBoard(origRow + 1, origCol).getPiece().getPlayer() != 2)
                {
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else
            {
                return 2;
            }
        }
        // Check the Pawn move to capture an enemy piece
        else if (origCol != newCol && origRow != newRow)
        {
            if (origRow - 1 == newRow && origCol - 1 == newCol)
            {
                if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() == 2)
                {
                    if (newRow == 0)
                    {
                        return 4;
                    }
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else if (origRow - 1 == newRow && origCol + 1 == newCol)
            {
                if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() == 2)
                {
                    if (newRow == 0)
                    {
                        return 4;
                    }
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else
            {
                return 2;
            }
        }
        // Otherwise return 2 to indicate invalid move
        else
        {
            return 2;
        }
    }
    else if (turn == 2) // Black player
    {
        // Checking if pawn has moved up once or twice
        if (origCol == newCol && origRow != newRow)
        {
            if (origRow + 1 == newRow)
            {
                if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() != 2)
                {
                    if (newRow == 0)
                    {
                        return 4;
                    }
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else if (origRow + 2 == newRow)
            {
                if (origRow == 6 && cb->getTileOnBoard(origRow + 1, origCol).getPiece().getPlayer() != 2)
                {
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else
            {
                return 2;
            }
        }
        // Check the Pawn move to capture an enemy piece
        else if (origCol != newCol && origRow != newRow)
        {
            if (origRow + 1 == newRow && origCol - 1 == newCol)
            {
                if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() == 2)
                {
                    if (newRow == 0)
                    {
                        return 4;
                    }
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else if (origRow + 1 == newRow && origCol + 1 == newCol)
            {
                if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() == 2)
                {
                    if (newRow == 0)
                    {
                        return 4;
                    }
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
            else
            {
                return 2;
            }
        }
        // Otherwise return 2 to indicate invalid move
        else
        {
            return 2;
        }
    }
    
    return 2;

    /*
    TEMPLATE (not speecifying second player)

        if (col is the same AND Row has changed)
        {
            if (Row is off by 1)
            {
                if no piece is in front
                 return 1
                else
                 return 2
                
                if hit final row
                 return 4
            }
            else if (Row is off by 2)
            {
                if no piece is in front AND you are at starting row:
                return 1
                else
                return 2
            }
            else
            {
                return 2
            }
        }
        else if (col has changed AND row has changed)
        {
            if (col and row are both 1 off AND an enemy piece is there)
            {
                if (hit final row)
                {
                    return 4
                }
                else
                {
                    return 1
                }
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
    */
}

// Knight
static int movementKnight(ChessBoard* cb, int turn, int origRow, int origCol, int newRow, int newCol)
{
    // Check to see if you are not selecting an empty space or an enemy piece
    if (cb->getTileOnBoard(origRow, origCol).getPiece().getPlayer() != turn)
    {
        return 3;
    }

    // Check to see if you are not moving on a friendly Piece
    if (cb->getTileOnBoard(newRow, newCol).getPiece().getPlayer() == turn)
    {
        return 3;
    }

    if (checkPositions(origRow, origCol, newRow, newCol) == 3)
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




// Determining Function
int moveSelect(Movements m, ChessBoard* cb, int turn, int origRow, int origCol, int newRow, int newCol)
{
    int use;
    switch (m)
    {
        case 3:
            use = movementKnight(cb, turn, origRow, origCol, newRow, newCol);
            return use;
            break;
        default:
            return 0;
            break;
    }
}


#endif