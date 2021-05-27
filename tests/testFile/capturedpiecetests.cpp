#include "../../headers/chessboard.hpp"
#include <iostream>

int main(void)
{
    ChessBoard test = ChessBoard();

    Piece blackp = Piece('p', "Pawn", Pawn, 2);
    Piece whitep = Piece('P', "Pawn", Pawn, 1);

    // Test 1
    std::cout << std::endl << "Test 1" << std::endl;
    test.testAddBlackCapturedPiece(blackp);
    test.testAddBlackCapturedPiece(blackp);

    test.testAddWhiteCapturedPiece(whitep);
    test.testAddWhiteCapturedPiece(whitep);

    test.printCapturedWhitePieces();
    std::cout << std::endl;
    test.printCapturedBlackPieces();
    std::cout << std::endl;

    // Test 2
    std::cout << "Test 2" << std::endl;
    test.testAddBlackCapturedPiece(Piece('n', "Knight", Knight, 2));
    test.testAddBlackCapturedPiece(Piece('r', "Rook", Rook, 2));

    test.printCapturedBlackPieces();
    std::cout << std::endl;

    // Test 3
    std::cout << "Test 3" << std::endl;
    test.testAddBlackCapturedPiece(Piece('p', "Pawn", Pawn, 2));
    test.testAddBlackCapturedPiece(Piece('r', "Rook", Rook, 2));

    test.printCapturedBlackPieces();
    std::cout << std::endl;

    //Test 4
    std::cout << "Test 4" << std::endl;
    test.testAddWhiteCapturedPiece(Piece('B', "Bishop", Bishop, 1));
    test.testAddWhiteCapturedPiece(Piece('Q', "Queen", Queen, 1));

    test.printCapturedWhitePieces();
    


}