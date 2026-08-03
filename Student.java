// Implemented Inheritance

public class Student extends Person {

    private String address;
    private String phone;

    Student(int id, String name, String address, String phone) {
        super(id, name);
        this.address = address;
        this.phone = phone;
    }

    public String getAddress() {
        return address;
    }

    public String getPhone() {
        return phone;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    @Override
    public void showRole() {
        System.out.println(getName() + " is a Student");
    }

    void enroll(Program p) {
        System.out.println(getName() + " enrolled in " + p.name);
    }
}