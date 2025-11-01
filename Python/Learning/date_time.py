import datetime

date = datetime.date(2025, 1, 2) #year, month, day
today = datetime.date.today()

time = datetime.time(12, 30, 0) #hour, minute, second
now = datetime.datetime.now()

now = now.strftime("%H:%M:%S %m-%d-%Y") 

target_dateTime = datetime.datetime(2030, 1, 2, 12, 30, 1)
current_dateTime = datetime.datetime.now()

if target_dateTime < current_dateTime:
    print("Target date has passed")
else:
    print("Target date has not passed")