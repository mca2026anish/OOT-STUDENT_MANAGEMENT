public class Program {

    int id;
    String name;

    Program(int id, String name) {
        this.id = id;
        this.name = name;
    }

    void addCourse(Course c) {
        System.out.println(c.name + " added to " + name);
    }
}