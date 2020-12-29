#ifndef TILETESTS_HPP
#define TILETESTS_HPP

#include <gtest/gtest.h>
#include "../../headers/tile.hpp"
#include "../../headers/piece.hpp"

TEST (TileTests, getColorTest)
{
    Tile* test = new Tile();

    EXPECT_EQ (test->getColor(), "N");

    test->setColor("B");

    EXPECT_EQ (test->getColor(), "B");

    test->setColor("W");

    EXPECT_EQ (test->getColor(), "W");

    Tile* newTest = new Tile(new Piece(), "O");

    EXPECT_EQ (newTest->getColor(), "O");
}

#endif