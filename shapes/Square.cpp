#include "Square.h"
#include <stdexcept>

// Constructors
/**
 * Constructor to initialize a Square with a given length.
 *
 * @param length The length of the square.
 * Delegates to the Rectangle constructor, passing the same length for both length and width.
 */
Square::Square(double length) : Rectangle(length, length) {}

/**
 * Copy constructor to initialize a Square from another Square object.
 *
 * @param other The Square object to copy.
 * Delegates to the Rectangle copy constructor.
 */
Square::Square(const Square& other) : Rectangle(other) {}

/**
 * Default constructor to initialize a Square with zero length.
 * Delegates to the Rectangle default constructor, initializing length and width to 0.0.
 */
Square::Square() : Rectangle(0.0, 0.0) {}

// Overridden methods
/**
 * Gets the width of the square.
 *
 * @return The width of the square, which is the same as its length.
 */
double Square::get_width() const {
    return _length; // Square uses _length for both length and width
}

/**
 * Sets the width of the square.
 *
 * @param width The new width of the square.
 * Since a square's width is the same as its length, this also updates the length.
 */
void Square::set_width(double width) {
    _length = width; // Square uses _length for both length and width
}

/**
 * Calculates the perimeter of the square.
 *
 * @return The perimeter of the square, computed as 4 * length.
 */
double Square::calc_perimeter() const {
    return 4 * _length; // Perimeter of a square
}

/**
 * Calculates the area of the square.
 *
 * @return The area of the square, computed as length * length.
 */
double Square::calc_area() const {
    return _length * _length; // Area of a square
}

/**
 * Adds a value to the length of the square.
 *
 * @param amount The value to add.
 * @return A reference to the modified Square object.
 */
Square& Square::operator+=(double amount) {
    _length += amount;
    return *this;
}

/**
 * Subtracts a value from the length of the square.
 *
 * @param amount The value to subtract.
 * @return A reference to the modified Square object.
 */
Square& Square::operator-=(double amount) {
    _length -= amount;
    return *this;
}

/**
 * Multiplies the length of the square by a value.
 *
 * @param amount The value to multiply by.
 * @return A reference to the modified Square object.
 */
Square& Square::operator*=(double amount) {
    _length *= amount;
    return *this;
}

/**
 * Divides the length of the square by a value.
 *
 * @param amount The value to divide by.
 * @return A reference to the modified Square object.
 * @throws std::invalid_argument If the amount is zero.
 */
Square& Square::operator/=(double amount) {
    if (amount == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    _length /= amount;
    return *this;
}

/**
 * Generates a string representation of the square.
 *
 * @return A string describing the square in the format "Square(length)".
 */
std::string Square::str() const {
    return "Square(" + std::to_string(_length) + ")";
}

// Additional equality and inequality operators
/**
 * Compares two Square objects for equality based on their length.
 *
 * @param lhs The left-hand side Square object.
 * @param rhs The right-hand side Square object.
 * @return True if the squares have the same length, false otherwise.
 */
bool operator==(const Square& lhs, const Square& rhs) {
    return lhs.get_length() == rhs.get_length();
}

/**
 * Compares two Square objects for inequality based on their length.
 *
 * @param lhs The left-hand side Square object.
 * @param rhs The right-hand side Square object.
 * @return True if the squares do not have the same length, false otherwise.
 */
bool operator!=(const Square& lhs, const Square& rhs) {
    return !(lhs == rhs);
}

/**
 * Compares a Rectangle and a Square for equality.
 *
 * @param lhs The left-hand side Rectangle object.
 * @param rhs The right-hand side Square object.
 * @return True if the Rectangle's length and width are equal to the Square's length,
 * false otherwise.
 */
bool operator==(const Rectangle& lhs, const Square& rhs) {
    return lhs.get_length() == rhs.get_length() && lhs.get_width() == rhs.get_length();
}

/**
 * Compares a Rectangle and a Square for inequality.
 *
 * @param lhs The left-hand side Rectangle object.
 * @param rhs The right-hand side Square object.
 * @return True if the Rectangle's length and width are not equal to the Square's length,
 * false otherwise.
 */
bool operator!=(const Rectangle& lhs, const Square& rhs) {
    return !(lhs == rhs);
}

/**
 * Compares a Square and a Rectangle for equality.
 *
 * @param lhs The left-hand side Square object.
 * @param rhs The right-hand side Rectangle object.
 * @return True if the Square's length is equal to the Rectangle's length and width,
 * false otherwise.
 */
bool operator==(const Square& lhs, const Rectangle& rhs) {
    return lhs.get_length() == rhs.get_length() && lhs.get_length() == rhs.get_width();
}

/**
 * Compares a Square and a Rectangle for inequality.
 *
 * @param lhs The left-hand side Square object.
 * @param rhs The right-hand side Rectangle object.
 * @return True if the Square's length is not equal to the Rectangle's length and width,
 * false otherwise.
 */
bool operator!=(const Square& lhs, const Rectangle& rhs) {
    return !(lhs == rhs);
}