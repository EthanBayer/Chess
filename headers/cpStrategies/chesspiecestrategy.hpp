#ifndef CHESSPIECESTRATEGY_HPP
#define CHESSPIECESTRATEGY_HPP

#include "../chessboard.hpp"
class ChessBoard;

/*
Return 1 to indicate a valid movement,
Return 2 to indicate an invalid movement,
Return 3 to indicate an invalid choice,
*/
class ChessPieceStrategy
{
    protected:
        ChessBoard* cb;

    public:
        virtual int movement(int turn, int origRow, int origCol, int newRow, int newCol) = 0;

};

#endif