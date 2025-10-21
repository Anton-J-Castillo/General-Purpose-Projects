#Dictionaries are used to store data values in key:value pairs.
# Dictionaries are used to store data values in key:value pairs.
# A dictionary is a collection which is ordered*, changeable and do not allow duplicates.

myDictionary = {
    "brand" : "Ford",
    "model" : "F-150",
    "year" : "2017",
    "year" : "2019", #can't have duplicate keys, first year key is overwritten
}

print(myDictionary["brand"])
print(myDictionary.get("brand")) #same as line 12
print(len(myDictionary))

thisdict = dict(name = "John", age = 36, country = "Norway")
thisdict["gender"] = "male" #Adds a new key and value
print(thisdict)

print(myDictionary.keys()) #returns all keys in the dictionary
print(myDictionary.values()) #returns all values in the dictionary
print(myDictionary.items()) #The items() method will return each item in a dictionary, as tuples in a list.

if "model" in myDictionary:
    print(myDictionary["model"])
    
#The update() method will update the dictionary with the items from a given argument. If the item does not exist, the item will be added.
myDictionary.update({"year" : 2020}) #The argument must be a dictionary, or an iterable object with key:value pairs.
myDictionary.update({"color" : "blue"})

#The pop() method removes the item with the specified key name:
myDictionary.pop("year")

#The popitem() method removes the last inserted item (in versions before 3.7, a random item is removed instead):
myDictionary.popitem()

#del myDictionary  #Deletes the dictionary
#del myDictionary["color"] #Deletes the key specified 
#myDictionary.clear() #Clears the dictionary

print(myDictionary)

#Looping through a dictionary 
#When looping through a dictionary, the return value are the keys of the dictionary, but there are methods to return the values as well.

for item in myDictionary:
    print(item) #prints all keys
    
for item in myDictionary:
    print(myDictionary[item]) #prints all values
    
for item in myDictionary.keys():
    print(item)
    
for item in myDictionary.values():
    print(item)
    
for key, value in myDictionary.items():
    print(key, value)
    
myDict = myDictionary.copy() #Creates a copy of the dictionary
theDict = dict(myDictionary) #Creates a copy as well
print(myDict)

#Nested Dictionaries
children = {
    "child1" : {
        "name" : "Anton",
        "age" : 16,
    },
    "child2" : {
        "name" : "Arbby",
        "age" : 10,
    },
}
#Same but make dictionaries first and then use then as values
child1 = {
  "name" : "Emil",
  "year" : 2004
}
child2 = {
  "name" : "Tobias",
  "year" : 2007
}
child3 = {
  "name" : "Linus",
  "year" : 2011
}

myfamily = {
  "child1" : child1,
  "child2" : child2,
  "child3" : child3
}

print(children["child1"]["age"])

for x, obj in children.items():
  print(x)

  for y in obj:
    print(y + ':', obj[y])