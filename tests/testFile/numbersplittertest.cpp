
#include "../../headers/functions.hpp"
#include <iostream>

int main(void)
{
    Position test;
    test = getPosition(1);

    std::cout << "Test Position: " << 1 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;

    test = getPosition(8);

    std::cout << "Test Position: " << 8 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;

    test = getPosition(11);

    std::cout << "Test Position: " << 11 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;

    test = getPosition(18);

    std::cout << "Test Position: " << 18 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;

    test = getPosition(21);

    std::cout << "Test Position: " << 21 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;

    test = getPosition(28);

    std::cout << "Test Position: " << 28 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;

    test = getPosition(71);

    std::cout << "Test Position: " << 71 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;

    test = getPosition(78);

    std::cout << "Test Position: " << 78 << std::endl;
    std::cout << "Test Row: " << test.row << std::endl;
    std::cout << "Test Col: " << test.col << std::endl;
}