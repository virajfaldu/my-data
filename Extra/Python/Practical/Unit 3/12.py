
# Write a program to implement single inheritance in
# which two sub classes are derived from a single base
# class.


class A:
     
     a = 3
     pass

class B(A):

    def print(self):
        print("from B a = ", self.a)

class C(A):

    def print(self):
        print("from C a = ", self.a)

class1 = B()
class2 = C()

class1.print()
class2.print()
        
        