
#include "../../../headers/chessboard.hpp"
#include <iostream>

int main(void)
{
    ChessBoard test = ChessBoard();

    std::cout << "Initial Board " << std::endl;
    test.printBoard();
    std::cout << std::endl;

    // Set tests to check the validity of the Pawn movement function
    
    // Checking straight movements
    std::cout << "Pawn Move 1 from Start, white" << std::endl;
    test.move(1, 6, 0, 5, 0);
    test.printBoard();
    std::cout << std::endl;
    
    std::cout << "Pawn Move 1 from start, black" << std::endl;
    test.move(2, 1, 0, 2, 0);
    test.printBoard();
    std::cout << std::endl;
    
    std::cout << "Pawn move 2 from start, White" << std::endl;
    test.move(1, 6, 1, 4, 1);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn move 2 from start, black" << std::endl;
    test.move(2, 1, 1, 3, 1);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move 2 not from start, white" << std::endl;
    test.move(1, 5, 0, 3, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move 2 not from start, black" << std::endl;
    test.move(2, 2, 0, 4, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move with enemy piece in front, white" << std::endl;
    test.move(1, 4, 1, 3, 1);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move with enemy piece in front, black" << std::endl;
    test.move(2, 3, 1, 4, 1);
    test.printBoard();
    std::cout << std::endl;

    // Checking diagonal movements
    std::cout << "Pawn attempt to move diagonal left with no piece there, white" << std::endl;
    test.move(1, 4, 1, 3, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move diagonal right with no piece there, white" << std::endl;
    test.move(1, 4, 1, 3, 2);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move diagonal left with no piece there, black" << std::endl;
    test.move(2, 3, 1, 4, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move diagonal right with no piece there, black" << std::endl;
    test.move(2, 3, 1, 4, 2);
    test.printBoard();
    std::cout << std::endl;

    //Setting pieces to check diagonal movement but with friendly pieces in the way
    std::cout << "Adjusting the Board for diagonal testing with friendly pieces" << std::endl;
    test.addPiece(3, 0, Piece('P', "Pawn", Pawn, 1));
    test.addPiece(3, 2, Piece('P', "Pawn", Pawn, 1));
    test.addPiece(4, 0, Piece('p', "Pawn", Pawn, 2));
    test.addPiece(4, 2, Piece('p', "Pawn", Pawn, 2));
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move diagonal left with friendly piece there, white" << std::endl;
    test.move(1, 4, 1, 3, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move diagonal right with friendly piece there, white" << std::endl;
    test.move(1, 4, 1, 3, 2);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move diagonal left with friendly piece there, black" << std::endl;
    test.move(2, 3, 1, 4, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn attempt to move diagonal right with firendly piece there, black" << std::endl;
    test.move(2, 3, 1, 4, 2);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Adjusting the Board to check diagonal movement." << std::endl;
    test.addPiece(3, 0, Piece('p', "Pawn", Pawn, 2));
    test.addPiece(3, 2, Piece('p', "Pawn", Pawn, 2));
    test.addPiece(4, 0, Piece('P', "Pawn", Pawn, 1));
    test.addPiece(4, 2, Piece('P', "Pawn", Pawn, 1));

    test.addPiece(3, 3, Piece('p', "Pawn", Pawn, 2));
    test.addPiece(3, 5, Piece('p', "Pawn", Pawn, 2));
    test.addPiece(4, 3, Piece('P', "Pawn", Pawn, 1));
    test.addPiece(4, 5, Piece('P', "Pawn", Pawn, 1));

    test.addPiece(3, 4, Piece('p', "Pawn", Pawn, 2));
    test.addPiece(4, 4, Piece('P', "Pawn", Pawn, 1));
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn to move diagonal left with enemy piece there, white" << std::endl;
    test.move(1, 4, 1, 3, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn to move diagonal right with enemy piece there, white" << std::endl;
    test.move(1, 4, 4, 3, 5);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn  to move diagonal left with enemy piece there, black" << std::endl;
    test.move(2, 3, 4, 4, 3);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn to move diagonal right with enemy piece there, black" << std::endl;
    test.move(2, 3, 1, 4, 2);
    test.printBoard();
    std::cout << std::endl;

    //Checking Pawn out of bounds
    std::cout << "Pawn to move diagonal out of board, white" << std::endl;
    test.move(1, 6, 7, 5, 8);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Pawn to move diagonal out of board, black" << std::endl;
    test.move(2, 1, 7, 2, 8);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Selecting piece outside of bounds" << std::endl;
    test.move(1, 8, 9, 1, 9);
    test.printBoard();
    std::cout << std::endl;

    //Misc tests
    std::cout << "Adjusting the board" << std::endl;
    test.addPiece(4, 7, Piece('P', "Pawn", Pawn, 1));
    test.addPiece(3, 7, Piece('p', "Pawn", Pawn, 2));
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move a Pawn up two from start with friendly piece in the way, white" << std::endl;
    test.move(1, 6, 7, 4, 7);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move a Pawn up two from start with friendly piece in the way, black" << std::endl;
    test.move(1, 1, 7, 3, 7);
    test.printBoard();
    std::cout << std::endl;

    //Moving back tests
    std::cout << "Attempt to move pawn backwards, white" << std::endl;
    test.move(1, 4, 5, 5, 5);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move pawn backwards, black" << std::endl;
    test.move(2, 3, 2, 2, 2);
    test.printBoard();
    std::cout << std::endl;

    //Hitting the end of the board tests
    std::cout << "Adjusting the Board" << std::endl;
    test.addPiece(1, 6, Piece('P', "Pawn", Pawn, 1));
    test.removePiece(0, 6);
    test.addPiece(6, 6, Piece('p', "Pawn", Pawn, 2));
    test.removePiece(7, 6);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move pawn up to end of the board, white" << std::endl;
    test.move(1, 1, 6, 0, 6);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move pawn up to end of the board, black" << std::endl;
    test.move(2, 6, 6, 7, 6);
    test.printBoard();
    std::cout << std::endl;

    //Random Tests
    std::cout << "Attempt to move pawn, white" << std::endl;
    test.move(1, 3, 5, 2, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move pawn, white" << std::endl;
    test.move(1, 3, 5, 2, 7);
    test.printBoard();
    std::cout << std::endl; 

    std::cout << "Attempt to move pawn, white" << std::endl;
    test.move(1, 3, 5, 0, 5);
    test.printBoard();
    std::cout << std::endl; 

    std::cout << "Attempt to move pawn, black" << std::endl;
    test.move(2, 3, 2, 4, 0);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move pawn, black" << std::endl;
    test.move(2, 3, 2, 4, 7);
    test.printBoard();
    std::cout << std::endl; 

    std::cout << "Attempt to move pawn, black" << std::endl;
    test.move(2, 3, 2, 6, 2);
    test.printBoard();
    std::cout << std::endl; 


    // Other
    std::cout << "Adjusting the board" << std::endl;
    test.addPiece(5, 4, Piece('P', "Pawn", Pawn, 1));
    test.addPiece(2, 4, Piece('p', "Pawn", Pawn, 2));
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move pawn past friendly pawn, white" << std::endl;
    test.move(1, 6, 4, 4, 4);
    test.printBoard();
    std::cout << std::endl;

    std::cout << "Attempt to move pawn past friendly pawn, black" << std::endl;
    test.move(2, 1, 4, 3, 4);
    test.printBoard();
    std::cout << std::endl;
}


