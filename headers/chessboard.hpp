#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include <iostream>
#include "tile.hpp"
#include <map>
#include <iterator>

class ChessPieceStrategy;

class ChessBoard
{
    private:
        std::string name;
        Tile board[8][8];
        std::map<Movements, ChessPieceStrategy*> PieceMovements;

    
    public:
        ChessBoard();
        ChessBoard(std::string name);
        void setName(std::string name);
        std::string getName();
        void initializeBoard();
        void printBoard();
        void move(int origRow, int origCol, int moveRow, int moveCol);
};

#endif