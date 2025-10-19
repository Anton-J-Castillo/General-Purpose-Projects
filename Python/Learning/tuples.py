myTuple = ("Apple", "Banana", "Cherry")
print(myTuple)
#Like a list, tuples are ordered and allow duplicate values; however, unlike lists, tuples cannot be changed
#All other attributes are identical to lists, but tuples are created with a comma

#The only way to change a tuple is to convert it into a list, change it, then change it back into a tuple

y = list(myTuple)
y[1] = "Orange"
myTuple = tuple(y)
print(myTuple)

#Use this to add or remove items

#You can also add items by adding two tuples together
x = (1, 2, 3)
z = (4,)

f = x + z
print(f)

del myTuple #Delete can completely delete a tuple, but to remove items inside of it, go back to lines 8-11

#Unpacking Tuples
fruits = ("apple", "banana", "cherry", "strawberry", "mango", "blueberry")
(green, yellow, *red) = fruits # * means rest of the values assigned to red

print(green)
print(yellow)
print(red)

(green, *yellow, red) = fruits # * on any other variable besides the last means that all values will be that variable until the number of variables matches number of values left

print(green, yellow, red)

#Loops work the same as with lists

#Joining Tuples
fruits1 = ("apple", "orange", "cherry", "apple")
fruits2 = ("strawberry", "grape", "blueberry")

print(fruits1 + fruits2)
print(fruits1 * 2)

#Tuple Methods
print(fruits1.count("apple")) #Returns the amount of indexes with a certain value
print(fruits1.index("apple")) #Returns first index which has a certain value