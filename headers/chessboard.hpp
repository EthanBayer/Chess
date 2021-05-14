#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include <iostream>
#include "tile.hpp"
#include <map>
#include <iterator>
#include <array>
#include <vector>

class ChessBoard
{
    private:
        std::string name;
        Tile board[8][8];
        Piece pieces[13];
        std::vector<Piece> whitePieces;
        std::vector<Piece> blackPieces;
        void setPieces();
        void swapPieces(int origRow, int origCol, int moveRow, int moveCol);
    
    public:
        ChessBoard();
        ChessBoard(std::string name);
        int getPiecesSize();
        Tile getTileOnBoard(int row, int col);
        void printPieces();
        void setName(std::string name);
        std::string getName();
        void initializeBoard();
        void printBoard();
        void printTiles();
        void printPlayer();
        int move(int turn, int origRow, int origCol, int moveRow, int moveCol);
};

#endif