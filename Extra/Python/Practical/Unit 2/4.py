

# Write a program to sort the array elements using bubble sort technique

arry = [8, 7, 6, 5, 4, 3, 2, 1]

for i in range(0,len(arry)):

    for j in range(0,7-i):
        if arry[j] > arry[j + 1]:
            arry[j], arry[j + 1] = arry[j + 1], arry[j]


print(arry)
