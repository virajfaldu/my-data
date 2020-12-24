
# Create a program to sort tuple with nested tuples

tup1 = (2, 34, 21, 45, 23)

list1 = list(tup1)

for i in range(0, len(list1)):
    
    for j in range(0, len(list1) - i-1):
        
        if list1[j] > list1[j + 1]:
            list1[j],list1[j + 1] = list1[j+1],list1[j]

print(list1)