
# Create a program to display memory locations of two
# variables using id() function, and then use identity
# operators two compare whether two objects are same or
# not.

var1 = "c"
var2 = "c++"
var3 = "c"

print(id(var1))
print(id(var2))
print(id(var3))

if var1 is var2:
    print("var1 and var2 is same")
if var1 is var3:
    print("var1 and var3 is same")
if var1 is not var2:
    print("var1 and var2 is not same")
if var1 is not var3:
    print("var1 and var3 is not same")