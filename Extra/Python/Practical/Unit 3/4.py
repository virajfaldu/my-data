
# Write a program to store data into instances using
# mutator methods and to retrieve data from the instances
# using accessor methods


class phone:

    def __init__(self, campany, ram, camera):
        self.campany = campany
        self.ram = ram
        self.camera = camera
    def change_camera(self, camera):
        self.camera=camera

    
p1 = phone("Redmi","4Gb","49Mp")
p2 = phone("Realme","6Gb", "64Mp")

# mutator method.......................

p1.change_camera("12Mp")
print("\n P1 camera = ",p1.camera)

# accessor method.......................

print(f"\n Campany Name = {p2.campany} \n Ram = {p2.ram} \n Camera = {p2.camera}\n")



        
