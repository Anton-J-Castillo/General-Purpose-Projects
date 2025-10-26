import random

numberOfGuesses = 0
prize = 10000
guess = 0

def generateRandomNum():
    randomNumber = random.randrange(1,  101)
    return randomNumber

randomNum = generateRandomNum()
print(randomNum)

while numberOfGuesses < 5:
    print("\nThis is a number guessing game \n")
    
    guess = int(input("Enter a number between 1-100 or 0 to Quit: "))
    
    if guess <= 100 and guess >= 1:
        if guess == randomNum:
            print(f"You guessed correctly! The number was {randomNum}")
            break
        elif guess > randomNum:
            print(f"The number is less than {guess}")
            numberOfGuesses += 1
        elif guess < randomNum:
            print(f"The number is greater than {guess}")
            numberOfGuesses += 1
        else:
            print("Could not compare number to guess")
        print(f"You have {5 - numberOfGuesses} guesses left \n")
    elif guess == 0:
        print("Thanks for playing")
        break
    else:
        print("Please enter a number between 0 and 100 \n")
        continue 
else:
    print("You ran out of guesses")