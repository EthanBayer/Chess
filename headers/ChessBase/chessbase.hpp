#ifndef CHESSBASE_HPP
#define CHESSBASE_HPP

#include <iostream>
#include <array>
#include "../structures.hpp"

class ChessPieceStrategy;
struct Tile;

class ChessBase
{
    private:
        char representation;
        std::string name;
        ChessPieceStrategy* PieceStart;
        std::array<std::array<Tile, 8>, 8> Board;

    public:
        ChessBase();
        ChessBase(char r, std::string name);
        ChessBase(char r, std::string name, ChessPieceStrategy* ps);
        char getRep();
        std::string getName();
        ChessPieceStrategy* getPieceStrat();
        std::array<std::array<Tile, 8>, 8> getBoard();
        void setRep(char r);
        void setName(std::string n);
        void setPieceStrat(ChessPieceStrategy* ps);
        virtual void print();
};

#endif