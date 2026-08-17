#include "Faculty.h"
#include <iostream>

Faculty::Faculty(int id, const std::string& name, const std::string& email)
    : id(id), name(name), email(email) {}

void Faculty::teachCourse(const Course& course) const {
    std::cout << name << " teaches " << course.name << std::endl;
}
