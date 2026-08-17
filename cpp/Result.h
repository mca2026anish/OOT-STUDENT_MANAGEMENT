#ifndef RESULT_H
#define RESULT_H

#include <string>

class Result {
public:
    int id;
    std::string status;

    Result(int id, const std::string& status);

    void displayResult() const;
};

#endif
