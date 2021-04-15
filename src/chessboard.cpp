
#include "../headers/chessboard.hpp"
#include "../headers/cpStrategies/pawn.hpp"
#include "../headers/cpStrategies/rook.hpp"
#include "../headers/cpStrategies/bishop.hpp"
#include "../headers/cpStrategies/knight.hpp"
#include "../headers/cpStrategies/queen.hpp"
#include "../headers/cpStrategies/king.hpp"
#include <utility>

void ChessBoard::setMap()
{
    std::pair<Movements, ChessPieceStrategy*> p1;

    PawnC* p;
    ChessPieceStrategy* pawn = p;
    p1.first = Pawn;
    p1.second = pawn;
    PieceMovements.insert(p1);

    RookC* r;
    ChessPieceStrategy* rook = r;
    p1.first = Rook;
    p1.second = rook;
    PieceMovements.insert(p1);

    BishopC* b;
    ChessPieceStrategy* bishop = b;
    p1.first = Bishop;
    p1.second = bishop;
    PieceMovements.insert(p1);

    KnightC* n;
    ChessPieceStrategy* knight = n;
    p1.first = Knight;
    p1.second = n;
    PieceMovements.insert(p1);

    QueenC* q;
    ChessPieceStrategy* queen = q;
    p1.first = Queen;
    p1.second = queen;
    PieceMovements.insert(p1); 

    KingC* k;
    ChessPieceStrategy* king = k;
    p1.first =King;
    p1.second = king;
    PieceMovements.insert(p1);
}

void ChessBoard::setPieces()
{
    pieces[0] = Piece();
    pieces[1] = Piece('P', "Pawn", Pawn);
    pieces[2] = Piece('R', "Rook", Rook);
    pieces[3] = Piece('N', "Knight", Knight);
    pieces[4] = Piece('B', "Bishop", Bishop);
    pieces[5] = Piece('Q', "Queen", Queen);
    pieces[6] = Piece('K', "King", King);
    pieces[7] = Piece('p', "Pawn", Pawn);
    pieces[8] = Piece('r', "Rook", Rook);
    pieces[9] = Piece('n', "Knight", Knight);
    pieces[10] = Piece('b', "Bishop", Bishop);
    pieces[11] = Piece('q', "Queen", Queen);
    pieces[12] = Piece('k', "King", King);
}

ChessBoard::ChessBoard()
{
    name = "Chess Board";
    setMap();
    setPieces();
}

ChessBoard::ChessBoard(std::string name)
{
    this->name = name;
    setMap();
    setPieces();
}

void ChessBoard::setName(std::string name)
{
    this->name = name;
}

std::string ChessBoard::getName()
{
    return name;
}

void ChessBoard::initializeBoard()
{
    //Sets top black pieces
    board[0][0] = Tile(pieces[8], 'W');
    board[0][1] = Tile(pieces[9], 'B');
    board[0][2] = Tile(pieces[10], 'W');
    board[0][3] = Tile(pieces[11], 'B');
    board[0][4] = Tile(pieces[12], 'W');
    board[0][5] = Tile(pieces[10], 'B');
    board[0][6] = Tile(pieces[9], 'W');
    board[0][7] = Tile(pieces[8], 'B');
    
    //Sets the black pawns
    int count = 1;
    for (int i = 0; i < 8; i++)
    {
        if(count % 2 == 1)
        {
            board[1][i] = Tile(pieces[7], 'B');
            count = 2;
        }
        else
        {
            board[1][i] = Tile(pieces[7], 'W');
            count = 1;
        }
    }

    //Sets the 4 X 8 series of blank spaces
    int count2 = 1;
    int modEquals;
    for (int i = 2; i < 6; i++)
    {
        if (i == 3 || i == 5)
        {
            modEquals = 2;
        }
        else
        {
            modEquals = 1;
        }

        for(int j = 0; j < 8; j++)
        {
            if (count2 % 2 == modEquals)
            {
                board[i][j] = Tile(pieces[0], 'W');
                count2 = 2;
            }
            else
            {
                board[i][j] = Tile(pieces[0], 'B');
                count2 = 1;
            }
        }
    }

    //Sets the white pawns
    count = 1;
    for (int i = 0; i < 8; i++)
    {
        if(count % 2 == 1)
        {
            board[1][i] = Tile(pieces[1], 'W');
            count = 2;
        }
        else
        {
            board[1][i] = Tile(pieces[1], 'B');
            count = 1;
        }
    }

    //Sets bottom white pieces
    board[7][0] = Tile(pieces[2], 'B');
    board[7][1] = Tile(pieces[3], 'W');
    board[7][2] = Tile(pieces[4], 'B');
    board[7][3] = Tile(pieces[5], 'W');
    board[7][4] = Tile(pieces[6], 'B');
    board[7][5] = Tile(pieces[4], 'W');
    board[7][6] = Tile(pieces[3], 'B');
    board[7][7] = Tile(pieces[2], 'W');
}

void ChessBoard::printBoard()
{
    std::cout << std::endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cout << board[i][j].getPiece().getSymbol() << " " << std::endl;
        }
        std::cout << std::endl;
    }
}

void ChessBoard::printTiles()
{
    std::cout << std::endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cout << board[i][j].getColor() << " " << std::endl;
        }
        std::cout << std::endl;
    }
}