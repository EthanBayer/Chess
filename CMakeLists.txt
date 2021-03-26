CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12)

ADD_SUBDIRECTORY(googletest)

INCLUDE_DIRECTORIES(googletest/include)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE( unit_tests
    tests/unit_tests.cpp
    src/piece.cpp
    src/tile.cpp
)

TARGET_LINK_LIBRARIES(unit_tests gtest)
TARGET_COMPILE_DEFINITIONS(unit_tests PRIVATE gtest_disable_pthreads=ON)