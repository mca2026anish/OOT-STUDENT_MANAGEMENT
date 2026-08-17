#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
public:
    int id;
    std::string name;
    int credits;

    Course(int id, const std::string& name, int credits);
};

#endif
