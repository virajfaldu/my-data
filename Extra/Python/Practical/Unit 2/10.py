
# Write a program to show variable length argument and its use.

def sum(a, *b):

    c = a

    for i in b:
        c = c + i
        
    print("\n","Your ans : ", c, "\n")


sum(2,3,4,5,6)
