

#     1
#    121
#   12321
#  1234321
# 123454321


# ------------------------------ Sanke Water Gun ------------------------------

# import random
# import itertools

# robo = ['s', 'w', 'g']
# robo_choice = random.choice(robo)
# for i in itertools.cycle(range(0,4)):
#     me=input("\n Enter your choice : ")

#     if (robo_choice == 's' and me == 'w'):
#         print("\n Robo Choose Sanke\n so Mr.viraj You Lose This Match....")
#     elif (robo_choice == 's' and me == 'g'):
#         print("\n Robo Choose Sanke\n Mr.viraj You Win This Match....")
#     elif (robo_choice == 's' and me == 's'):
#         print("\n Robo Choose Sanke\n No One Lose And Win This Match....")
#     elif (robo_choice == 'w' and me == 's'):
#         print("\n Robo Choose Water\n Mr.viraj You Win This Match....")
#     elif (robo_choice == 'w' and me == 'g'):
#         print("\n Robo Choose water\n Mr.viraj You Lose This Match....")
#     elif (robo_choice == 'w' and me == 'w'):
#         print("\n Robo Choose Water\n No One Lose And Win This Match....")
#     elif (robo_choice == 'g' and me == 'w'):
#         print("\n Robo Choose Gun\n Mr.viraj You Win This Match....")
#     elif (robo_choice == 'g' and me == 'g'):
#         print("\n Robo Choose Gun\n No One Lose And Win This Match....")
#     elif (robo_choice == 'g' and me == 's'):
#         print("\n Robo Choose Gun\n Mr.viraj You Lose This Match....")
#     elif (me == "q"):
#         break
#     else:
#         print("\n Invalid Choice")

# --------------------------------------------------------------------------------------------


# class student:

#     name = "Viraj"
#     std = "sy"
#     course = "BCA"

#     def __init__(self, name, std, course):
#         self.name = name
#         self.std = std
#         self.course = course

#         print(f"hey i am {name} i am from {std} {course}.")


# myim = student(std="ty", name="faldu", course="MCA")
# yourim = student(std="ty", name="patel", course="BCA")

# --------------------------------------------------------------------------------------------

# def dec1(func1):
#     def nowexec():
#         print("Executing now")
#         func1()
#         print("Executed")
#     return nowexec


# @dec1
# def who_is_jerry():
#     print("jerry is a good boy")

# # who_is_jerry = dec1(who_is_harry)


# who_is_jerry()


# -----------------------------------------------------------------

# t1 = int(input("\nEnter your first time :"))
# t2 = int(input("\nEnter your second time :"))

# if t1 < t2:
#     num_of_hour = t2 - t1
# elif t1 > t2:
#     num_of_hour = t1 - t2
#     num_of_hour=12-num_of_hour
# print(num_of_hour)

# -----------------------------------------------------------------

# class student:

#     def __init__(self, name, rollno, att,s1,s2,s3):
#         self.name = name
#         self.rollno = rollno
#         self.att = att
#         self.subject = self.sub(s1,s2,s3)

#     def show(self):
#         print(f"\n Name : {self.name} \n Roll No. : {self.rollno} \n Attendence : {self.att}")
#         self.subject.show()

#     class sub:

#         def __init__(self, s1, s2, s3):
#             self.s1 = s1
#             self.s2 = s2
#             self.s3 = s3

#         def show(self):
#             print(
#                 f" Subject1 : {self.s1} \n Subject2 : {self.s2} \n Subject3 : {self.s3}\n")
                        
            
# s1 = student("viraj", 28, 3,30,45,36)

# s1.show()
# print(s1.subject.__dict__)

