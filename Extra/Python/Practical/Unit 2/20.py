
# Write a program to create a dictionary from the user and display the elements.

dic= {}

no_dic = int(input("\n How many you want dic to insert : "))

for i in range(0, no_dic):
    
    keys = input("\n Enter a key : ")
    value = input("\n Enter a value : ")
    
    dic[keys]=value
    print("\n", keys, ':', value, "\n")

