#ifndef ROOK_HPP
#define ROOK_HPP

#include "chesspiecestrategy.hpp"

class Rook : public ChessPieceStrategy
{
    public:
        int movement(int origRow, int origCol, int newRow, int newCol);
};

#endif