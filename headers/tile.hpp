#ifndef TILE_HPP
#define TILE_HPP

#include <iostream>
#include "piece.hpp"

class Tile
{
    private:
        Piece* p;
        std::string color;

  public:
    Tile();
    Tile(Piece* p, std::string color);
    void setPiece(Piece* p);
    void setColor(std::string color);
    Piece* getPiece();
    std::string getColor();  
};

#endif 