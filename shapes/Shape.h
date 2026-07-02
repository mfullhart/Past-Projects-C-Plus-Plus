#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/**
 * @class Shape
 *
 * The Shape class is an abstract base class that defines the interface for all shapes.
 * It includes pure virtual functions for calculating perimeter, area, and generating a string.
 * Derived classes(Rectangle) must override these functions to provide concrete implementations.
 */
class Shape {
public:
    // Pure virtual functions
    /**
    * @brief Calculates the perimeter of the shape.
    *
    * @return The perimeter of the shape as a double.
    */
    virtual double calc_perimeter() const = 0;

    /**
    * @brief Calculates the area of the shape.
    *
    * @return The area of the shape as a double.
    */
    virtual double calc_area() const = 0;


    /**
     * @brief Generates a string representation of the shape.
     *
     * @return A string describing the shape.
     */
    virtual string str() const = 0;


    // Overloaded operators
    /**
    * @brief Adds a value to the shape's dimensions.
    *
    * @param amount The value to add.
    * @return A reference to the modified shape.
    */
    virtual Shape& operator+=(double amount) = 0;

    /**
     * @brief Subtracts a value from the shape's dimensions.
     *
     * @param amount The value to subtract.
     * @return A reference to the modified shape.
     */
    virtual Shape& operator-=(double amount) = 0;

    /**
    * @brief Multiplies the shape's dimensions by a value.
    *
    * @param amount The value to multiply by.
    * @return A reference to the modified shape.
    */
    virtual Shape& operator*=(double amount) = 0;

    /**
    * @brief Divides the shape's dimensions by a value.
    *
    * @param amount The value to divide by.
    * @return A reference to the modified shape.
    * @throws invalid_argument If the amount is zero.
    */
    virtual Shape& operator/=(double amount) = 0;

    /**
    * @brief Virtual destructor for the Shape class.
    *
    * Ensures cleanup of derived class objects when deleted through a base class pointer.
    */
    virtual ~Shape() = default;

    // Non-member functions
    /**
    * @brief Compares two shapes for equality based on their area.
    *
    * @param lhs The left-hand side shape.
    * @param rhs The right-hand side shape.
    * @return True if the shapes have the same area, false otherwise.
    */
    friend bool operator==(const Shape& lhs, const Shape& rhs);

    /**
   * @brief Compares two shapes for inequality based on their area.
   *
   * @param lhs The left-hand side shape.
   * @param rhs The right-hand side shape.
   * @return True if the shapes do not have the same area, false otherwise.
   */
    friend bool operator!=(const Shape& lhs, const Shape& rhs);

    /**
    * @brief Compares two shapes to check if the left-hand side is less than the right-hand side based
    * on their area.
    *
    * @param lhs The left-hand side shape.
    * @param rhs The right-hand side shape.
    * @return True if the left-hand side shape's area is less than the right-hand side shape's
    * area, false otherwise.
    */
    friend bool operator<(const Shape& lhs, const Shape& rhs);

    /**
    * @brief Compares two shapes to check if the left-hand side is less than or equal to the right-hand
    * side based on their area.
    *
    * @param lhs The left-hand side shape.
    * @param rhs The right-hand side shape.
    * @return True if the left-hand side shape's area is less than or equal to the right-hand
    * side shape's area, false otherwise.
    */
    friend bool operator<=(const Shape& lhs, const Shape& rhs);

    /**
    * @brief Compares two shapes to check if the left-hand side is greater than the right-hand side based
    * on their area.
    *
    * @param lhs The left-hand side shape.
    * @param rhs The right-hand side shape.
    * @return True if the left-hand side shape's area is greater than the right-hand side shape's
    * area, false otherwise.
    */
    friend bool operator>(const Shape& lhs, const Shape& rhs);

    /**
    * @brief Compares two shapes to check if the left-hand side is greater than or equal to the right-hand
    * side based on their area.
    *
    * @param lhs The left-hand side shape.
    * @param rhs The right-hand side shape.
    * @return True if the left-hand side shape's area is greater than or equal to the right-hand
    * side shape's area, false otherwise.
    */
    friend bool operator>=(const Shape& lhs, const Shape& rhs);

    /**
    * @brief Outputs a shape to an output stream.
    *
    * @param os The output stream.
    * @param shape The shape to output.
    * @return The output stream.
    */
    friend ostream& operator<<(ostream& os, const Shape& shape);
};

// Non-member operator declarations
/**
* @brief Compares two shapes for equality based on their area.
*
* @param lhs The left-hand side shape.
* @param rhs The right-hand side shape.
* @return True if the shapes have the same area, false otherwise.
*/
bool operator==(const Shape& lhs, const Shape& rhs);

/**
* @brief Compares two shapes for inequality based on their area.
*
* @param lhs The left-hand side shape.
* @param rhs The right-hand side shape.
* @return True if the shapes do not have the same area, false otherwise.
*/
bool operator!=(const Shape& lhs, const Shape& rhs);

/**
* @brief Compares two shapes to check if the left-hand side is less than the right-hand side based on
* their area.
*
* @param lhs The left-hand side shape.
* @param rhs The right-hand side shape.
* @return True if the left-hand side shape's area is less than the right-hand side shape's area,
* false otherwise.
*/
bool operator<(const Shape& lhs, const Shape& rhs);

/**
* @brief Compares two shapes to check if the left-hand side is less than or equal to the right-hand
* side based on their area.
*
* @param lhs The left-hand side shape.
* @param rhs The right-hand side shape.
* @return True if the left-hand side shape's area is less than or equal to the right-hand side
* shape's area, false otherwise.
*/
bool operator<=(const Shape& lhs, const Shape& rhs);

/**
* @brief Compares two shapes to check if the left-hand side is greater than the right-hand side based on
* their area.
*
* @param lhs The left-hand side shape.
* @param rhs The right-hand side shape.
* @return True if the left-hand side shape's area is greater than the right-hand side shape's area,
* false otherwise.
*/
bool operator>(const Shape& lhs, const Shape& rhs);

/**
* @brief Compares two shapes to check if the left-hand side is greater than or equal to the right-hand
* side based on their area.
*
* @param lhs The left-hand side shape.
* @param rhs The right-hand side shape.
* @return True if the left-hand side shape's area is greater than or equal to the right-hand side
* shape's area, false otherwise.
*/
bool operator>=(const Shape& lhs, const Shape& rhs);

/**
* @brief Outputs a shape to an output stream.
*
* @param os The output stream.
* @param shape The shape to output.
* @return The output stream.
*/
ostream& operator<<(ostream& os, const Shape& shape);

#endif // SHAPE_H
