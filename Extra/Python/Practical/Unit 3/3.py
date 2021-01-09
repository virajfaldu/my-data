
# Write a program to demonstrate the use of instance and class/static variables

class employee:

    name = "none"
    salary = 30000
    role = "jober"

emp1 = employee()

emp1.name = "ravi"
emp1.salary = 25000
print(emp1.__dict__)
print(emp1.role)

employee.salary = 20000
print(employee.__dict__)
print(emp1.__dict__)

