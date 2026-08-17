namespace StudentManagementSystem
{
    // Abstract base class (equivalent of Python's ABC + abstractmethod)
    public abstract class Person
    {
        private int id;
        private string name;

        protected Person(int id, string name)
        {
            this.id = id;
            this.name = name;
        }

        // Encapsulation: getter/setter for name
        public string GetName()
        {
            return name;
        }

        public void SetName(string name)
        {
            this.name = name;
        }

        // Abstract method -> must be overridden by subclasses (polymorphism)
        public abstract void DisplayRole();
    }
}
