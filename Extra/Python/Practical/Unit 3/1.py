
# Write a program to create a Student class with name,
# age and marks as data members.Also create a method named
# display() to view the student details.Create an object
# to  Student class and call  the  method f using  the object

class student:
    name = None
    age = 5
    marks = 0

    def display(self, name, age, marks):

        self.name = name
        self.age = age
        self.marks = marks
        print(
            f" This is {self.name} \n {self.name}'s age is {self.age} \n And his/her marks is {self.marks}")

        

student1 = student()

student1.display("viraj", 18, 80)

