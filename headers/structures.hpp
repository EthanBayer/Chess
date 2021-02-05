#ifndef STRUCTURES_HPP
#define STRUCTURES_HPP

#include "ChessBase/chessbase.hpp"

class ChessBase;

struct Tile
{
    char color;
    Chessbase* usedPiece;
};

#endif