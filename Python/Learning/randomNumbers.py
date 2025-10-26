import random

low = 1
high = 100
options = ("rock", "paper", "scissors")
cards = ["2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "K", "Q", "A"]

number = random.randint(low, high)

for i in range(0, 4):
    print(number)
    number = random.randint(low, high)
    
number2 = random.random() #Floating point between 0 and 1

option = random.choice(options) #Picks random element from iterable
print(option)

random.shuffle(cards)

print(cards)