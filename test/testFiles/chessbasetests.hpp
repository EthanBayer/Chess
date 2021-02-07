#ifndef CHESSBASETESTS_HPP
#define CHESSBASETESTS_HPP

#include <gtest/gtest.h>
#include "../../headers/ChessBase/chessbase.hpp"

TEST (ChessBaseTests, BasicConstructorTest)
{
    ChessBase* test1 = new ChessBase();

    EXPECT_EQ (test1->getRep(), '0');
    EXPECT_EQ (test1->getName(), "No Name");
    EXPECT_EQ (test1->getPieceStrat(), nullptr);

    ChessBase* test2 = new ChessBase('X', "Red");

    EXPECT_EQ (test2->getRep(), 'X');
    EXPECT_EQ (test2->getName(), "Red");
    EXPECT_EQ (test2->getPieceStrat(), nullptr);

    ChessBase* test3 = new ChessBase('O', "White");

    EXPECT_EQ (test3->getRep(), 'O');
    EXPECT_EQ (test3->getName(), "White");
    EXPECT_EQ (test3->getPieceStrat(), nullptr);
}

TEST (ChessBaseTests, BasicSetTest)
{
    ChessBase* test1 = new ChessBase();

    EXPECT_EQ (test1->getRep(), '0');
    EXPECT_EQ (test1->getName(), "No Name");
    EXPECT_EQ (test1->getPieceStrat(), nullptr);

    test1->setRep('X');

    EXPECT_EQ (test1->getRep(), 'X');
    EXPECT_EQ (test1->getName(), "No Name");
    EXPECT_EQ (test1->getPieceStrat(), nullptr);

    test1->setName("This is a Piece");

    EXPECT_EQ (test1->getRep(), 'X');
    EXPECT_EQ (test1->getName(), "This is a Piece");
    EXPECT_EQ (test1->getPieceStrat(), nullptr);

    test1->setRep('O');
    test1->setName("A New Piece");

    EXPECT_EQ (test1->getRep(), 'O');
    EXPECT_EQ (test1->getName(), "A New Piece");
    EXPECT_EQ (test1->getPieceStrat(), nullptr);
}

#endif