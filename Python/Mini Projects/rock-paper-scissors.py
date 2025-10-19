import random

def getComputerChoice():
    randomNumber = random.randrange(1, 4)
    
    if randomNumber == 1:
        return 'r'
    elif randomNumber == 2:
        return 'p'
    elif randomNumber == 3:
        return 's' 

def getWinner(userChoice, computerChoice):
    if userChoice == 'r' and computerChoice == 's':
        return True
    elif userChoice == 'p' and computerChoice == 'r':
        return True
    elif userChoice == 's' and computerChoice == 'p':
        return True
    else:
        return False

userChoice = input("Choose 'r' for rock, 's' for scissors, or 'p' for paper: ")    
computerChoice = getComputerChoice()

print("You chose", userChoice)
print("Computer chose", computerChoice)

winner = getWinner(userChoice, computerChoice)

if winner:
    print("You won")
else:
    print("You lost")