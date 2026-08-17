#ifndef GOA_BUSINESS_SCHOOL_H
#define GOA_BUSINESS_SCHOOL_H

#include <string>
#include "Program.h"

class GoaBusinessSchool {
public:
    int id;
    std::string name;

    GoaBusinessSchool(int id, const std::string& name);

    void offerProgram(const Program& program) const;
};

#endif
