import math
calculateType = input("Enter what you want to calculate: Addition, Subtraction, Multiplication, Division, Hypotenuse, Area, Circumference, Square Root: ")

if calculateType.lower() == "addition":
    x = float(input("Enter number 1: "))
    y = float(input("Enter number 2: "))
    
    print(x + y)
elif calculateType.lower() == "subtraction":
    x = float(input("Enter number 1: "))
    y = float(input("Enter number 2: "))
    
    print(x - y)
elif calculateType.lower() == "multiplication":
    x = float(input("Enter number 1: "))
    y = float(input("Enter number 2: "))
    
    print(x * y)
elif calculateType.lower() == "division":
    x = float(input("Enter number 1: "))
    y = float(input("Enter number 2: "))
    
    print(x / y)
elif calculateType.lower() == "hypotenuse":
    x = float(input("Enter number 1: "))
    y = float(input("Enter number 2: "))
    
    print(math.sqrt(pow(x,2) + pow(y, 2)))
elif calculateType.lower() == "area":
    x = float(input("Enter number 1: "))
    y = float(input("Enter number 2: "))
    
    print(x * y, "units squared")
elif calculateType.lower() == "square root":
    x = float(input("Enter a number: "))
    
    print(math.sqrt(x))
elif calculateType.lower() == "circumference":
    r = float(input("Enter the radius: "))
    
    print(2 * r * math.pi)