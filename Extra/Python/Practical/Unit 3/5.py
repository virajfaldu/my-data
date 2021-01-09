
# Write  a  program  to  use class method  to  handle  the common features of all the instance ofStudent class


class books:

    page_type = "paper"

    def __init__(self,author,page,DOR):
        self.author = author
        self.page = page
        self.DOR = DOR
    
    @classmethod
    def change_type(cls,t):
        cls.page_type = t


b1 = books("RJ Dhavanit", 128, 2019)
print(b1.__dict__)

books.change_type("E-books")
print(b1.page_type)
