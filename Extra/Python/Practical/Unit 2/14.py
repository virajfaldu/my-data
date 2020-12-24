
# Write a program to create a list using range
# functions and perform append, update and
# delete   elements operations in it


list1 = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

#------------------------- elements of append -------------------------

list1.append(23)
print("\n Append : ",list1)

#------------------------- elements of delete -------------------------

# remove value from the end of list
get=list1.pop()
print("\n Pop : ", list1)
print("",get)

# remove number by their value
list1.remove(10)
print("\n Remove : ",list1)

# clear all value from the list
list1.clear()
print("\n Clear : ", list1)

# delete list1 veriable 
# del list1
# print(list1)

#------------------------- elements of update -------------------------

list2 = [2, 3, 4, 5, 6]

list1.update(list2)
print(list1)