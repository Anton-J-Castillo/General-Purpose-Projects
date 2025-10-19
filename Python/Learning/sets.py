mySet = {"apple", "banana", "cherry", "apple"}
#Unlike Lists and Tuples, Sets are unordered and unindexed, and set values are unchangable; however, you can add or remove new items
#Set items also cannot have duplicate values
#Cannot access items by index, and cannot change an item once it has been set
print(mySet)

#Just like lists and tuples, you can use len, and sets have the datatype of set, but they can have items of any data type and can have multiple data types
print(len(mySet))
#You can also use the set constructor set()

#You cannot directly access an index of a set, but you can loop through and ask if an item exists
print("apple" in mySet)

#Adding and Removing Items
mySet.add("grape")
print(mySet)

mySet2 = ["pineapple", "mango", "watermelon"]
mySet.update(mySet2) #.update adds another iterable to a set, does not have to be a set itself
print(mySet)

mySet.remove("pineapple") #If pineapple is not inside the set, raises an error
print(mySet)

mySet.discard("pineapple") #If value not inside set, doesn't raise an error
print(mySet)

print(mySet.pop()) #You can also use .pop to remove an item, but this will remove a random item

#mySet.clear() #Empties the set
#print(mySet)
#del mySet #deletes the set

#Loop Sets
for fruit in mySet:
    print(fruit)
    
#Joining Sets

set1 = {"a", "b", "c"}
set2 = {1, 2, 3}

set3 = set1.union(set2) # .union() returns a new set with all items from both sets, can work with other iterables
set3 = set1 | set2 #same as .union(), but only works with sets
print(set3)

set1.update(set2) #Unlike union, this does not return a new set, rather it combines into the first set
print(set1)

#Both union and update deletes any duplicates

setA = {"apple", "banana", "cherry"}
setB = {"google", "microsoft", "apple"}

setC = setA.intersection(setB) # .intersection() returns a set with only items that are in both sets, the duplicates
setC = setA & setB # same as .intersection() but only works with other sets
print(setC)

setA.intersection_update(setB) # updates the first set with the 2nd set rather than returning a new set
print(setA)

#The difference() method will return a new set that will contain only the items from the first set that are not present in the other set.

setI = {"apple", "banana", "cherry"}
setII = {"google", "microsoft", "apple"}

setIII = setI.difference(setII)
setIII = setI - setII #same as difference(), but only works with other sets

print(setIII)

setI.difference_update(setII) #same as difference(), but changes the value of the first set rather than returning a new set
print(setI)

#The symmetric_difference() method will keep only the elements that are NOT present in both sets.

setX = {"apple", "banana", "cherry"}
setY = {"google", "microsoft", "apple"}

setZ = setX.symmetric_difference(setY)
setZ = setX ^ setY #same as symmetric_difference but only works with other sets

print(setZ)

setX.symmetric_difference_update(setY)  #same as symmetric_difference(), but changes the value of the first set rather than returning a new set
print(setX)

#frozenset is an immutable version of set
# Like sets, it contains unique, unordered, unchangeable elements.
# Unlike sets, elements cannot be added or removed from a frozenset.

x = frozenset({"apple", "banana", "cherry"})
print(x)
print(type(x))

#Frozensets can use all methods of sets except the ones that change the set like .add(), .update(), .remove(), .discard(), and .pop()

