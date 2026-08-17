using System;

namespace StudentManagementSystem
{
    public class Student : Person
    {
        private string address;
        public string Phone { get; set; }

        public Student(int id, string name, string address, string phone)
            : base(id, name)
        {
            this.address = address;
            Phone = phone;
        }

        public string GetAddress()
        {
            return address;
        }

        public void Enroll(Program program)
        {
            Console.WriteLine($"{GetName()} enrolled in {program.Name}");
        }

        // Overrides Person's abstract method (polymorphism)
        public override void DisplayRole()
        {
            Console.WriteLine($"{GetName()} is a Student");
        }
    }
}
