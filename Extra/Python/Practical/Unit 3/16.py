
# Write a program to overload the addition operator(+)
# to make it act on the class objects

class A:

    def __init__(self, a):
        self.a = a
    
    def __add__(self,a):
        self.c = self.a+a.a
        return self.c

class1 = A(23)
class2 = A(45)

c = class1 + class2
print("Answer is ",c)



