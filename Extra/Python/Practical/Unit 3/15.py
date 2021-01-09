
# Write a program to check the object type to
# know whether the method exists in the object
# or not.

class A:

    def print(self):
        print("Hey , I am perent class")


B = A()

x = hasattr(B, "print")
print(x)
