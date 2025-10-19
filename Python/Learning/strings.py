# for x in "Hello World":
#     print(x)

string = "Hello"
size = len(string)

print("Hel" in string) #prints out a bool checking if the string is inside the string
if "Hel" in string:
    print("String found")

print("Hel" not in string)

string2 = "Hello World"
print(string2[2:7]) #start index is inclusing, but end index is not
print(string2[:7]) #Not inlcluding starting index means start from start
print(string2[2:]) #Not including ending index means end at end

print(string2[-5:-2]) #Negative means it goes 2 from the right to 5 from the right

#Modify Strings

a = " This is a string "
b = "Apple, Banana, Orange"
print(a.upper())
print(a.lower())
print(a.strip())
print(a.replace("This", "That"))
print(b.split(","))

#Concatenate Strings
c = "Hello"
d = "World"
e = 5

print(c + " " + d) # Cannot concatenate string with int

#Format Strings
stringA = "Hello"
intA = 5

price = 59

print(f"Hello I Am {intA} Years Old") #intA is a placeholder and can include variables, operations, functions, and modifiers

print(f"The price is {price:.2f} dollars") #.2f is a modifier that means fixed point number with 2 decimals, modifiers are accessed with a :
print(f"The price is {(29*50):.2f} dollars")

#Escape Characters - Used an escape character

txt = "We are the so-called \"Vikings\" from the north." # \ is an escape character
print(txt)
