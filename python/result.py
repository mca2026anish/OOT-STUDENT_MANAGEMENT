class Result:

    def __init__(self, id, status):
        self.id = id
        self.status = status

    def display_result(self):
        print("Result:", self.status)