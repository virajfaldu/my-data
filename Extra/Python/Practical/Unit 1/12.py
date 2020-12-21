
# Write a python program that asks the user to enter a
# length in centimeters. If the user enters a negative
# length, the program should tell the user that the entry is
# invalid. Otherwise, the program should convert the
# length to inches and print out the result. (2.54=1 inch).


cm = float(input("\n Enter lengh in centimeter : "))

if cm < 0:
    print("you enter in valid number : ")
else:
    inches = cm / 2.54
    print("\n Inches = ",inches)