/**
* @file AcademicDepartment.cpp
* @brief Implementation for the AcademicDepartment program.
*
* @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
*/

#include "AcademicDepartment.h"
#include "AreaOfStudy.h"
#include <string>

using namespace std;

/**
 * Constructor for AcademicDepartment that initializes the department name.
 *
 * @param name
 */
AcademicDepartment::AcademicDepartment(const string& name) : name(name) {}

/**
 * Function that gets the department name.
 *
 * @return name
 */
string AcademicDepartment::get_name() const
{
    return name;
}

/**
 * Adds an area of study to the department by appending.
 *
 * @param area
 */
void AcademicDepartment::add_area(const AreaOfStudy& area)
{
    areas.push_back(area);
}

/**
 * Calculates total credit hours.
 *
 * @return total hours
 */
double AcademicDepartment::calc_hours() const
{
    double total_hours = 0.0;

    for (const auto& area : areas)
    {
        total_hours += area.calc_hours();
    }

    return total_hours;
}