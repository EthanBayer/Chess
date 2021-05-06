#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include <iostream>
#include "tile.hpp"
#include <map>
#include <iterator>
#include <array>
#include "cpStrategies/chesspiecestrategy.hpp"

class ChessPieceStrategy;

class ChessBoard
{
    private:
        std::string name;
        Tile board[8][8];
        std::map<Movements, ChessPieceStrategy*> PieceMovements;
        Piece pieces[13];
        void setMap();
        void setPieces();
    
    public:
        ChessBoard();
        ChessBoard(std::string name);
        int getPiecesSize();
        int getMapSize();
        Tile getTileOnBoard(int row, int col);
        void printPieces();
        void printMap();
        void setName(std::string name);
        std::string getName();
        void initializeBoard();
        void printBoard();
        void printTiles();
        void printPlayer();
        void move(int turn, int origRow, int origCol, int moveRow, int moveCol);
};

#endif