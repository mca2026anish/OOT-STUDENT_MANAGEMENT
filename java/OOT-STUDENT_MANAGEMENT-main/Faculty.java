// Implemented Inheritance

public class Faculty extends Person {

    private String email;

    Faculty(int id, String name, String email) {
        super(id, name);
        this.email = email;
    }

    @Override
    public void showRole() {
        System.out.println(getName() + " is a Faculty");
    }

    void teachCourse(Course c) {
        System.out.println(getName() + " teaches " + c.name);
    }
}