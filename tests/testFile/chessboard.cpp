
#include "../../headers/chessboard.hpp"
#include <iostream>

int main(void)
{
    ChessBoard test = ChessBoard();

    std::cout << "Pieces size: " << test.getPiecesSize() << std::endl;
    //std::cout << "Map Size: " << test.getMapSize() << std::endl;

    test.printPieces();
    //test.printMap();

    test.setName("Test Board");

    std::cout << test.getName() << " Values: " << std::endl;
    test.printBoard();
    std::cout << std::endl;

    std::cout << test.getName() << " Tiles: " << std::endl;
    test.printTiles();
    std::cout << std::endl;

    std::cout << test.getName() << " Player denominations: " << std::endl;
    test.printPlayer();
    std::cout << std::endl;

    std::cout << "Testing a move " << std::endl;
    test.move(1, 7, 1, 5, 2);
    test.printBoard();
}