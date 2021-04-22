#ifndef PIECETESTS_HPP
#define PIECETESTS_HPP

#include <gtest/gtest.h>
#include "../../headers/piece.hpp"

TEST (PieceTests, ConstrcutorTests)
{
    Piece* test = new Piece();

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), None); 

    test = new Piece('T', "Rook", Rook);

    EXPECT_EQ (test->getSymbol(), 'T');
    EXPECT_EQ (test->getName(), "Rook");
    EXPECT_EQ (test->getMovement(), Rook); 

    test = new Piece('X', "Pawn", Pawn);

    EXPECT_EQ (test->getSymbol(), 'X');
    EXPECT_EQ (test->getName(), "Pawn");
    EXPECT_EQ (test->getMovement(), Pawn);
}

TEST (PieceTests, SymbolTests)
{
    Piece* test = new Piece();

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), None);

    test->setSymbol('K');

    EXPECT_EQ (test->getSymbol(), 'K');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), None);

    test->setSymbol('F');

    EXPECT_EQ (test->getSymbol(), 'F');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), None);

    test->setSymbol('f');

    EXPECT_EQ (test->getSymbol(), 'f');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), None);
}

TEST (PieceTests, NameTests)
{
    Piece* test = new Piece();

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), None);

    test->setName("King");

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "King");
    EXPECT_EQ (test->getMovement(), None);

    test->setName("Queen");

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Queen");
    EXPECT_EQ (test->getMovement(), None);

    test->setName("Jack");

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Jack");
    EXPECT_EQ (test->getMovement(), None);
}

TEST (PieceTests, MovementTests)
{
    Piece* test = new Piece();

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), None);

    test->setMovement(Pawn);

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), Pawn);

    test->setMovement(Bishop);

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), Bishop);

    test->setMovement(King);

    EXPECT_EQ (test->getSymbol(), '0');
    EXPECT_EQ (test->getName(), "Empty");
    EXPECT_EQ (test->getMovement(), King);
}

#endif
