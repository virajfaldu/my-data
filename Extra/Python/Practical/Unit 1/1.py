
# Write a program to swap two numbers without taking a
# temporary variable.

num1=int(input("enter first number : "))
num2=int(input("enter second number : "))

num1,num2 = num2,num1

print(f"num = {num1} num2 = {num2}")