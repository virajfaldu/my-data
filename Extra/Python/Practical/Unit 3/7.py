
# Create a Bank class with two variables name and balance.
# Implement a constructor to initialize the variables.Also
# implement   deposit and withdrawals using instance methods.


class bank:

    def __init__(self, name, b):
        self.name = name
        self.balance = b
    
    def d_and_w(self, d, w):
        self.balance = self.balance + d
        
        if self.balance>w:
            self.balance = self.balance - w
        
        else:
            print("you are not eligible to withdrawal")
            
        
bk1 = bank("jems", 50000)

bk1.d_and_w(20000, 3000)

print(bk1.__dict__)


