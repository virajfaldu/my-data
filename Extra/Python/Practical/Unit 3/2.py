
# Write a program to create Student class with
# a constructor having more than one parameter.


class student:
    name = None
    age = 5
    marks = 0

    def __init__(self, name, age, marks):

        self.name = name
        self.age = age
        self.marks = marks

    def display(self):
        print(
            f" This is {self.name} \n {self.name}'s age is {self.age} \n And his/her marks is {self.marks}")


student1 = student("viraj", 18, 80)

student1.display()
