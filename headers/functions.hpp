#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "numbersplitter.hpp"

// Function to split a number into two for easy tile selecting
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

// Function to check the out of bounds for a player selection
int checkPositions(int origRow, int origCol, int newRow, int newCol)
{
    if (origRow > 7 || origRow < 0)
    {
        return 3;
    }
    if (origCol > 7 || origCol < 0)
    {
        return 3;
    }
    if (newRow > 7 || newRow < 0)
    {
        return 3;
    }
    if (newCol > 7 || newCol < 0)
    {
        return 3;
    } 

    return 1;
}

#endif