#include <gtest/gtest.h>

#include "testFiles/chessbasetests.hpp"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}