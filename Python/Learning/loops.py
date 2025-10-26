# i = 1
# while i < 6:
#   print(i)
#   if i == 3:
#     break
#   i += 1
  
i = 0
while i < 6:
  i += 1
  if i == 3:
    continue #Skips rest of the loop and moves on to next iteration
  print(i)
else: #Runs if the loop finishes, not counting break
  print("i is no longer less than 6")
  
fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)
  if x == "banana":
    break #With the break statement we can stop the loop before it has looped through all the items:

for x in range(6): #Range is exclusive, range(6) is 0 - 5
  print(x) 

for x in range(2, 6): #default is start from 0, but can specify
  print(x)
  
for x in range(2, 30, 3): #default is 1 increment, but can change like in this case increment by 3
  print(x)
else:
  print("Finally finished!") #prints only if loop finishes without break
  
for x in [0, 1, 2]:
  pass #Use pass instead of leaving it empty