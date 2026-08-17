using System;

namespace StudentManagementSystem
{
    public class Exam
    {
        public string ExamType { get; set; }

        public Exam(string examType)
        {
            ExamType = examType;
        }

        public void ConductExam()
        {
            Console.WriteLine($"{ExamType} Exam Conducted");
        }
    }
}
