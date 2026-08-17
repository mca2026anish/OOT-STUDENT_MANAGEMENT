#ifndef PERSON_H
#define PERSON_H

#include <string>

// Abstract base class (equivalent of Python's ABC + abstractmethod)
class Person {
private:
    int id;
    std::string name;

public:
    Person(int id, const std::string& name);
    virtual ~Person() = default;

    // Encapsulation: getter/setter for name
    std::string getName() const;
    void setName(const std::string& name);

    // Pure virtual function -> makes Person abstract, enables polymorphism
    virtual void displayRole() const = 0;
};

#endif
