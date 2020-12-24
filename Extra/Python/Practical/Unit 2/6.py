
# Write  a  program  to  generate  prime  numbers with the help of a function to test prime or not

def prime(num):

    count = 0
    for i in range(1,num+1):
        if (num % i == 0):
            count = count + 1
            
    if count == 2:
        return True



num = int(input("enter your value : "))
if (prime(num)):
    print("true")
else:
    print("not prime")