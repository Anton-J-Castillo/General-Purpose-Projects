def addNumbers(*nums):
    total = 0
    for num in nums:
        total += num
    return total
    
def getAddress(*args, **kwargs):
    for arg in args:
        print(arg, end=" ")    
        
    print()
        
    for value in kwargs.values():
        print(value, end=" ")

print(getAddress("Anton", "Jared", "Castillo",
                 address = "123 Fake Street",
                 zip = "54321",
                 apt = "100"))
# print(addNumbers(5,45,5,56,6,6))