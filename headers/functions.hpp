#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "numbersplitter.hpp"

Position getPosition(int pos)
{
    Position choice;
    int row;
    int col;
    row = pos / 10;

    if (pos < 10)
    {
        col = pos;
    }
    else
    {
        col = pos - (row * 10) - 1;
    }
    
    choice.col = col;
    choice.row = row;
    return choice;
}

#endif