#include <iostream>
#include <vector>
#include <stdexcept>
#include "Shape.h"
#include "Shape.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Square.h"
#include "Square.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "RightTriangle.h"
#include "RightTriangle.cpp"

using namespace std;

void testCircle() {
    cout << "=== Testing Circle Class ===" << endl;

    try {
        // Test constructors
        Circle c1(5.0);
        Circle c2(c1);
        Circle c3;

        cout << "c1: " << c1.str() << endl;
        cout << "c2 (copy of c1): " << c2.str() << endl;
        cout << "c3 (default): " << c3.str() << endl;

        // Test getters/setters
        c3.set_radius(3.0);
        cout << "c3 after set_radius(3.0): " << c3.str() << endl;

        // Test calculations
        cout << "c1 perimeter: " << c1.calc_perimeter() << endl;
        cout << "c1 circumference: " << c1.calc_circumference() << endl;
        cout << "c1 diameter: " << c1.calc_diameter() << endl;
        cout << "c1 area: " << c1.calc_area() << endl;

        // Test operators
        c1 += 2.0;
        cout << "c1 after += 2.0: " << c1.str() << endl;

        c1 *= 0.5;
        cout << "c1 after *= 0.5: " << c1.str() << endl;

        // Test exceptions
        try {
            Circle bad(-1.0);
        } catch (const invalid_argument& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

        try {
            c1.set_radius(-5.0);
        } catch (const invalid_argument& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

        try {
            c1 /= 0.0;
        } catch (const invalid_argument& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

    } catch (const exception& e) {
        cerr << "Unexpected error: " << e.what() << endl;
    }
}

void testRightTriangle() {
    cout << "\n=== Testing RightTriangle Class ===" << endl;

    try {
        // Test constructors
        RightTriangle t1(3.0, 4.0);
        RightTriangle t2(t1);
        RightTriangle t3;

        cout << "t1: " << t1.str() << endl;
        cout << "t2 (copy of t1): " << t2.str() << endl;
        cout << "t3 (default): " << t3.str() << endl;

        // Test getters/setters
        t3.set_base(5.0);
        t3.set_height(12.0);
        cout << "t3 after set_base(5.0) and set_height(12.0): " << t3.str() << endl;

        // Test calculations
        cout << "t1 perimeter: " << t1.calc_perimeter() << endl;
        cout << "t1 area: " << t1.calc_area() << endl;
        cout << "t1 hypotenuse: " << t1.calc_hypotenuse() << endl;

        // Test operators
        t1 += 1.0;
        cout << "t1 after += 1.0: " << t1.str() << endl;

        t1 *= 2.0;
        cout << "t1 after *= 2.0: " << t1.str() << endl;

        // Test comparison operators
        cout << "t1 == t2? " << (t1 == t2 ? "true" : "false") << endl;
        cout << "t1 != t2? " << (t1 != t2 ? "true" : "false") << endl;

        // Test exceptions
        try {
            RightTriangle bad(0.0, -1.0);
        } catch (const invalid_argument& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

        try {
            t1.set_base(-3.0);
        } catch (const invalid_argument& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

        try {
            t1 /= 0.0;
        } catch (const invalid_argument& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

    } catch (const exception& e) {
        cerr << "Unexpected error: " << e.what() << endl;
    }
}

void testPolymorphism() {
    cout << "\n=== Testing Polymorphism ===" << endl;

    vector<Shape*> shapes;

    shapes.push_back(new Rectangle(4.0, 5.0));
    shapes.push_back(new Square(3.0));
    shapes.push_back(new Circle(2.5));
    shapes.push_back(new RightTriangle(3.0, 4.0));

    for (Shape* shape : shapes) {
        cout << shape->str() << endl;
        cout << "  Area: " << shape->calc_area() << endl;
        cout << "  Perimeter: " << shape->calc_perimeter() << endl;
        delete shape;
    }
    shapes.clear();
}

int main() {
    testCircle();
    testRightTriangle();
    testPolymorphism();

    return 0;
}