import math
import random
import time

def calculate(operation, *args):
    if operation.lower() == "add":
        total = 0
        for arg in args:
            total += arg
        return total
    elif operation.lower() == "subtract":
        total = 0
        for arg in args:
            total -= arg
        return total
    elif operation.lower() == "multiply":
        total = 1
        for arg in args:
            total *= arg
        return total
    elif operation.lower() == "divide":
        total = 1
        for arg in args:
            total /= arg
        return total
    
print(calculate("multiply", 56, 40))