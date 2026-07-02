/**
* @file AcademicDepartment.h
* @brief Header for the AcademicDepartment program.
*
* @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
*/

#ifndef ACADEMICDEPARTMENT_H
#define ACADEMICDEPARTMENT_H

#include "AreaOfStudy.h"
#include <string>
#include <vector>
using namespace std;

class AcademicDepartment
{
// Attributes
private:
    string name;
    vector<AreaOfStudy> areas;

// Methods
public:
    AcademicDepartment(const string& name);
    string get_name() const;
    void add_area(const AreaOfStudy& area);
    double calc_hours() const;
};

#endif