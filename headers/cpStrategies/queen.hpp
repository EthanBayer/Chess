#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "chesspiecestrategy.hpp"

class QueenC : public ChessPieceStrategy
{
    public:
        int movement(int turn, int origRow, int origCol, int newRow, int newCol);
};

#endif