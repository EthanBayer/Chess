#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "chesspiecestrategy.hpp"

class KnightC : public ChessPieceStrategy
{
    public:
        int movement(int turn, int origRow, int origCol, int newRow, int newCol);
};

#endif