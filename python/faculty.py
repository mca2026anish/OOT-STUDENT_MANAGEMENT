class Faculty:

    def __init__(self, id, name, email):
        self.id = id
        self.name = name
        self.email = email

    def teach_course(self, course):
        print(self.name, "teaches", course.name)