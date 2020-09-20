class Employee():
    no_of_leaves=50
    no_of_holiday=50
    #Constructor
    def __init__(self, aname, awork, asalary):
        self.name= aname
        self.work= awork
        self.salary= asalary

    def Emp_details(self):
        print(f"The name of Employee is {self.name}. He is {self.work} by profession. And he earns {self.salary}.")
    #Class method as constructor
    @classmethod
    def int_str(cls,string):
        param=string.split("-")
        return cls(param[0],param[1],param[2])
    # Static method
    @staticmethod
    def printhello(string):
        print("Hello", string)

# Single inheritance
class programmer(Employee):
    no_of_holiday=100
    programming_lang=["python","C++"]
#Single Inheritance
class player(Employee):
    Sports=["Football", "Cricket"]
# Multiple inheritance
class cool_Emp(programmer , player):
    no_of_holiday = 150
    no_of_leaves = 200

# Multi level inheritance
class Dad:
    pass
class Son(Dad):
    pass
class Grandson(Son):
    pass

#
harry=player("harry","youtuber",100000)
aditya=cool_Emp("aditya","Nala-ytb",100)
karan=programmer.int_str("karan-prog-1000000")

print(harry.no_of_holiday)
