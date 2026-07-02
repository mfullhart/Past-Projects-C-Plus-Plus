#include <string>
#include "Rectangle.h"
using namespace std;

/**
 * Constructor to initialize a Rectangle with given length and width.
 *
 * @param length The length of the rectangle.
 * @param width The width of the rectangle.
 */
Rectangle::Rectangle(double length, double width) : _length(length), _width(width) {}

/**
 * Copy constructor to initialize a Rectangle from another Rectangle object.
 *
 * @param other The Rectangle object to copy.
 */
Rectangle::Rectangle(const Rectangle& other) : _length(other._length), _width(other._width) {}

/**
 * Default constructor to initialize a Rectangle with zero length and width.
 */
Rectangle::Rectangle() : _length(0.0), _width(0.0) {}

/**
 * Get the length of the rectangle.
 *
 * @return The length of the rectangle.
 */
double Rectangle::get_length() const {
    return _length;
}

/**
 * Get the width of the rectangle.
 *
 * @return The width of the rectangle.
 */
double Rectangle::get_width() const {
    return _width;
}

/**
 * Set the length of the rectangle.
 *
 * @param length The new length of the rectangle.
 */
void Rectangle::set_length(double length) {
    if (length < 0) {
        throw invalid_argument("Length cannot be negative");
    }
    _length = length;
}

/**
 * Set the width of the rectangle.
 *
 * @param width The new width of the rectangle.
 */
void Rectangle::set_width(double width) {
    if (width < 0) {
        throw invalid_argument("Width cannot be negative");
    }
    _width = width;
}

/**
 * Calculate the perimeter of the rectangle.
 *
 * @return The perimeter of the rectangle.
 */
double Rectangle::calc_perimeter() const {
    return 2 * (_length + _width);
}

/**
 * Calculate the area of the rectangle.
 *
 * @return The area of the rectangle.
 */
double Rectangle::calc_area() const {
    return _length * _width;
}

/**
 * Add a value to both the length and width of the rectangle.
 *
 * @param amount The value to add.
 * @return A reference to the current Rectangle object.
 */
Rectangle& Rectangle::operator+=(double amount) {
    _length += amount;
    _width += amount;
    return *this;
}

/**
 * Subtract a value from both the length and width of the rectangle.
 *
 * @param amount The value to subtract.
 * @return A reference to the current Rectangle object.
 */
Rectangle& Rectangle::operator-=(double amount) {
    _length -= amount;
    _width -= amount;
    return *this;
}

/**
 * Multiply both the length and width of the rectangle by a value.
 *
 * @param amount The value to multiply by.
 * @return A reference to the current Rectangle object.
 */
Rectangle& Rectangle::operator*=(double amount) {
    _length *= amount;
    _width *= amount;
    return *this;
}

/**
 * Divide both the length and width of the rectangle by a value.
 *
 * @param amount The value to divide by.
 * @return A reference to the current Rectangle object.
 * @throws invalid_argument If the amount is zero.
 */
Rectangle& Rectangle::operator/=(double amount) {
    if (amount == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    _length /= amount;
    _width /= amount;
    return *this;
}

/**
 * Compare two Rectangles for equality.
 *
 * @param lhs The left-hand side Rectangle object.
 * @param rhs The right-hand side Rectangle object.
 * @return True if the rectangles are equal, false otherwise.
 */
bool operator==(const Rectangle& lhs, const Rectangle& rhs) {
    return lhs._length == rhs._length && lhs._width == rhs._width;
}

/**
 * Compare two Rectangles for inequality.
 *
 * @param lhs The left-hand side Rectangle object.
 * @param rhs The right-hand side Rectangle object.
 * @return True if the rectangles are not equal, false otherwise.
 */
bool operator!=(const Rectangle& lhs, const Rectangle& rhs) {
    return !(lhs == rhs);
}

/**
 * This function returns a string that describes the Rectangle object.
 *
 * @return A string representation of the Rectangle object.
 */
string Rectangle::str() const {
    return "Rectangle(" + std::to_string(_length) + "," + std::to_string(_width) + ")";
}
