#Lists
myList = ["Banana", "Apple", "Cherry"] #Lists are used to store multiple items in a single variable.
print(myList)
# List items are ordered, changeable, and allow duplicate values.
# List items are indexed, the first item has index [0], the second item has index [1] etc.

#Lists have a fixed order and they are changable
myList2 = ["Banana", "Apple", "Cherry", "Cherry", "Apple"] #Can have duplicate values
print(myList2)
print(len(myList2)) #returns how many items

myList3 = ["Banana", True, 5, 5.5] #lists can be any datatype and can have multiple datatypes
print(myList3) #List always has a datatype of list

myList4 = list(("apple", "banana")) #List constructor, same as myList4 = ["banana", "apple"], converts a tuple to a list
print(myList4)

#Accessing Lists
print(myList2[:3])
print("Orange" in myList)

#Changing Lists
thisList = [1, 3, 5, 7, 9]
thisStringList = ["Banana", "Watermelon", "Apple", "Orange", "Grape"]
# thisList[0] = 100
# thisList[0:3] = 100, 500, 900
thisList[0:3] = [1] #Slicing must have an iterable
print(thisList)

thisStringList.insert(2, "Strawberry") #Adds a new list item at index 2 without removing or changing any items 
print(thisStringList)

#Adding items
theList = [1, 3, 5, 7, 9, 11, 1]
theirList = [15, 17, 19, 21]
theList.append(13) # adds 13 at the end
theList.insert(1, 2) #inserts 2 at index 1
print(theList)

theList.extend(theirList) #Appends another iterable to the end of a list, can be sets, tuples

print(theList)

#Removing Items
theList.remove(1) #remove deletes the first occurence of that value in the list
print(theList)
theList.pop(1) #pop deletes an element at a specified index
print(theList)
theList.pop() #pop without an argument deletes the last element

whatList = [1, 3, 5]
#del whatList[1] #del also deletes at a specified index
#print(whatList)
# del whatList -> del can also delete an entire list and the list itself

# whatList.clear() #clear empties a list, but the list itself still exists
# print(whatList)

#Looping a list

for num in whatList:
    print(num)
    
for i in range(len(whatList)):
    print(whatList[i])
    
i = 0
while i < len(whatList):
    print(whatList[i])
    i+=1
    
[print(x) for x in whatList]

#Sorting Lists
theList2 = ["orange", "mango", "kiwi", "pineapple", "banana"]
theList2.sort() #sort sorts the list alphanumerically ascending by default
print(theList2)

theList2.sort(reverse=True) #sorts the list in descending Order
print(theList2)

#Sorts the list based on how close each number is to 50
def myfunc(n):
  return abs(n - 50)

howList = [100, 50, 65, 82, 23]
howList.sort(key = myfunc) #Calls the function and uses that return value when sorting
print(howList)

howList2 = ["banana", "Orange", "Cherry"] #sort is case sensitive, uppercase always comes before lowercase
howList2.sort(key = str.lower)
print(howList2)

howList2.reverse() #reverses order regardless of alphabet
print(howList2)

#Joining Lists 
howList3 = howList + howList2
print(howList3)

howList.extend(howList2)
print(howList)

for x in howList2:
    howList.append(x)
    
print(howList)
