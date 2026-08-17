#include "Result.h"
#include <iostream>

Result::Result(int id, const std::string& status) : id(id), status(status) {}

void Result::displayResult() const {
    std::cout << "Result: " << status << std::endl;
}
