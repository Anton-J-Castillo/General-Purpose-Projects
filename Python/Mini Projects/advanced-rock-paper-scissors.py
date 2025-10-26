import random
import time

options = ("rock", "paper", "scissors", "gun", "sword", "tank", "rocket", "laser")
choice = 0
wins = 0

def generateComputerChoice():
    choice = random.choice(options)
    return choice

def checkWinner(userChoice, computerChoice):
    if userChoice == computerChoice:
        return "Tie"
    elif (userChoice == "rock" and computerChoice == "scissors") or (userChoice == "scissors" and computerChoice == "paper") or (userChoice == "paper" and computerChoice == "rock"):
        return "User"
    elif userChoice != "rock" or "paper" or "scissors":
        return "User"
    else:
        return "Computer"
    
while choice != 3:
    print("\nThis is a game of Rock-Paper-Scissors\n")
    print("Pick an option from below:\n1. Play\n2. Stats\n3. Quit\n")
    choice = int(input("Enter 1 - 3 to choose: "))
        
    match(choice):
        case 1:
            userChoice = (input("Choose Rock, Paper, or Scissors: ")).lower()
            
            if userChoice not in options:
                print("Invalid choice")
                continue
            
            computerChoice = generateComputerChoice()
            
            print(f"You chose {userChoice}")
            print("Computer is thinking...")
            time.sleep(3)
            print(f"Computer chose {computerChoice}")
            
            winner = checkWinner(userChoice, computerChoice)
            print("Checking Winner...")
            time.sleep(1.5)
            
            if winner == "Tie":
                print("It was a tie")
            elif winner == "User":
                print("YOU WON!")
                wins += 1
            else:
                print("YOU LOST!")
        case 2:
            print(f"Wins: {wins}")
        case 3:
            print("\nThanks for playing!")
            break