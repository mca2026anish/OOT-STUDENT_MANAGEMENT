public class Exam {

    String examName;

    Exam(String examName) {
        this.examName = examName;
    }

    void conductExam() {
        System.out.println(examName + " Exam Conducted");
    }
}