
#include "../../../headers/chessboard.hpp"
#include <iostream>

int main(void)
{
    ChessBoard test = ChessBoard();

    std::cout << "Initial Setup\n";
    test.printBoard();
    std::cout << "\n";

    /////////////
    // Initial tests without editing the board,
    // to check if Bishops can incorrectly move over friendly pieces
    //////////////
    std::cout << "Attempting to move Top left Bishop down, result = Fail\n";
    test.move(2, 0, 2, 2, 4);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to move Top Right Bishop down, result = Fail\n";
    test.move(2, 0, 5, 2, 4);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to move Bottom Left Bishop Up, result = Fail\n";
    test.move(1, 7, 2, 5, 5);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to move Bottom Right Bishop Up, result = Fail\n";
    test.move(1, 7, 5, 5, 4);
    test.printBoard();
    std::cout << "\n";

    ///////////////////////
    // Editing Board Tests
    ///////////////////////

    // Empty Board
    std::cout << "Making the Board Empty besides some Bishops\n"; 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            test.removePiece(i, j);
        }
    }
    test.addPiece(0, 0, Piece('B', "Bishop", Bishop, 1));
    test.addPiece(0, 7, Piece('B', "Bishop", Bishop, 1));
    test.printBoard();
    std::cout << "\n";

    /////////////////////////
    // Basic Movement Tests
    ////////////////////////
    /*
    std::cout << "Moving Top Left Bishop Diagonally down, Result = Success\n";
    test.move(1, 0, 0, 7, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Bottom Right Bishop back to Top Left, Result = Success\n";
    test.move(1, 7, 7, 0, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Top Right Bishop diagonally down, Result = Success\n";
    test.move(1, 0, 7, 7, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Bottom Left Bishop back to the top left, Result = Success\n";
    test.move(1, 7, 0, 0, 7);
    test.printBoard();
    std::cout << "\n";
    */

    std::cout << "Moving Top Left Bishop Diagonally Down 1, Result = Success\n";
    test.move(1, 0, 0, 1, 1);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving former bishop up Right 1, Result = Success\n";
    test.move(1, 1, 1, 0, 2);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move the Former bishop down left 2, Result = Fail\n";
    test.move(1, 0, 2, 2, 1);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Former Bishop down left 2, Result = Success\n";
    test.move(1, 0, 2, 2, 0);
    test.printBoard();
    std::cout << "\n";
}