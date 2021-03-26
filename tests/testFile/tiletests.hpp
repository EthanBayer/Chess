#ifndef TILETESTS_HPP
#define TILETESTS_HPP

#include <gtest/gtest.h>
#include "../../headers/tile.hpp"

TEST (TileTests, ConstrcutorTests)
{
    Tile* test = new Tile();

    EXPECT_EQ (test->getColor(), NULL);
    EXPECT_EQ (test->getPiece().getSymbol(), '0');
    EXPECT_EQ (test->getPiece().getName(), "Empty");
    EXPECT_EQ (test->getPiece().getMovement(), None); 

    Piece p1 = Piece('T', "Rook", Rook);
    test = new Tile(p1, 'W');

    EXPECT_EQ (test->getColor(), 'W');
    EXPECT_EQ (test->getPiece().getSymbol(), 'T');
    EXPECT_EQ (test->getPiece().getName(), "Rook");
    EXPECT_EQ (test->getPiece().getMovement(), Rook); 

    p1 = Piece('X', "Pawn", Pawn);
    test = new Tile(p1, 'B');

    EXPECT_EQ (test->getColor(), 'B');
    EXPECT_EQ (test->getPiece().getSymbol(), 'X');
    EXPECT_EQ (test->getPiece().getName(), "Pawn");
    EXPECT_EQ (test->getPiece().getMovement(), Pawn); 
}

TEST (TileTests, SetPieceTests)
{
    Tile* test = new Tile();

    EXPECT_EQ (test->getColor(), NULL);
    EXPECT_EQ (test->getPiece().getSymbol(), '0');
    EXPECT_EQ (test->getPiece().getName(), "Empty");
    EXPECT_EQ (test->getPiece().getMovement(), None); 

    Piece p1 = Piece('T', "Rook", Rook);
    test->setPiece(p1);

    EXPECT_EQ (test->getColor(), NULL);
    EXPECT_EQ (test->getPiece().getSymbol(), 'T');
    EXPECT_EQ (test->getPiece().getName(), "Rook");
    EXPECT_EQ (test->getPiece().getMovement(), Rook); 

    p1 = Piece('X', "Pawn", Pawn);
    test->setPiece(p1);

    EXPECT_EQ (test->getColor(), NULL);
    EXPECT_EQ (test->getPiece().getSymbol(), 'X');
    EXPECT_EQ (test->getPiece().getName(), "Pawn");
    EXPECT_EQ (test->getPiece().getMovement(), Pawn); 

    test->setPiece(Piece());

    EXPECT_EQ (test->getColor(), NULL);
    EXPECT_EQ (test->getPiece().getSymbol(), '0');
    EXPECT_EQ (test->getPiece().getName(), "Empty");
    EXPECT_EQ (test->getPiece().getMovement(), None); 
}

TEST (TileTests, SetColorTests)
{
    Tile* test = new Tile();

    EXPECT_EQ (test->getColor(), NULL);
    EXPECT_EQ (test->getPiece().getSymbol(), '0');
    EXPECT_EQ (test->getPiece().getName(), "Empty");
    EXPECT_EQ (test->getPiece().getMovement(), None); 

    test->setColor('W');

    EXPECT_EQ (test->getColor(), 'W');
    EXPECT_EQ (test->getPiece().getSymbol(), '0');
    EXPECT_EQ (test->getPiece().getName(), "Empty");
    EXPECT_EQ (test->getPiece().getMovement(), None); 

    test->setColor('B');

    EXPECT_EQ (test->getColor(), 'B');
    EXPECT_EQ (test->getPiece().getSymbol(), '0');
    EXPECT_EQ (test->getPiece().getName(), "Empty");
    EXPECT_EQ (test->getPiece().getMovement(), None); 
}


#endif