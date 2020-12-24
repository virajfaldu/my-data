
# Write a program to accept elements in the form of a tuple and display its minimum, maximum, sum and average.

list1 = [None]*3
for i in range(0, len(list1)):
    
    ele=int(input("\n Enter your number : "))
    list1[i]=ele


tup = tuple(list1)

print("\n",tup)

max = -999
for i in range(0, len(tup)):
    if max < tup[i]:
        max = tup[i]
print("\n maximum : ",max)

min = 999
for i in range(0, len(tup)):
    if min > tup[i]:
        min = tup[i]
print("\n minimum : ",min)

sum = 0
for i in range(0, len(tup)):
    sum = sum + tup[i]
print("\n Sum : ", sum)

avg = sum/len(tup)
print("\n avg : ", "{:.2f}".format(avg))

