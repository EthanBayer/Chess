
#include "../headers/chessboard.hpp"
#include "../headers/cpStrategies/pawn.hpp"
#include "../headers/cpStrategies/rook.hpp"
#include "../headers/cpStrategies/bishop.hpp"
#include "../headers/cpStrategies/knight.hpp"
#include "../headers/cpStrategies/queen.hpp"
#include "../headers/cpStrategies/king.hpp"
#include "../headers/cpStrategies/none.hpp"
#include <utility>

void ChessBoard::setMap()
{
    std::pair<Movements, ChessPieceStrategy*> p1;

    NoneC* z;
    ChessPieceStrategy* none = z;
    p1.first = None;
    p1.second = none;
    PieceMovements.insert(p1);

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
    pieces[1] = Piece('P', "Pawn", Pawn, 1);
    pieces[2] = Piece('R', "Rook", Rook, 1);
    pieces[3] = Piece('N', "Knight", Knight, 1);
    pieces[4] = Piece('B', "Bishop", Bishop, 1);
    pieces[5] = Piece('Q', "Queen", Queen, 1);
    pieces[6] = Piece('K', "King", King, 1);
    pieces[7] = Piece('p', "Pawn", Pawn, 2);
    pieces[8] = Piece('r', "Rook", Rook, 2);
    pieces[9] = Piece('n', "Knight", Knight, 2);
    pieces[10] = Piece('b', "Bishop", Bishop, 2);
    pieces[11] = Piece('q', "Queen", Queen, 2);
    pieces[12] = Piece('k', "King", King, 2);
}

ChessBoard::ChessBoard()
{
    name = "Chess Board";
    setMap();
    setPieces();
    initializeBoard();
}

ChessBoard::ChessBoard(std::string name)
{
    this->name = name;
    setMap();
    setPieces();
    initializeBoard();
}

int ChessBoard::getPiecesSize()
{
    return sizeof(pieces)/sizeof(pieces[0]);
}

int ChessBoard::getMapSize()
{
    return PieceMovements.size();
}

Tile ChessBoard::getTileOnBoard(int row, int col)
{
    return board[row][col];
}

void ChessBoard::printPieces()
{
    std::cout << std::endl << "Pieces" << std::endl;
    for (int i = 0; i < 13; i++)
    {
        std::cout << pieces[i].getSymbol() << " ";
    }
    std::cout << std::endl;
}

void ChessBoard::printMap()
{
    std::cout << std::endl << "Map Values" << std::endl;
    for(auto i : PieceMovements)
    {
        std::cout << i.first << std::endl;
    }
    std::cout << std::endl;
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
    for (int i = 2; i < 6; i+=2)
    {
        for(int j = 0; j < 8; j++)
        {
            if (count2 % 2 == 1)
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
    count2 = 1;
    for (int i = 3; i < 6; i+=2)
    {
        for(int j = 0; j < 8; j++)
        {
            if (count2 % 2 == 1)
            {
                board[i][j] = Tile(pieces[0], 'B');
                count2 = 2;
            }
            else
            {
                board[i][j] = Tile(pieces[0], 'W');
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
            board[6][i] = Tile(pieces[1], 'W');
            count = 2;
        }
        else
        {
            board[6][i] = Tile(pieces[1], 'B');
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
            std::cout << board[i][j].getPiece().getSymbol() << " ";
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
            std::cout << board[i][j].getColor() << " ";
        }
        std::cout << std::endl;
    }
}

void ChessBoard::move(int origRow, int origCol, int moveRow, int moveCol)
{
    
}