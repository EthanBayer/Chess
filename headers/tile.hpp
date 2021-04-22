#ifndef TILE_HPP
#define TILE_HPP

#include "piece.hpp"

class Tile
{
    private:
        Piece p;
        char color;
    
    public:
        Tile();
        Tile(Piece p, char color);
        void setPiece(Piece p);
        void setColor(char color);
        Piece getPiece();
        char getColor();
};

#endif