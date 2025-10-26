age = 16

if age == 16:
    pass #Use pass for testing
elif age == 14:
    pass
else:
    print("Not 16")
    
#match statements
day = 4
match day: #Evaluates day and looks for case with matching value
  case 1:
    print("Monday")
  case 2:
    print("Tuesday")
  case 3:
    print("Wednesday")
  case 4:
    print("Thursday")
  case 5:
    print("Friday")
  case 6:
    print("Saturday")
  case 7:
    print("Sunday")
  case _: #The default case if none of the cases match
    print("Looking forward to the Weekend")
    
match day:
  case 1 | 2 | 3 | 4 | 5: #Use the pipe character | as an or operator in the case evaluation to check for more than one value match in one case:
    print("Today is a weekday")
  case 6 | 7:
    print("I love weekends!")
    
month = 4

match day:
  case 1 | 2 | 3 | 4 | 5 if month == 4: #If statement adds additional condition, if day matches a case, then check month, otherwise move on to the next case
    print("A weekday in April")
  case 1 | 2 | 3 | 4 | 5 if month == 5:
    print("A weekday in May")
  case _:
    print("No match")