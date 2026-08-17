#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include "Course.h"

class Faculty {
public:
    int id;
    std::string name;
    std::string email;

    Faculty(int id, const std::string& name, const std::string& email);

    void teachCourse(const Course& course) const;
};

#endif
