using System;

namespace StudentManagementSystem
{
    public class Result
    {
        public int Id { get; set; }
        public string Status { get; set; }

        public Result(int id, string status)
        {
            Id = id;
            Status = status;
        }

        public void DisplayResult()
        {
            Console.WriteLine($"Result: {Status}");
        }
    }
}
