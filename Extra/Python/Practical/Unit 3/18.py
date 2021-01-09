
# Write a program to override the super class method in subclass

class A:

    def print(self):
        print("Hey , I am perent class")


class B(A):

    def print(self):
        print("Hey , I am base class")


class1 = B()
class1.print()
