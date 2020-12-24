
# create a program to search the position of an element in an array using index() method of array class

arry = [2, 1, 4, 6, 8, 0, 3]

num = int(input("Enter your value for find position : "))

if num in arry:
    print(arry.index(num) + 1,"th postion")

elif num not in arry:
    print("your number not in arrray")