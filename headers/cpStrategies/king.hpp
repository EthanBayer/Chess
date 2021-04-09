#ifndef KING_HPP
#define KING_HPP

#include "chesspiecestrategy.hpp"

class King : public ChessPieceStrategy
{
    public:
        int movement(int origRow, int origCol, int newRow, int newCol);
};

#endif