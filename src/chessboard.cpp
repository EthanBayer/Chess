
#include "../headers/chessboard.hpp"
#include "../headers/chesspiecemovements.hpp"
#include <utility>

// Helper function to initialize the pieces used by the board
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

// Helper function to swap two pieces
// Handles a swap between to enemy pieces
// Handles a swap between a piece and an empty space
void ChessBoard::swapPieces(int origRow, int origCol, int moveRow, int moveCol)
{
    Piece p = Piece();
    Piece p1 = board[origRow][origCol].getPiece();
    Piece p2 = board[moveRow][moveCol].getPiece();

    // Check to see if the tile has a enemy piece
    if (p2.getPlayer() != 0)
    {
        if (p2.getPlayer() == 1)  
        {
            whitePieces.push_back(p2);
            board[moveRow][moveCol].setPiece(p1);
            board[origRow][origCol].setPiece(p);

        }
        else
        {
            blackPieces.push_back(p2);
            board[moveRow][moveCol].setPiece(p1);
            board[origRow][origCol].setPiece(p); 
        }
    }
    else
    {
        board[moveRow][moveCol].setPiece(p1);
        board[origRow][origCol].setPiece(p); 
    }
}

ChessBoard::ChessBoard()
{
    name = "Chess Board";
    setPieces();
    initializeBoard();
}

ChessBoard::ChessBoard(std::string name)
{
    this->name = name;
    setPieces();
    initializeBoard();
}

// Function to print the size of the array holding the pieces
int ChessBoard::getPiecesSize()
{
    return sizeof(pieces)/sizeof(pieces[0]);
}

// Function to acquire a specific tile on the board
Tile ChessBoard::getTileOnBoard(int row, int col)
{
    return board[row][col];
}

// Function to print the chess pieces, mainly for testing
void ChessBoard::printPieces()
{
    std::cout << std::endl << "Pieces" << std::endl;
    for (int i = 0; i < 13; i++)
    {
        std::cout << pieces[i].getSymbol() << " ";
    }
    std::cout << std::endl;
}

// Function to return the point value of a given Chess piece (using common values)
int ChessBoard::scoreTally(Movements num)
{
    switch (num)
    {
        case 1:
            return 1;
            break;
        case 3:
            return 3;
            break;
        case 4:
            return 3;
            break;
        case 2:
            return 5;
            break;
        case 5:
            return 9;
            break;
        default:
            return 0;
            break;
    }
}

/////////////////////////////////////////////////////////////////////////

// Function to set the board Name 
void ChessBoard::setName(std::string name)
{
    this->name = name;
}

// Function to get the chessboard's name
std::string ChessBoard::getName()
{
    return name;
}

// Initializes the board's pieces
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

// Function to print the piece symbols on the board
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

// Function to print the color of the tiles
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

// Function to print player designation of the pieces
void ChessBoard::printPlayer()
{
    std::cout << std::endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cout << board[i][j].getPiece().getPlayer() << " ";
        }
        std::cout << std::endl;
    }
}

// Function to print out the captured white pieces 
void ChessBoard::printCapturedWhitePieces()
{
    int score = 0;

    if (whitePieces.size() == 0)
    {
        std::cout << "No White pieces have been captured" << std::endl;
    }
    else
    {
        score = 0;
        std::cout << "White Pieces Captured: ";
        for (int i = 0; i < whitePieces.size(); i++)
        {
            score += scoreTally(whitePieces.at(i).getMovement());
            std::cout << whitePieces.at(i).getSymbol() << " ";
        }
        std::cout << std::endl << "Current Black Player Score: " << score << std::endl;
    }
}

// Function to print out the captured black pieces
void ChessBoard::printCapturedBlackPieces()
{
    int score = 0;

    if (blackPieces.size() == 0)
    {
        std::cout << "No Black pieces have been captured" << std::endl;
    }
    else
    {
        score = 0;
        std::cout << "Black Pieces Captured: ";
        for (int i = 0; i < blackPieces.size(); i++)
        {
            score += scoreTally(blackPieces.at(i).getMovement());
            std::cout << blackPieces.at(i).getSymbol() << " ";
        }
        std::cout << std::endl << "Current White Player Score: " << score << std::endl;
    }
}

// Return 2 if user needs to re-eneter information
// Return 1 if move is complete and no repeat information is needed
int ChessBoard::move(int turn, int origRow, int origCol, int moveRow, int moveCol)
{
    Piece ogPiece = board[origRow][origCol].getPiece();
    Piece nwPiece = board[moveRow][moveCol].getPiece();

    char playerAnswer;

    //DEBUG
    //std::cout << *PieceMovements[3] << std::endl;
    std::cout << "Check" << std::endl;
    std::cout << ogPiece.getMovement() << std::endl;

    int checkMove = moveSelect(ogPiece.getMovement(), this, turn, origRow, origCol, moveRow, moveCol);

    if (checkMove == 1)
    {
        std::cout << "Would you like to perform the movement (y/n): ";
        std::cin >> playerAnswer;
        std::cout << std::endl;

        if (playerAnswer == 'y')
        {
            swapPieces(origRow, origCol, moveRow, moveCol);
            return 1;
        }
        else
        {
            return 2;
        }
    }

    if (checkMove == 2)
    {
        std::cout << "You are trying to perform an invalid movement, please select again." << std::endl;
        return 2;
    }

    if (checkMove == 3)
    {
        std::cout << "You are not selecting an appropriate piece, please select again." << std::endl;
        return 2;
    }
}


/////////////////////////////////////////////
// TEST Functions
/////////////////////////////////////////////

void ChessBoard::testAddWhiteCapturedPiece(Piece p)
{
    whitePieces.push_back(p);
}

void ChessBoard::testAddBlackCapturedPiece(Piece p)
{
    blackPieces.push_back(p);
}