
# from a sub class by using super() method and also
# Write a program to access the base class constructor
# without using super() method.


class base():

    def __init__(self, txt):
        self.txt = txt
        print(self.txt)

class driven(base):

    # def __init__(self,txt):
    #   super().__init__(txt)
    pass


d1 = driven("hello")