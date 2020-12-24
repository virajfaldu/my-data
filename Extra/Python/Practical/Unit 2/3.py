
# Write a program to understand various methods of array class mentioned:
# append,  insert,  remove,  pop,  index, tolist and count

array1 = [1, 2, 3, 1, 5, 7, 6]

array1.append(90)
print("\nAppend : ", array1)

array1.insert(2,30)
print("\nInsert : ", array1)

array1.remove(30)
print("\nRemove : ", array1)

array1.pop(7)
print("\nPop : ", array1)

arr=array1.index(2)
print("\nIndex : ", arr)

arr=array1.count(1)
print("\ncount : ", arr)
