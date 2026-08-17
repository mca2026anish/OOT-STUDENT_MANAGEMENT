using System;

namespace StudentManagementSystem
{
    public class SmsApp
    {
        public static void Main(string[] args)
        {
            // Object creation
            GoaBusinessSchool gbs = new GoaBusinessSchool(1, "Goa Business School");

            Program mca = new Program(101, "MCA");

            Course oot = new Course(201, "Object Oriented Technology", 4);

            Faculty faculty = new Faculty(301, "HHR", "hhr@gbs.com");

            Student student = new Student(401, "Anish", "Goa", "1234567890");

            Exam exam = new Exam("Semester End");

            Result result = new Result(501, "Pass");


            gbs.OfferProgram(mca);

            mca.AddCourse(oot);

            faculty.TeachCourse(oot);


            // Encapsulation
            Console.WriteLine("Student Name: " + student.GetName());

            Console.WriteLine("Student Address: " + student.GetAddress());

            student.SetName("Ajay");

            Console.WriteLine("Updated Name: " + student.GetName());


            student.Enroll(mca);


            // Object referencing and polymorphism
            Student p = new Student(402, "Suraj", "Goa", "5678901234");

            // Referenced through the base type to demonstrate runtime polymorphism
            Person personRef = p;
            personRef.DisplayRole();

            exam.ConductExam();

            result.DisplayResult();
        }
    }
}
