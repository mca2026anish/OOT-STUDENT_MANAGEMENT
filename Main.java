public class Main {

    public static void main(String[] args) {

        GoaBusinessSchool gbs =
                new GoaBusinessSchool(1, "Goa Business School");

        Program mca =
                new Program(101, "MCA");

        Course oot =
                new Course(201, "Object Oriented Technology", 4);

        Faculty faculty =
                new Faculty(301, "HHR", "hhr@gbs.com");

        Student student =
                new Student(409, "Anish", "Goa", "1234567890");

        Exam exam =
                new Exam("Semester End");

        Result result =
                new Result(509, "Pass");

        gbs.offerProgram(mca);
        mca.addCourse(oot);
        faculty.teachCourse(oot);

        System.out.println("Student Name: " + student.getName());
        System.out.println("Student Address: " + student.getAddress());

        student.setName("Mayank");
        System.out.println("Updated Name: " + student.getName());

        student.showRole();
        faculty.showRole();

        student.enroll(mca);

        // Object Referencing + Polymorphism
        Person p1 =
                new Student(501, "Rakshak", "Goa", "9876543210");

        Person p2 =
                new Faculty(601, "HHR Sir", "hhr@gbs.com");

        p1.showRole();
        p2.showRole();

        exam.conductExam();
        result.displayResult();
    }
}