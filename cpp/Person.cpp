#include "Person.h"

Person::Person(int id, const std::string& name) : id(id), name(name) {}

std::string Person::getName() const {
    return name;
}

void Person::setName(const std::string& name) {
    this->name = name;
}
