import os
import json
import csv

file_path = "test.txt"

if os.path.exists(file_path):
    print(f"The location {file_path} does exist")
    
    if os.path.isfile(file_path):
        print("that is a file")
    elif os.path.isdir(file_path):
        print("That is a directory")
else:
    print("The location does not exist")
    
#Python writing files (.txt, .json, .csv)

txt_data = "I like hotdogs!"
write_path = "output.txt"

foods = ["Hotdogs", "Burger", "Fries"]

try:
    #with handles closing the file, open returns a file object, as lets you refer to it as file
    with open(write_path, "w") as file: #w means write, x also writes but raises error if file exists, a appends the file, r reads the file
        for food in foods:
            file.write(food + " ") #write must have argument of str
except FileExistsError:
    print("that file already exists")
    
#.json files (key value pairs)

json_path = "output.json"

employee = {
    "name": "Spongebob",
    "age": 30,
    "job": "cook"
}

try:
    with open(json_path, "w") as file: 
        json.dump(employee, file, indent=4) #Converts dict to json string for output
except FileExistsError:
    print("that file already exists")
    
#.csv files (comma seperated values) usually spreadsheet of data
employees = [["Name", "Age", "Job"],
             ["Spongebob", 30, "Cook"],
             ["Patrick", 37, "Unemployed"], 
             ["Sandy", 27, "Scientist"]]

csv_path = "output.csv"

try:
    with open(csv_path, "w", newline="") as file: 
        writer = csv.writer(file)
        for row in employees:
            writer.writerow(row)
except FileExistsError:
    print("that file already exists")