
import employee

basic = int(input("\n Enter basic salary : "))

DA = employee.da()

HRA = employee.hra()

PF = employee.pf()

ITAX = employee.itax()

gross_salary = DA+HRA+basic
net_salary = gross_salary - (PF + ITAX)

print("\n Your gross salary : ", gross_salary)

print("\n Your net salary : ",net_salary,"\n")
