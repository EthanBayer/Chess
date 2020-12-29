#include "../headers/piece.hpp"

Piece::Piece()
{
    this->name = "testName";
}

std::string Piece::getName()
{
    return name;
}