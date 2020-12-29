#include "../headers/tile.hpp"

Tile::Tile()
{
    p = nullptr;
    color = "N";
}

Tile::Tile(Piece* p, std::string color)
{
    this->p = p;
    this->color = color;
}

void Tile::setPiece(Piece* p)
{
    this->p = p;
}

void Tile::setColor(std::string color)
{
    this->color = color;
}

Piece* Tile::getPiece()
{
    return p;
}

std::string Tile::getColor()
{
    return color;
}