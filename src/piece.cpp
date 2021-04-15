
#include "../headers/piece.hpp"

Piece::Piece()
{
    symbol = '0';
    name = "Empty";
    m = None;
}

Piece::Piece(char symbol, std::string name, Movements m)
{
    this->symbol = symbol;
    this->name = name;
    this->m = m;
}

void Piece::setSymbol(char symbol)
{
    this->symbol = symbol;
}

void Piece::setName(std::string name)
{
    this->name = name;
}

void Piece::setMovement(Movements m)
{
    this->m = m;
}

char Piece::getSymbol()
{
    return symbol;
}

std::string Piece::getName()
{
    return name;
}

Movements Piece::getMovement()
{
    return m;
}