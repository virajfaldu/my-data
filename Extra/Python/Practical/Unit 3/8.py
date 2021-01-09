
class EMP:

    def __init__(self, name):
        self.name = name
        

class CS(EMP):

    def cal_sal(self, days, sal):
        self.sal = sal
        self.days = days

        self.salary = self.sal*self.days

    def show(self):
        print(self.name,self.salary,)


cs = CS("viraj")

cs.cal_sal(3, 100)

cs.show()