
# Write a program to understand the order of execution of
# methods in several base classes according to method
# resolution order(MRO).//  overriding

class A:

    def print(self):
        print("Hey , I am perent class")


class B(A):

    def print(self):
        print("Hey , I am base class")

class1 = B()
class1.print()
