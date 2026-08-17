#ifndef PROGRAM_H
#define PROGRAM_H

#include <string>
#include <vector>
#include "Course.h"

class Program {
public:
    int id;
    std::string name;
    std::vector<Course> courses;

    Program(int id, const std::string& name);

    void addCourse(const Course& course);
};

#endif
