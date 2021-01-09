
# Write  a  program  to  implement  multiple  inheritance using two base classes.

class A:

    a = 3

class B:

    b = 6

class C(A,B):

    def print(self):
        print(f" from C a={self.a} \n from B b={self.b}")

class D(A,B):

    def print(self):
        print(f" from D a={self.a} \n from B b={self.b}")

class1 = C()
class2 = D()

class1.print()
class2.print()
