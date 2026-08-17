class Exam:

    def __init__(self, exam_type):
        self.exam_type = exam_type

    def conduct_exam(self):
        print(self.exam_type, "Exam Conducted")