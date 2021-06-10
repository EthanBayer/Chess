#ifndef CHECKPOSITIONSTEST_HPP
#define CHECKPOSITIONSTEST_HPP

#include <gtest/gtest.h>
#include "../../headers/functions.hpp"

TEST (CheckPositionTests, Test1)
{
    EXPECT_EQ (checkPositions(3, 4, 5, 6), 1);
    EXPECT_EQ (checkPositions(1, 6, 7, 2), 1);
    EXPECT_EQ (checkPositions(5, 5, 6, 7), 1);
}

TEST (checkPositionTests, Test2)
{
    EXPECT_EQ (checkPositions(2, 1, 0, 3), 1);
    EXPECT_EQ (checkPositions(-1, 3, 4, 5), 3);
    EXPECT_EQ (checkPositions(1, 8, 3, 5), 3);
    EXPECT_EQ (checkPositions(1, 6, 7, 0), 1);
}

TEST (checkPositionTests, Test3)
{
    EXPECT_EQ (checkPositions(-2, 4, 5, 6), 3);
    EXPECT_EQ (checkPositions(1, 8, 7, 2), 3);
    EXPECT_EQ (checkPositions(5, 5, 6, 9), 3);
}

#endif
