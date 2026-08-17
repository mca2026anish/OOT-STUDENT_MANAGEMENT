from person import Person

class Student(Person):

    def __init__(self, id, name, address, phone):
        super().__init__(id, name)
        self.__address = address
        self.phone = phone

    def get_address(self):
        return self.__address

    def enroll(self, program):
        print(self.get_name(), "enrolled in", program.name)

    def display_role(self):
        print(self.get_name(), "is a Student")