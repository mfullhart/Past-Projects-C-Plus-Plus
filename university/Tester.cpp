#include <iostream>
#include <string>
#include "AcademicDepartment.h"
#include "AreaOfStudy.h"
#include "Course.h"
#include "AcademicDepartment.cpp"
#include "AreaOfStudy.cpp"
#include "Course.cpp"

int main() {
    Course csis310("CSIS", "310", "Data Structures", 3.0);
    Course csis321("CSIS", "321", "Software Engineering", 3.0);
    Course csis370("CSIS", "370", "Object-Oriented Analysis & Design", 3.0);
    Course enge220("ENGE", "220", "Digital Logic", 4.0);

    AreaOfStudy csis("CSIS", "Computer Science & Information Systems");
    csis.add_course(csis310);
    csis.add_course(csis321);
    csis.add_course(csis370);

    AreaOfStudy enge("ENGE", "Electrical Engineering");
    enge.add_course(enge220);

    AcademicDepartment eecs("Electrical Engineering & Computer Science");
    eecs.add_area(csis);
    eecs.add_area(enge);

    std::cout << csis.get_name() << ": " << csis.calc_hours() << " credit hours" << std::endl;
    std::cout << enge.get_name() << ": " << enge.calc_hours() << " credit hours" << std::endl;
    std::cout << eecs.get_name() << ": " << eecs.calc_hours() << " credit hours" << std::endl;
}
