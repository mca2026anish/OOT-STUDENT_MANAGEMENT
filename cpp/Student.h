#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"
#include "Program.h"

class Student : public Person {
private:
    std::string address;
    std::string phone;

public:
    Student(int id, const std::string& name, const std::string& address, const std::string& phone);

    std::string getAddress() const;

    void enroll(const Program& program) const;

    // Overrides Person's pure virtual function (polymorphism)
    void displayRole() const override;
};

#endif
