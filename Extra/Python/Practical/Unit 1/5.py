
# Write a program to find out and display the common and
# the non common elements in the list using membership
# operators

array1 = [1,2,3,4,5]
array2 = [2,4,6,8,9]
array3 = []
array4 = []
i=0
j=0
while i < 5:

    if array1[i] in array2:
        array3.append(array1[i])

    elif array1[i] not in array2:
        array4.append(array1[i])    
    i=i+1


print("common number is : ",end=(" "))
print(array3)
print("not common number is : ",end=(" "))
print(array4)