
# Write a program to override super class constructor and
# method in sub class.

class base():

    def __init__(self):
        print("this is form the base class")
    
    def add(self, a, b):
        self.a = a
        self.b = b
        self.c = self.a-self.b
        print(self.c)

class driven(base):

    def __init__(self):
        print("this is form the base class")

    def add(self, a, b):
        self.a = a
        self.b = b
        self.c = self.a + self.b
        print(self.c)  

d1 = driven()
d1.add(5,9)