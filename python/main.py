from gbs import GoaBusinessSchool
from program import Program
from course import Course
from faculty import Faculty
from student import Student
from exam import Exam
from result import Result


def main():

    #object creation
    gbs = GoaBusinessSchool(1, "Goa Business School")

    mca = Program(101, "MCA")

    oot = Course(201, "Object Oriented Technology", 4)

    faculty = Faculty(301, "HHR", "hhr@gbs.com")

    student = Student(401, "Anish", "Goa", "1234567890")

    exam = Exam("Semester End")

    result = Result(501, "Pass")


    gbs.offer_program(mca)

    mca.add_course(oot)

    faculty.teach_course(oot)


    #encapsulation
    print("Student Name:", student.get_name())

    print("Student Address:", student.get_address())

    student.set_name("Ajay")

    print("Updated Name:", student.get_name())


    student.enroll(mca)


    #object referencing and polymorphism
    p = Student(402, "Suraj", "Goa", "5678901234")

    p.display_role()

    exam.conduct_exam()

    result.display_result()


if __name__ == "__main__":
    main()