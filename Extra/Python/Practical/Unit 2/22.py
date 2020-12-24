
# Write a program to convert the elements of two lists into key-value pairs of a dictionary.

list1 =[None]*3
list2 = [None]*3

for i in range(0, 3):
    
    key = (input("\n Enter your key : "))
    value = (input("\n Enter your value : "))

    list1[i] = key
    list2[i] = value

dic=dict(zip(list1,list2))

print("\n",dic)
    