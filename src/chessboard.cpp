
#include "../headers/chessboard.hpp"
#include "../headers/cpStrategies/pawn.hpp"
#include <utility>

ChessBoard::ChessBoard()
{
    name = "Chess Board";

    std::pair<Movements, ChessPieceStrategy*> p1;
    PawnC* p;
    ChessPieceStrategy* pawn = p;
    p1.first = Pawn;
    p1.second = pawn;
    PieceMovements.insert(p1);
}

void ChessBoard::setName(std::string name)
{
    this->name = name;
}