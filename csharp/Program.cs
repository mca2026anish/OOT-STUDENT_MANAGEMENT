using System;
using System.Collections.Generic;

namespace StudentManagementSystem
{
    public class Program
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public List<Course> Courses { get; set; }

        public Program(int id, string name)
        {
            Id = id;
            Name = name;
            Courses = new List<Course>();
        }

        public void AddCourse(Course course)
        {
            Courses.Add(course);
            Console.WriteLine($"{course.Name} added to {Name}");
        }
    }
}
