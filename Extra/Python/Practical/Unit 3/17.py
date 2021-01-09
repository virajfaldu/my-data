
# Write a program to show method overloading to find sum of two or three numbers.

class A:


    def add(self, a=None, b=None, c=None):
        
        if a != None and b != None and c != None:
            c = a+b+c
        elif a != None and b != None:
            c = a + b
        return c


class1 = A()

c = class1.add(23, 4)
print(c)
c = class1.add(23, 4,45)
print(c) 

