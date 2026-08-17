public class Result {

    int resultId;
    String grade;

    Result(int resultId, String grade) {
        this.resultId = resultId;
        this.grade = grade;
    }

    void displayResult() {
        System.out.println("Grade: " + grade);
    }
}