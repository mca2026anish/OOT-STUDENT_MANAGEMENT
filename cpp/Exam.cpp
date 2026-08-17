#include "Exam.h"
#include <iostream>

Exam::Exam(const std::string& examType) : examType(examType) {}

void Exam::conductExam() const {
    std::cout << examType << " Exam Conducted" << std::endl;
}
