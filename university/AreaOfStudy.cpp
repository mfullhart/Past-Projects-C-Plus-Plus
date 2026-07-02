/**
* @file AreaOfStudy.cpp
* @brief Implementation for the AreaOfStudy program.
*
* @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
*/

#include "AreaOfStudy.h"
#include "Course.h"
#include <string>

using namespace std;

/**
 *Constructor for AreaOfStudy that initializes the area with a code and name.
 *
 * @param code
 * @param name
 */
AreaOfStudy::AreaOfStudy(const string& code, const string& name) : code(code), name(name) {}

/**
 * Function that gets the area of study code.
 * 
 * @return code
 */
string AreaOfStudy::get_code() const
{
    return code;
}

/**
 * Function that gets the area of study name.
 * 
 * @return code
 */
string AreaOfStudy::get_name() const
{
    return name;
}

/**
 *Adds a course to the area of study by appending it.
 * 
 * @param course
 */
void AreaOfStudy::add_course(const Course& course)
{
    courses.push_back(course);
}

/**
 * Calculates the total credit hours for all courses within this area of study.
 *
 * @return total_hours
 */
double AreaOfStudy::calc_hours() const
{
    double total_hours = 0.0;

    for (const auto& course : courses)
    {
        total_hours += course.get_credit_hours();
    }

    return total_hours;
}