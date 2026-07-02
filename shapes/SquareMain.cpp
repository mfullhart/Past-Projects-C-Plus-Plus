#include <iostream>
#include "Square.h"
#include "Square.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Shape.h"
#include "Shape.cpp"

int SquareMain() {
    // Test Square class
    Square square1(5.0); // Create a square with length 5.0
    Square square2(3.0); // Create a square with length 3.0

    std::cout << "Square 1: " << square1.str() << std::endl;
    std::cout << "Square 2: " << square2.str() << std::endl;

    // Test getters
    std::cout << "Square 1 length: " << square1.get_length() << std::endl;
    std::cout << "Square 1 width: " << square1.get_width() << std::endl;

    // Test setters
    square1.set_length(6.0);
    std::cout << "Square 1 after set_length(6.0): " << square1.str() << std::endl;

    square1.set_width(7.0); // Should also update length since it's a square
    std::cout << "Square 1 after set_width(7.0): " << square1.str() << std::endl;

    // Test perimeter and area
    std::cout << "Square 1 perimeter: " << square1.calc_perimeter() << std::endl;
    std::cout << "Square 1 area: " << square1.calc_area() << std::endl;

    // Test compound assignment operators
    square1 += 2.0;
    std::cout << "Square 1 after += 2.0: " << square1.str() << std::endl;

    square1 -= 1.0;
    std::cout << "Square 1 after -= 1.0: " << square1.str() << std::endl;

    square1 *= 2.0;
    std::cout << "Square 1 after *= 2.0: " << square1.str() << std::endl;

    square1 /= 4.0;
    std::cout << "Square 1 after /= 4.0: " << square1.str() << std::endl;

    // Test equality and inequality operators
    std::cout << "Square 1 == Square 2: " << (square1 == square2) << std::endl;
    std::cout << "Square 1 != Square 2: " << (square1 != square2) << std::endl;

    // Test Square and Rectangle comparison
    Rectangle rectangle(8.0, 8.0); // Create a rectangle with length 8.0 and width 8.0
    std::cout << "Rectangle: " << rectangle.str() << std::endl;

    std::cout << "Square 1 == Rectangle: " << (square1 == rectangle) << std::endl;
    std::cout << "Square 1 != Rectangle: " << (square1 != rectangle) << std::endl;
    std::cout << "Rectangle == Square 1: " << (rectangle == square1) << std::endl;
    std::cout << "Rectangle != Square 1: " << (rectangle != square1) << std::endl;

    return 0;
}