
# Write a program to assert the user enters a number
# greater than zero.

while True:
    number = int(input("\n Enter your number : "))
    if number > 0:
        print("\n you entered correct number")
        break
    elif number <= 0:
        print("\n you entered invalid number try again ......")
