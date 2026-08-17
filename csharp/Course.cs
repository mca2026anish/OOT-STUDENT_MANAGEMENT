namespace StudentManagementSystem
{
    public class Course
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public int Credits { get; set; }

        public Course(int id, string name, int credits)
        {
            Id = id;
            Name = name;
            Credits = credits;
        }
    }
}
