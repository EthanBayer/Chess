
#include "../headers/piece.hpp"

Piece::Piece()
{
    symbol = '0';
    name = "Empty";
    m = None;
    player = 0;
}

Piece::Piece(char symbol, std::string name, Movements m, int player)
{
    this->symbol = symbol;
    this->name = name;
    this->m = m;
    this->player = player;
}

void Piece::setPlayer(int player)
{
    this->player = player;
}

int Piece::getPlayer()
{
    return player;
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