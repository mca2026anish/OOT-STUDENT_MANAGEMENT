#include <iostream>
#include "GoaBusinessSchool.h"
#include "Program.h"
#include "Course.h"
#include "Faculty.h"
#include "Student.h"
#include "Exam.h"
#include "Result.h"

int main() {

    // Object creation
    GoaBusinessSchool gbs(1, "Goa Business School");

    Program mca(101, "MCA");

    Course oot(201, "Object Oriented Technology", 4);

    Faculty faculty(301, "HHR", "hhr@gbs.com");

    Student student(401, "Anish", "Goa", "1234567890");

    Exam exam("Semester End");

    Result result(501, "Pass");


    gbs.offerProgram(mca);

    mca.addCourse(oot);

    faculty.teachCourse(oot);


    // Encapsulation
    std::cout << "Student Name: " << student.getName() << std::endl;

    std::cout << "Student Address: " << student.getAddress() << std::endl;

    student.setName("Ajay");

    std::cout << "Updated Name: " << student.getName() << std::endl;


    student.enroll(mca);


    // Object referencing and polymorphism
    Student p(402, "Suraj", "Goa", "5678901234");

    // Called through Person* to demonstrate runtime polymorphism
    Person& personRef = p;
    personRef.displayRole();

    exam.conductExam();

    result.displayResult();

    return 0;
}
