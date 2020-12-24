
# Write  a  program  to  demonstrate  the  use  of  Positional argument,
# keyword argument and default arguments

def person(name,age=18):
    
    print("\nPerson name : ", name)
    print("\nPerson Age  : ",age,"\n")
    

person("viraj", 18)  # posional argument

person(age="18", name="jay")  # keyword argument

person(name="ishwar") # default argument