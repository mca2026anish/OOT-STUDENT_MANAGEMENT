#include "GoaBusinessSchool.h"
#include <iostream>

GoaBusinessSchool::GoaBusinessSchool(int id, const std::string& name) : id(id), name(name) {}

void GoaBusinessSchool::offerProgram(const Program& program) const {
    std::cout << name << " offers " << program.name << std::endl;
}
