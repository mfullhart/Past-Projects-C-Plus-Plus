/**
* @file AreaOfStudy.h
* @brief Header for the AreaOfStudy program.
*
* @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
*/

#ifndef AREAOFSTUDY_H
#define AREAOFSTUDY_H

#include "Course.h"
#include <string>
#include <vector>
using namespace std;

class AreaOfStudy
{
// Attributes
private:
    string code;
    string name;
    vector<Course> courses;

// Methods
public:
    AreaOfStudy(const string& code, const string& name);
    string get_code() const;
    string get_name() const;
    void add_course(const Course& course);
    double calc_hours() const;
};

#endif