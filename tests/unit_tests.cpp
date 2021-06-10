#include <gtest/gtest.h>

#include "testFile/piecetests.hpp"
#include "testFile/tiletests.hpp"
#include "testFile/checkPositionsTest.hpp"


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}