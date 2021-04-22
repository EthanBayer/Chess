
#include "../headers/tile.hpp"

Tile::Tile()
{
    p = Piece();
    color = NULL;
}

Tile::Tile(Piece p, char color)
{
    this->p = p;
    this->color = color;
}

void Tile::setPiece(Piece p)
{
    this->p = p;
}

Piece Tile::getPiece()
{
    return p;
}

void Tile::setColor(char color)
{
    this->color = color;
}

char Tile::getColor()
{
    return color;
}