#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>
#include "enum.hpp"

class Piece
{
    private:
        char symbol;
        std::string name;
        Movements m;
        int player;

    public:
        Piece();
        Piece(char symbol, std::string name, Movements m, int player);
        void setPlayer(int player);
        int getPlayer();
        void setSymbol(char Symbol);
        void setName(std::string name);
        void setMovement(Movements m);
        char getSymbol();
        std::string getName();
        Movements getMovement();
};

#endif