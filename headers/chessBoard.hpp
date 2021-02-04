#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include "board.hpp"
#include "tile.hpp"

class Piece;

class ChessBoard : public Board
{
    private:
        Tile PlayBoard[8][8];

    public:
        virtual void initialize();
        Tile getTile();
        void setTile(Tile t, Piece p);
        void print();
        void printTiles();
};

#endif