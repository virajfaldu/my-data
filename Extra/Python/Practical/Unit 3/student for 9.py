
# Create a Student class to with the methods set_id,
# get_id, set_name, get_name, set_marks and get_marks
# where the method name starting with set are used to
# assign the values and method name starting with get are
# returning the values. Save the program by student.py.
# Create another program to use the Student class which
# is already available in student.py.

class student:

    def set_id(self, id):
        self.id = id

    def get_id(self):
        print("Id : ", self.id)

    def set_name(self, name):
        self.name = name

    def get_name(self):
        print("Name : ", self.name)

    def set_marks(self, marks):
        self.marks = marks

    def get_marks(self):
        print("Marks : ", self.marks)
