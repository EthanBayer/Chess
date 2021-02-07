CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12)

ADD_SUBDIRECTORY(googletest)

INCLUDE_DIRECTORIES(googletest/include)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE( unit_test
    test/unit_tests.cpp
    src/ChessBase/chessbase.cpp
    #src/tile.cpp
)

TARGET_LINK_LIBRARIES(unit_test gtest)
TARGET_COMPILE_DEFINITIONS(unit_test PRIVATE gtest_disable_pthreads=ON)