#include "Student.h"
#include <iostream>

Student::Student(int id, const std::string& name, const std::string& address, const std::string& phone)
    : Person(id, name), address(address), phone(phone) {}

std::string Student::getAddress() const {
    return address;
}

void Student::enroll(const Program& program) const {
    std::cout << getName() << " enrolled in " << program.name << std::endl;
}

void Student::displayRole() const {
    std::cout << getName() << " is a Student" << std::endl;
}
