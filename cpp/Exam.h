#ifndef EXAM_H
#define EXAM_H

#include <string>

class Exam {
public:
    std::string examType;

    Exam(const std::string& examType);

    void conductExam() const;
};

#endif
