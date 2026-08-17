class Program:

    def __init__(self, id, name):
        self.id = id
        self.name = name
        self.courses = []

    def add_course(self, course):
        self.courses.append(course)
        print(course.name, "added to", self.name)