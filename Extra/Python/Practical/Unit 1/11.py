
# Write a program to search an element in the list using
# for loop and also demonstrate the use of “else” with for
# loop.

n = [2, 3, 4, 5, 6, 7]

uc = int(input("\n Which value you would like to choose : "))

for i in n:

    if i == uc:
        print("\n your value in a list.. ")
        break
else:
    print("\n your value not in a list")
