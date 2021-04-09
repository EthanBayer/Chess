#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "chesspiecestrategy.hpp"

class Queen : public ChessPieceStrategy
{
    public:
        int movement(int origRow, int origCol, int newRow, int newCol);
};

#endif