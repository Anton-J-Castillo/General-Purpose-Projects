import math
import time

class Math():
    PI = math.pi
    E = math.e

class Arithmetic(Math):
    @staticmethod
    def add(a, b):
        return a + b

    @staticmethod
    def subtract(a, b):
        return a - b

    @staticmethod
    def multiply(a, b):
        return a * b
    
    @staticmethod
    def divide(a, b):
        return a / b
    
class Geometry(Math):
    @staticmethod
    def calculateArea(shape: str, *args: tuple) -> float:
        shape = shape.lower()
        match(shape):
            case "square":
                length = args[0]
                return pow(length, 2)
            case "rectangle":
                length = args[0]
                width = args[1]
                return length * width
            case "triangle":
                base = args[0]
                height = args[1]
                
                return (base * height) / 2
            case "circle":
                radius = args[0]
                
                return (Math.PI * (radius * radius))
        
    @staticmethod
    def isValidShape(shape):
        validShapes = ["square", "circle", "rectangle", "triangle"]
        
        if shape in validShapes:
            return True
        else:
            return False

def main():
    while True:
        print("****************CALCULATOR***************")
        mode = input("Choose a mode (Arithmetic, Geometry, Algebra) or 'q' to quit: ").lower()
        
        if mode.isdigit():
            mode = int(mode)
        
        match(mode):
            case "arithmetic" | 1:
                result = 0
                print("************ARITHMETIC*************")
                
                while True:
                    print(f"| {result} |")

                    operation = input("Enter an operation: (+, -, *, /) or 'q' to quit or 'c' to clear: ")

                    match(operation):
                        case "+":
                            number = input("Enter a number to add: ")
                            
                            try:
                                number = float(number)
                            except ValueError:
                                print("Please enter a valid number")
                                continue
                                            
                            result = Arithmetic.add(result, number)
                                
                        case "-":
                            number = input("Enter a number to subtract: ")
                            
                            try:
                                number = float(number)
                            except ValueError:
                                print("Please enter a valid number")
                                continue
                                            
                            result = Arithmetic.subtract(result, number)
                        case "*":
                            number = input("Enter a number to multiply by: ")
                            
                            try:
                                number = float(number)
                            except ValueError:
                                print("Please enter a valid number")
                                continue
                                            
                            result = Arithmetic.multiply(result, number)
                        case "/":
                            number = input("Enter a number to divide by: ")
                            
                            try:
                                number = float(number)
                            except ValueError:
                                print("Please enter a valid number")
                                continue
                            
                            if number == 0:
                                print("Cannot divide by 0")
                                continue

                                            
                            result = Arithmetic.divide(result, number)
                        case "c":
                            result = 0
                        case "q":
                            print("Exiting arithmetic...")
                            break
                        case _:
                            print("Invalid operation")
            case "geometry" | 2:
                result = 0
                print("************GEOMETRY*************")
                
                while True:
                    
                    operation = input("Pick what value to find (Area, Radius) or 'q' to quit: ").lower()
                    
                    match(operation):
                        case "area":
                            shape = input("Enter the shape you want area of: ")
                            
                            if Geometry.isValidShape(shape):
                                match(shape):
                                    case "square":
                                        length = input("Enter the length of the square: ")
                                        
                                        try:
                                            length = float(length)
                                        except ValueError:
                                            print("Invalid length")
                                            continue
                                        
                                        area = Geometry.calculateArea("square", length)
                                        print(f"Result: Area = {area} units^2")
                                    case "rectangle":
                                        length = input("Enter the length of the rectangle: ")
                                        width = input("Enter the width of the rectangle: ")
                                        
                                        try:
                                            length = float(length)
                                            width = float(width)
                                        except ValueError:
                                            print("Invalid length or width")
                                            continue
                                        
                                        area = Geometry.calculateArea("rectangle", length, width)
                                        print(f"Result: Area = {area} units^2")
                                    case "triangle":
                                        base = input("Enter the base of the triangle: ")
                                        height = input("Enter the height of the triangle: ")
                                        
                                        try:
                                            base = float(base)
                                            height = float(height)
                                        except ValueError:
                                            print("Invalid base or height")
                                            continue
                                        
                                        area = Geometry.calculateArea("triangle", base, height)
                                        print(f"Result: Area = {area} units^2")
                                    case "circle":
                                        radius = input("Enter the radius of the circle: ")
                                        
                                        try:
                                            radius = float(radius)
                                        except ValueError:
                                            print("Invalid radius")
                                            continue
                                        
                                        area = Geometry.calculateArea("circle", radius)
                                        print(f"Result: Area = {area} units^2")
                                    case _:
                                        print("Invalid shape")
                        case "q":
                            print("Exiting geometry")
                            break
                        case _:
                            print("Invalid option")
        
            case "q":
                print("Exiting program...")
                break
            case _:
                print("Invalid option")
if __name__ == '__main__':
    main()