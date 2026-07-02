/**
* @file Course.cpp
* @brief Implementation for the Course program.
*
* @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
*/

#include "Course.h"
#include <sstream>
#include <iomanip>

using namespace std;

/**
 * Constructor for Course that initializes the area, course number, title, and credit hours.
 *
 * @param area
 * @param number
 * @param title
 * @param credit_hours
 */
Course::Course(const string& area, const string& number, const string& title, double credit_hours)
    : area(area), number(number), title(title), credit_hours(credit_hours) {}

/**
 * Function to get the course's area of study.
 * 
 * @return area
 */
string Course::get_area() const
{
    return area;
}

/**
 * Function to get the course number.
 * 
 * @return number
 */
string Course::get_number() const
{
    return number;
}

/**
 * Function to get the course title.
 * 
 * @return title
 */
string Course::get_title() const
{
    return title;
}

/**
 * Function to get the course credit hours.
 * 
 * @return credit_hours
 */
double Course::get_credit_hours() const
{
    return credit_hours;
}

/**
 * Returns a formatted string representation of the course, including area, number, title, and credit hours.
 * 
 * @return string with area, number, title, credit hours
 */
std::string Course::str() const
{
    return area + " " + number + " " + title + " (" + std::to_string(credit_hours) + " credit hours)";
}