using System;

namespace StudentManagementSystem
{
    public class GoaBusinessSchool
    {
        public int Id { get; set; }
        public string Name { get; set; }

        public GoaBusinessSchool(int id, string name)
        {
            Id = id;
            Name = name;
        }

        public void OfferProgram(Program program)
        {
            Console.WriteLine($"{Name} offers {program.Name}");
        }
    }
}
