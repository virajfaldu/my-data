
# Create a sample list of 7 elements and implement the List
# methodsmentioned: append, insert, copy, extend, count,
# remove, pop, sort, reverse and clear.

list1 = [1, 3, 5, 7, 9, 11, 13]

list1.append(15)
print("\n Append : ", list1)

list1.insert(1,2)
print("\n Insert: ", list1)

list2=list1.copy()
print("\n Copy : ", list2)

list2.extend(list1)
print("\n Insert: ", list2)

c=list2.count(11)
print("\n Count : ", c)

list2.sort()
print("\n Sort : ", list2)

list1.reverse()
print("\n Reverse : ", list1)

list2.clear()
print("\n clear : ", list2)
