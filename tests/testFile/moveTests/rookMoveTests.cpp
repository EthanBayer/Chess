
#include "../../../headers/chessboard.hpp"
#include <iostream>

int main(void)
{
    ChessBoard test = ChessBoard();

    std::cout << "Initial Setup" << std::endl;
    test.printBoard();
    std::cout << "\n";

    /////////////
    //Tests without editing the board, Result = Invalid Movement
    /////////////
    std::cout << "Attempt to Move Rook from initial board, White\n";
    test.move(1, 7, 0, 4, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempt to Move Rook from initial board, Black\n";
    test.move(2, 0, 0, 3, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempt to move rook from initial board with incorrect movement, White\n";
    test.move(1, 7, 7, 4, 5);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempt to move rook from initial board with incorrect movement, Black\n";
    test.move(2, 0, 7, 3, 4);
    test.printBoard();
    std::cout << "\n";

    ///////////////////////
    // Editing Board Tests
    ///////////////////////

    // Empty Board
    std::cout << "Making the Board Empty besides a Rook\n"; 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            test.removePiece(i, j);
        }
    }
    test.addPiece(0, 0, Piece('R', "Rook", Rook, 1));
    test.printBoard();
    std::cout << "\n";

    //Testing Rook Movement Correctness (Result = Success)
    /*
    std::cout << "Moving Rook Down by 1\n";
    test.move(1, 0, 0, 1, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook Down by 2\n";
    test.move(1, 1, 0, 3, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook Down by 4\n";
    test.move(1, 3, 0, 7, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook back to start\n";
    test.move(1, 7, 0, 0, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook right by 1\n";
    test.move(1, 0, 0, 0, 1);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook right by 2\n";
    test.move(1, 0, 1, 0, 3);
    test.printBoard();
    std::cout << "\n";  

    std::cout << "Moving Rook right by 4\n";
    test.move(1, 0, 3, 0, 7);
    test.printBoard();
    std::cout << "\n"; 

    std::cout << "Moving Rook back to start\n";
    test.move(1, 0, 7, 0, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook right by 3\n";
    test.move(1, 0, 0, 0, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook down by 4\n";
    test.move(1, 0, 3, 4, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook right by 4\n";
    test.move(1, 4, 3, 4, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook down by 3\n";
    test.move(1, 4, 7, 7, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook left by 4\n";
    test.move(1, 7, 7, 7, 3);
    test.printBoard();
    std::cout << "\n"; 

    std::cout << "Moving Rook up by 3\n";
    test.move(1, 7, 3, 4, 3);
    test.printBoard();
    std::cout << "\n"; 

    std::cout << "Moving Rook left by 3\n";
    test.move(1, 4, 3, 4, 0);
    test.printBoard();
    std::cout << "\n"; 

    std::cout << "Moving Rook up by 4\n";
    test.move(1, 4, 0, 0, 0);
    test.printBoard();
    std::cout << "\n";
    */

    ///////////////////////////////
    // Attempting to break Movement
    std::cout << "Moving Rook down but with a different column\n";
    test.move(1, 0, 0, 7, 1);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook diagonal\n";
    test.move(1, 0, 0, 7, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Moving Rook right but with a different row\n";
    test.move(1, 0, 0, 1, 7);
    test.printBoard();
    std::cout << "\n";

    ////////////////////////////////
    // Testing Rook with pieces in the way (Allied pieces first)
    // Result = Fail
    test.addPiece(3, 3, Piece('R', "Rook", Rook, 1));

    test.addPiece(1, 3, Piece('R', "Rook", Rook, 1));
    test.addPiece(5, 3, Piece('R', "Rook", Rook, 1));
    test.addPiece(3, 1, Piece('R', "Rook", Rook, 1));
    test.addPiece(3, 5, Piece('R', "Rook", Rook, 1));

    test.addPiece(0, 3, Piece('r', "Rook", Rook, 2));
    test.addPiece(7, 3, Piece('r', "Rook", Rook, 2));
    test.addPiece(3, 0, Piece('r', "Rook", Rook, 2));
    test.addPiece(3, 7, Piece('r', "Rook", Rook, 2));

    std::cout << "Adjusting Board\n";
    test.printBoard();
    std::cout << "\n";

    /*
    std::cout << "Attempting to Move rook to get up enemy\n";
    test.move(1, 3, 3, 0, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook to get down enemy\n";
    test.move(1, 3, 3, 0, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook to get left enemy\n";
    test.move(1, 3, 3, 3, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook to get right enemy\n";
    test.move(1, 3, 3, 3, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook in between friendly piece and enemy to the right\n";
    test.move(1, 3, 3, 3, 6);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook between friendly piece and enemy to the bottom\n";
    test.move(1, 3, 3, 0, 6);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook on friendly piece\n";
    test.move(1, 3, 3, 3, 5);
    test.printBoard();
    std::cout << "\n";

    // Result = Succeed
    std::cout << "Attempting to Move rook up 1 before friendly\n";
    test.move(1, 3, 3, 2, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook down 2 before friendly\n";
    test.move(1, 2, 3, 4, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook up 1\n";
    test.move(1, 4, 3, 3, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook left 1 before friendly\n";
    test.move(1, 3, 3, 3, 2);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook right 2 before friendly\n";
    test.move(1, 3, 2, 3, 4);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook left 1, back to center\n";
    test.move(1, 3, 4, 3, 3);
    test.printBoard();
    std::cout << "\n";
    */

    // Similar tests to previous set but using enemy pieces only instead of allied
    // Result = fail
    test.addPiece(1, 3, Piece('r', "Rook", Rook, 2));
    test.addPiece(5, 3, Piece('r', "Rook", Rook, 2));
    test.addPiece(3, 1, Piece('r', "Rook", Rook, 2));
    test.addPiece(3, 5, Piece('r', "Rook", Rook, 2));

    std::cout << "Adjusting the board with enemy pieces instead of friendly\n";
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook to get up furthermost enemy\n";
    test.move(1, 3, 3, 0, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook to get down furthermost enemy\n";
    test.move(1, 3, 3, 0, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook to get left furthermost enemy\n";
    test.move(1, 3, 3, 3, 0);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook to get right furthermost enemy\n";
    test.move(1, 3, 3, 3, 7);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook in between two enemy pieces to the right\n";
    test.move(1, 3, 3, 3, 6);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook between two enemy pieces to the bottom\n";
    test.move(1, 3, 3, 0, 6);
    test.printBoard();
    std::cout << "\n";

    //Result = Success
    std::cout << "Attempting to Move rook up 2 on enemy\n";
    test.move(1, 3, 3, 1, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook down 4 on enemy\n";
    test.move(1, 1, 3, 5, 3);
    test.printBoard();
    std::cout << "\n"; 

    std::cout << "Attempting to Move rook up 2 back to center\n";
    test.move(1, 5, 3, 3, 3);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook left 2 on enemy\n";
    test.move(1, 3, 3, 3, 1);
    test.printBoard();
    std::cout << "\n"; 

    std::cout << "Attempting to Move rook right 4 on enemy\n";
    test.move(1, 3, 1, 3, 5);
    test.printBoard();
    std::cout << "\n";

    std::cout << "Attempting to Move rook left 2 back to center\n";
    test.move(1, 3, 5, 3, 3);
    test.printBoard();
    std::cout << "\n";
    


}