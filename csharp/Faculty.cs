using System;

namespace StudentManagementSystem
{
    public class Faculty
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Email { get; set; }

        public Faculty(int id, string name, string email)
        {
            Id = id;
            Name = name;
            Email = email;
        }

        public void TeachCourse(Course course)
        {
            Console.WriteLine($"{Name} teaches {course.Name}");
        }
    }
}
