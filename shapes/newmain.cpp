#include <iostream>
#include <stdexcept>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "RightTriangle.h"

void test_circle() {
    std::cout << "=== Testing Circle Class ===\n";

    // Test default constructor
    Circle c1;
    std::cout << "Default circle: " << c1 << std::endl;
    std::cout << "Radius: " << c1.get_radius() << std::endl;
    std::cout << "Diameter: " << c1.calc_diameter() << std::endl;
    std::cout << "Circumference: " << c1.calc_circumference() << std::endl;
    std::cout << "Area: " << c1.calc_area() << std::endl << std::endl;

    // Test parameterized constructor
    Circle c2(3.5);
    std::cout << "Circle with radius 3.5: " << c2 << std::endl;
    std::cout << "Area: " << c2.calc_area() << std::endl << std::endl;

    // Test copy constructor
    Circle c3(c2);
    std::cout << "Copied circle: " << c3 << std::endl << std::endl;

    // Test operators
    c3 += 1.5;
    std::cout << "After += 1.5: " << c3 << std::endl;
    c3 *= 2;
    std::cout << "After *= 2: " << c3 << std::endl;
    c3 /= 2;
    std::cout << "After /= 2: " << c3 << std::endl << std::endl;

    // Test exceptions
    try {
        Circle invalid(0); // Should throw
        std::cout << "ERROR: Shouldn't reach here\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught expected exception (invalid radius): " << e.what() << std::endl;
    }

    try {
        c3 -= 10; // Should throw range_error
        std::cout << "ERROR: Shouldn't reach here\n";
    } catch (const std::range_error& e) {
        std::cout << "Caught expected exception (negative radius): " << e.what() << std::endl;
    }

    try {
        c3 /= 0; // Should throw domain_error
        std::cout << "ERROR: Shouldn't reach here\n";
    } catch (const std::domain_error& e) {
        std::cout << "Caught expected exception (division by zero): " << e.what() << std::endl;
    }

    std::cout << "\n";
}

void test_right_triangle() {
    std::cout << "=== Testing RightTriangle Class ===\n";

    // Test default constructor
    RightTriangle rt1;
    std::cout << "Default triangle: " << rt1 << std::endl;
    std::cout << "Base: " << rt1.get_base() << ", Height: " << rt1.get_height() << std::endl;
    std::cout << "Hypotenuse: " << rt1.calc_hypotenuse() << std::endl;
    std::cout << "Perimeter: " << rt1.calc_perimeter() << std::endl;
    std::cout << "Area: " << rt1.calc_area() << std::endl << std::endl;

    // Test parameterized constructor
    RightTriangle rt2(3.0, 4.0);
    std::cout << "3-4-5 triangle: " << rt2 << std::endl;
    std::cout << "Hypotenuse: " << rt2.calc_hypotenuse() << " (should be 5.0)\n";
    std::cout << "Area: " << rt2.calc_area() << " (should be 6.0)\n\n";

    // Test copy constructor
    RightTriangle rt3(rt2);
    std::cout << "Copied triangle: " << rt3 << std::endl << std::endl;

    // Test setters
    rt3.set_base(5.0);
    rt3.set_height(12.0);
    std::cout << "Modified to 5-12-13 triangle: " << rt3 << std::endl;
    std::cout << "New hypotenuse: " << rt3.calc_hypotenuse() << " (should be 13.0)\n\n";

    // Test operators
    rt3 += 1.0;
    std::cout << "After += 1.0: " << rt3 << std::endl;
    rt3 *= 2;
    std::cout << "After *= 2: " << rt3 << std::endl;
    rt3 /= 2;
    std::cout << "After /= 2: " << rt3 << std::endl << std::endl;

    // Test exceptions
    try {
        RightTriangle invalid(0, 1); // Should throw
        std::cout << "ERROR: Shouldn't reach here\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught expected exception (invalid base): " << e.what() << std::endl;
    }

    try {
        rt3 -= 10; // Should throw range_error
        std::cout << "ERROR: Shouldn't reach here\n";
    } catch (const std::range_error& e) {
        std::cout << "Caught expected exception (negative dimensions): " << e.what() << std::endl;
    }

    try {
        rt3 /= 0; // Should throw domain_error
        std::cout << "ERROR: Shouldn't reach here\n";
    } catch (const std::domain_error& e) {
        std::cout << "Caught expected exception (division by zero): " << e.what() << std::endl;
    }

    std::cout << "\n";
}

void test_polymorphism() {
    std::cout << "=== Testing Polymorphism ===\n";

    Shape* shapes[] = {
        new Circle(2.0),
        new RightTriangle(3.0, 4.0),
        new Rectangle(2.0, 3.0),
        new Square(4.0)
    };

    for (Shape* shape : shapes) {
        std::cout << *shape << "\n";
        std::cout << "Area: " << shape->calc_area() << "\n";
        std::cout << "Perimeter: " << shape->calc_perimeter() << "\n\n";
        delete shape;
    }
}

int newmain() {
    test_circle();
    test_right_triangle();
    test_polymorphism();

    return 0;
}