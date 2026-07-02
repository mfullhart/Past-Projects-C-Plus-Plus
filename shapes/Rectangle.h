#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include <string>
#include "Shape.h"
using namespace std;

/**
 * Rectangle class with length and width.
 *
 * Calculates the perimeter and area of a rectangle. It also supports operations like addition,
 * subtraction, multiplication, and division on the rectangle's dimensions.
 */
class Rectangle : public Shape {
protected:
    double _length;

    private:
    double _width;

    public:

    /**
    * Constructor to initialize a Rectangle with given length and width.
    *
    * @param length The length of the rectangle.
    * @param width The width of the rectangle.
    */
    Rectangle(double length, double width);

    /**
     * Copy constructor to initialize a Rectangle from another Rectangle.
     *
     * @param other The Rectangle object to copy.
     */
    Rectangle(const Rectangle& other);

    /**
     * Default constructor to initialize a Rectangle with zero length and width.
     */
    Rectangle();

    /**
     * Virtual destructor for the Rectangle class.
     * Ensures cleanup of derived class objects when deleted through a base class pointer.
     */
    virtual ~Rectangle() = default;

    /**
     * Get the length of the rectangle.
     *
     * @return The length of the rectangle.
     */
    double get_length() const;

    /**
     * Get the width of the rectangle.
     *
     * @return The width of the rectangle.
     */
    virtual double get_width() const;

    /**
     * Set the length of the rectangle.
     *
     * @param length The new length of the rectangle.
     */
    void set_length(double length);

    /**
     * Set the width of the rectangle.
     *
     * @param width The new width of the rectangle.
     */
    virtual void set_width(double width);

    /**
     * Calculate the perimeter of the rectangle.
     *
     * @return The perimeter of the rectangle.
     */
    virtual double calc_perimeter() const override;

    /**
     * Calculate the area of the rectangle.
     *
     * @return The area of the rectangle.
     */
    virtual double calc_area() const override;

    // Overloaded operators (member functions)
    /**
     * Add a value to both the length and width of the rectangle.
     *
     * @param amount The value to add.
     * @return A reference to the current Rectangle object.
     */
    virtual Rectangle& operator+=(double amount) override;

    /**
     * Subtract a value from both the length and width of the rectangle.
     *
     * @param amount The value to subtract.
     * @return A reference to the current Rectangle object.
     */
    virtual Rectangle& operator-=(double amount) override;

    /**
     * Multiply both the length and width of the rectangle by a value.
     *
     * @param amount The value to multiply by.
     * @return A reference to the current Rectangle object.
     */
    virtual Rectangle& operator*=(double amount) override;

    /**
     * Divide both the length and width of the rectangle by a value.
     *
     * @param amount The value to divide by.
     * @return A reference to the current Rectangle object.
     * @throws invalid_argument If the amount is zero.
     */
    virtual Rectangle& operator/=(double amount) override;

    /**
     * Compare two Rectangles for equality.
     *
     * @param lhs The left-hand side Rectangle object.
     * @param rhs The right-hand side Rectangle object.
     * @return True if the rectangles are equal, false otherwise.
     */
    friend bool operator==(const Rectangle& lhs, const Rectangle& rhs);

    /**
     * Compare two Rectangles for inequality.
     *
     * @param lhs The left-hand side Rectangle object.
     * @param rhs The right-hand side Rectangle object.
     * @return True if the rectangles are not equal, false otherwise.
     */
    friend bool operator!=(const Rectangle& lhs, const Rectangle& rhs);

    /**
     * This function overrides the pure virtual `str()` function from the `Shape` base class.
     * It returns a string that describes the Rectangle object.
     *
     * @return A string representation of the Rectangle object.
     */
    virtual string str() const override;
};

// Non-member operator declarations
/**
 * Compare two Rectangle objects for equality.
 *
 * @param lhs The left-hand side Rectangle object.
 * @param rhs The right-hand side Rectangle object.
 * @return True if the rectangles are equal, false otherwise.
 */
bool operator==(const Rectangle& lhs, const Rectangle& rhs);

/**
 * Compare two Rectangle objects for inequality.
 *
 * @param lhs The left-hand side Rectangle object.
 * @param rhs The right-hand side Rectangle object.
 * @return True if the rectangles are not equal, false otherwise.
 */
bool operator!=(const Rectangle& lhs, const Rectangle& rhs);

#endif // RECTANGLE_H_
