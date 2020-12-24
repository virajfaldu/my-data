
# Create  a  decorator  function  to  increase  the  value  of  a function by 3.


def decorator(x): return x + 3


num = int(input("\n Enter your number : "))
print("\n Your answer is", decorator(num), "\n")
