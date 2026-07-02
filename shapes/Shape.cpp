#include "Shape.h"
using namespace std;

// Non-member operator definitions
/**
 * Compares two shapes for equality based on their area.
 *
 * @param lhs The left-hand side shape.
 * @param rhs The right-hand side shape.
 * @return True if the shapes have the same area, false otherwise.
 */
bool operator==(const Shape& lhs, const Shape& rhs) {
    return lhs.calc_area() == rhs.calc_area();
}

/**
 * Compares two shapes for inequality based on their area.
 *
 * @param lhs The left-hand side shape.
 * @param rhs The right-hand side shape.
 * @return True if the shapes do not have the same area, false otherwise.
 */
bool operator!=(const Shape& lhs, const Shape& rhs) {
    return !(lhs == rhs);
}

/**
 * Compares two shapes to check if the left-hand side is less than the right-hand side based on
 * their area.
 *
 * @param lhs The left-hand side shape.
 * @param rhs The right-hand side shape.
 * @return True if the left-hand side shape's area is less than the right-hand side shape's area,
 * false otherwise.
 */
bool operator<(const Shape& lhs, const Shape& rhs) {
    return lhs.calc_area() < rhs.calc_area();
}

/**
 * Compares two shapes to check if the left-hand side is less than or equal to the right-hand
 * side based on their area.
 *
 * @param lhs The left-hand side shape.
 * @param rhs The right-hand side shape.
 * @return True if the left-hand side shape's area is less than or equal to the right-hand side
 * shape's area, false otherwise.
 */
bool operator<=(const Shape& lhs, const Shape& rhs) {
    return lhs.calc_area() <= rhs.calc_area();
}

/**
 * Compares two shapes to check if the left-hand side is greater than the right-hand side based
 * on their area.
 *
 * @param lhs The left-hand side shape.
 * @param rhs The right-hand side shape.
 * @return True if the left-hand side shape's area is greater than the right-hand side shape's area,
 * false otherwise.
 */
bool operator>(const Shape& lhs, const Shape& rhs) {
    return lhs.calc_area() > rhs.calc_area();
}

/**
 * Compares two shapes to check if the left-hand side is greater than or equal to the right-hand
 * side based on their area.
 *
 * @param lhs The left-hand side shape.
 * @param rhs The right-hand side shape.
 * @return True if the left-hand side shape's area is greater than or equal to the right-hand side
 * shape's area, false otherwise.
 */
bool operator>=(const Shape& lhs, const Shape& rhs) {
    return lhs.calc_area() >= rhs.calc_area();
}

/**
 * Outputs a shape to an output stream.
 *
 * @param os The output stream.
 * @param shape The shape to output.
 * @return The output stream.
 */
ostream& operator<<(ostream& os, const Shape& shape) {
    os << shape.str();
    return os;
}
