#ifndef CHESSPIECESTRATEGY_HPP
#define CHESSPIECESTRATEGY_HPP

#include "../chessboard.hpp"
class ChessBoard;

class ChessPieceStrategy
{
    protected:
        ChessBoard* cb;

    public:
        virtual int movement(int origRow, int origCol, int newRow, int newCol) = 0;

};

#endif