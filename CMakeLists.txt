CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12)

ADD_SUBDIRECTORY(googletest)

INCLUDE_DIRECTORIES(googletest/include)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE( unit_tests
    tests/unit_tests.cpp
    src/piece.cpp
    src/tile.cpp
    headers/functions.hpp
)

ADD_EXECUTABLE( numbersplitter_tests 
    tests/testFile/numbersplittertest.cpp
)

ADD_EXECUTABLE( chessboard_tests
    tests/testFile/chessboard.cpp
    src/chessboard.cpp
    src/piece.cpp
    src/tile.cpp
    headers/chesspiecemovements.hpp
)

ADD_EXECUTABLE( pawnmovement_tests
    tests/testFile/moveTests/pawnMoveTests.cpp
    src/chessboard.cpp
    src/piece.cpp
    src/tile.cpp
    headers/chesspiecemovements.hpp
    headers/functions.hpp
)

ADD_EXECUTABLE( capturedpieces_tests
    tests/testFile/capturedpiecetests.cpp
    src/chessboard.cpp
    src/piece.cpp
    src/tile.cpp
)

TARGET_LINK_LIBRARIES(unit_tests gtest)
TARGET_COMPILE_DEFINITIONS(unit_tests PRIVATE gtest_disable_pthreads=ON)