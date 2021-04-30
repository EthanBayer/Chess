#ifndef NONE_HPP
#define NONE_HPP

#include "chesspiecestrategy.hpp"

class NoneC : public ChessPieceStrategy
{
    public:
        int movement(int turn, int origRow, int origCol, int newRow, int newCol);
};

#endif