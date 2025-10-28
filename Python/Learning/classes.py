class Person:
    
    race = "Human"
    
    def __init__(self, name, age, occupation):
        self.name = name
        self.age = age
        self.occupation = occupation
        
    def work(self):
        print(f"{self.name} is working")
    
class Student(Person):
    def work(self):
        print(f"{self.name} is studying")
        
    def doHomework(self):
        print(f"{self.name} is doing homework")
        
class Janitor(Person):
    
    def work(self):
        print(f"{self.name} is mopping")
        
    def getSalary(self):
        print(f"{self.name} got paid")
        
class Computer():
    def __init__(self):
        self.cpu = self.CPU()
        self.ram = self.RAM()
        
    class CPU():
        def process(self):
            print("processing")
    class RAM():
        def allocate(self):
            print("Allocating memory")
        
person1 = Person("Anton" , 16, "None")
student1 = Student("Argz", 18, "Student")
janitor1 = Janitor("Arbby", 20, "Janitor")

student1.doHomework()
janitor1.getSalary()

person1.work()
student1.work()
janitor1.work()

computer1 = Computer()
computer1.cpu.process()
computer1.ram.allocate()