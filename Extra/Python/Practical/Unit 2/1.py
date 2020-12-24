
# Write a program to create one array from another array.

array1 = [1, 2, 3, 4, 6]
array2 = [None] * len(array1)

for i in range(0,5):
    array2[i]=array1[i]


print(array2)
