import json
import csv

file_path = "output.txt"
json_path = "output.json"
csv_path = "output.csv"

try:
    with open(file_path, "r") as file:
        content = file.read()
        print(content)
except FileNotFoundError:
    print("File doesn't exist")
    
try:
    with open(json_path, "r") as file:
        content = json.load(file)
        for key, value in content.items():
            print(key, value)
except FileNotFoundError:
    print("File doesn't exist")
    
try:
    with open(csv_path, "r") as file:
        content = csv.reader(file)
        for line in content:
            print(line[2])
except FileNotFoundError:
    print("File doesn't exist")