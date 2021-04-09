#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "chesspiecestrategy.hpp"

class BishopC : public ChessPieceStrategy
{
    public:
        int movement(int origRow, int origCol, int newRow, int newCol);
};

#endif
