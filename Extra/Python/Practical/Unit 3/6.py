
# Write  a  program  to  create  a  static  method  that  counts the number of instances created for a class


class books:

    page_type = "paper"

    def __init__(self, author, page, DOR):
        self.author = author
        self.page = page
        self.DOR = DOR

    @staticmethod
    def print():
        print("This is static method")


b1 = books("RJ Dhavanit", 128, 2019)
print(b1.__dict__)

b1.print()
