public class GoaBusinessSchool {

    int id;
    String name;

    GoaBusinessSchool(int id, String name) {
        this.id = id;
        this.name = name;
    }

    void offerProgram(Program p) {
        System.out.println(name + " offers " + p.name);
    }
}