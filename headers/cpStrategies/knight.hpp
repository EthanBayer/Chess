#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "chesspiecestrategy.hpp"

class Knight : public ChessPieceStrategy
{
    public:
        int movement(int origRow, int origCol, int newRow, int newCol);
};

#endif