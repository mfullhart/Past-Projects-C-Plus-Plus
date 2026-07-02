/**
* @file Course.h
* @brief Header for the Course program.
*
* @author Mei-Ling Fullhart (mfullhart20@georgefox.edu)
*/

#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course
{
// Attributes
private:
    string area;
    string number;
    string title;
    double credit_hours;

// Methods
public:
    Course(const string& area, const string& number, const string& title, double credit_hours);
    string get_area() const;
    string get_number() const;
    string get_title() const;
    double get_credit_hours() const;
    string str() const;
};

#endif