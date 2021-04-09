#ifndef PAWN_HPP
#define PAWN_HPP

#include "chesspiecestrategy.hpp"

class Pawn : public ChessPieceStrategy
{
    public:
        int movement(int origRow, int origCol, int newRow, int newCol);
};

#endif