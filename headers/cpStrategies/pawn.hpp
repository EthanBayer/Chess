#ifndef PAWN_HPP
#define PAWN_HPP

#include "chesspiecestrategy.hpp"

class PawnC : public ChessPieceStrategy
{
    public:
        int movement(int turn, int origRow, int origCol, int newRow, int newCol);
};

#endif