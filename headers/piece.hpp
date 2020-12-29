#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>

class Piece 
{
    private:
        std::string name;

    public:
        Piece();
        std::string getName();
};

#endif