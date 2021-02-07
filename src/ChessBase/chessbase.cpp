
#include "../../headers/ChessBase/chessbase.hpp"

ChessBase::ChessBase()
{
    representation = '0';
    name = "No Name";
    PieceStart = nullptr;
}

ChessBase::ChessBase(char r, std::string name)
{
    representation = r;
    this->name = name;
    PieceStart = nullptr;
}

ChessBase::ChessBase(char r, std::string name, ChessPieceStrategy* ps)
{
    representation = r;
    this->name = name;
    PieceStart = ps;
}

char ChessBase::getRep()
{
    return representation;
}

std::string ChessBase::getName()
{
    return name;
}

ChessPieceStrategy* ChessBase::getPieceStrat()
{
    return PieceStart;
}

std::array<std::array<Tile, 8>, 8> ChessBase::getBoard()
{
    return Board;
}

void ChessBase::setRep(char r)
{
    representation = r;
}

void ChessBase::setName(std::string name)
{
    this->name = name;
}

void ChessBase::setPieceStrat(ChessPieceStrategy* ps)
{
    PieceStart = ps;
}