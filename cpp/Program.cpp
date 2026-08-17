#include "Program.h"
#include <iostream>

Program::Program(int id, const std::string& name) : id(id), name(name) {}

void Program::addCourse(const Course& course) {
    courses.push_back(course);
    std::cout << course.name << " added to " << name << std::endl;
}
