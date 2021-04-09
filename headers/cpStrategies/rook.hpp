#ifndef ROOK_HPP
#define ROOK_HPP

#include "chesspiecestrategy.hpp"

class RookC : public ChessPieceStrategy
{
    public:
        int movement(int origRow, int origCol, int newRow, int newCol);
};

#endif