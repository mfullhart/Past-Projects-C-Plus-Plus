#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

/**
 * @class Square
 *
 * The Square class represents a square, which is a special case of a rectangle
 * where the length and width are equal. It inherits from the Rectangle class
 * and overrides certain methods to ensure correct behavior for squares.
 */
class Square : public Rectangle {
public:
    // Constructors
    /**
     * Constructor to initialize a Square with a given length.
     *
     * @param length The length of the square.
     * Marked as explicit to avoid unintentional implicit type conversion.
     */
    explicit Square(double length);

    /**
     * Copy constructor to initialize a Square from another Square object.
     *
     * @param other The Square object to copy.
     */
    Square(const Square& other);

    /**
     * Default constructor to initialize a Square with zero length.
     */
    Square();

    // Overridden methods
    /**
     * Gets the width of the square.
     *
     * @return The width of the square, which is the same as its length.
     */
    double get_width() const override;

    /**
     * Sets the width of the square.
     *
     * @param width The new width of the square.
     * Since a square's width is the same as its length, this also updates the length.
     */
    void set_width(double width) override;

    /**
     * Calculates the perimeter of the square.
     *
     * @return The perimeter of the square, computed as 4 * length.
     */
    double calc_perimeter() const override;

    /**
     * Calculates the area of the square.
     *
     * @return The area of the square, computed as length * length.
     */
    double calc_area() const override;

    /**
     * Adds a value to the length of the square.
     *
     * @param amount The value to add.
     * @return A reference to the modified Square object.
     */
    Square& operator+=(double amount) override;

    /**
     * Subtracts a value from the length of the square.
     *
     * @param amount The value to subtract.
     * @return A reference to the modified Square object.
     */
    Square& operator-=(double amount) override;

    /**
     * Multiplies the length of the square by a value.
     *
     * @param amount The value to multiply by.
     * @return A reference to the modified Square object.
     */
    Square& operator*=(double amount) override;

    /**
     * Divides the length of the square by a value.
     *
     * @param amount The value to divide by.
     * @return A reference to the modified Square object.
     * @throws std::invalid_argument If the amount is zero.
     */
    Square& operator/=(double amount) override;

    /**
     * Generates a string representation of the square.
     *
     * @return A string describing the square in the format "Square(length)".
     */
    std::string str() const override;

    // Additional equality and inequality operators
    /**
     * Compares two Square objects for equality based on their length.
     *
     * @param lhs The left-hand side Square object.
     * @param rhs The right-hand side Square object.
     * @return True if the squares have the same length, false otherwise.
     */
    friend bool operator==(const Square& lhs, const Square& rhs);

    /**
     * Compares two Square objects for inequality based on their length.
     *
     * @param lhs The left-hand side Square object.
     * @param rhs The right-hand side Square object.
     * @return True if the squares do not have the same length, false otherwise.
     */
    friend bool operator!=(const Square& lhs, const Square& rhs);

    /**
     * Compares a Rectangle and a Square for equality.
     *
     * @param lhs The left-hand side Rectangle object.
     * @param rhs The right-hand side Square object.
     * @return True if the Rectangle's length and width are equal to the Square's length,
     * false otherwise.
     */
    friend bool operator==(const Rectangle& lhs, const Square& rhs);

    /**
     * Compares a Rectangle and a Square for inequality.
     *
     * @param lhs The left-hand side Rectangle object.
     * @param rhs The right-hand side Square object.
     * @return True if the Rectangle's length and width are not equal to the Square's length,
     * false otherwise.
     */
    friend bool operator!=(const Rectangle& lhs, const Square& rhs);

    /**
     * Compares a Square and a Rectangle for equality.
     *
     * @param lhs The left-hand side Square object.
     * @param rhs The right-hand side Rectangle object.
     * @return True if the Square's length is equal to the Rectangle's length and width,
     * false otherwise.
     */
    friend bool operator==(const Square& lhs, const Rectangle& rhs);

    /**
     * Compares a Square and a Rectangle for inequality.
     *
     * @param lhs The left-hand side Square object.
     * @param rhs The right-hand side Rectangle object.
     * @return True if the Square's length is not equal to the Rectangle's length and width,
     * false otherwise.
     */
    friend bool operator!=(const Square& lhs, const Rectangle& rhs);
};

#endif // SQUARE_H