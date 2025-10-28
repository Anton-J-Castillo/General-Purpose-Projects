import time
import random

def loadWords(filename):
    with open(filename, "r") as file:
        # Read all lines, strip newline characters, and ignore empty lines
        words = [line.strip() for line in file if line.strip()]
    return words

def pickRandomWord(words):
    randomWord = random.choice(words)
    return randomWord

def createUnderscores(word, guessedLetters):
    text = ""
    for c in word:
        if c == " ":
            text += " "
        elif c in guessedLetters:
            text += c
        else:
            text += "_"
            
    return text
        
def searchForLetter(word, guess):
    for c in word:
        if c == guess:
            return True
        
    return False    

def updateHints(hintList, guessedLetters, word):
    newHints = []
    for c in word:
        if c not in guessedLetters and c.isalpha() and c not in newHints:
            newHints.append(c)
    return newHints

def main():
    while True:
        difficulty = input("Choose a difficulty: Easy, Medium, Hard, or Impossible: ")
        difficulty = difficulty.lower()
        
        if difficulty == "easy" or difficulty == "medium" or difficulty == "hard" or difficulty == "impossible":
            print(f"You have selected {difficulty} difficulty!")
            break
        else:
            print("Not a valid difficulty")
            continue
        
    if difficulty == "easy":
        wordsList = loadWords("hangman-easy.txt")
    elif difficulty == "medium":
        wordsList = loadWords("hangman-medium.txt")
    elif difficulty == "hard":
        wordsList = loadWords("hangman-hard.txt")
    elif difficulty == "impossible":
        wordsList = loadWords("hangman-impossible.txt")
        
    print("Loading...")
    time.sleep(2)
        
    incorrectLetters = []
    guessedLetters = []
    hintLetters = []
    numGuesses = 7
    gotHint = False
    
    randomWord = pickRandomWord(wordsList)
        
    while numGuesses > 0:
        
        print("*************HANGMAN**************")
        print(f"You have {numGuesses} guesses left")
        print(f"Incorrect guesses: {', '.join(incorrectLetters) if incorrectLetters else 'None'}")
        print(createUnderscores(randomWord, guessedLetters))
        hintLetters = updateHints(hintLetters, guessedLetters, randomWord)
        
        if numGuesses == 5 and len(guessedLetters) <= 3 and not gotHint and hintLetters:
            hint = random.choice(hintLetters)
            print(f"💡 Hint: One of the letters is '{hint}'")
            gotHint = True
        
        guess = input("Enter a letter guess: ").lower()
        
        if not guess.isalpha() or len(guess) != 1:
            print("Please enter a single letter (A–Z).")
            continue  
        
        if guess in guessedLetters:
            print(f"You already guessed {guess}")
            continue
        
        if guess in incorrectLetters:
            print(f"You already guessed {guess}")
            continue
                
        print("Checking if letter is correct...")
        time.sleep(0.7)
                
        if searchForLetter(randomWord, guess):
            if guess not in guessedLetters:
                print(f"{guess} is in the word")
                guessedLetters.append(guess)
        else:
            print(f"{guess} is not in the word")
            if guess not in incorrectLetters: 
                incorrectLetters.append(guess)
            numGuesses -= 1
            
        if all(c in guessedLetters or c == " " for c in randomWord):
            print(f"\n🎉 You guessed the word: {randomWord} 🎉")
            break
    else:
        print(f"Out of guesses! The word was {randomWord}")
                 
if __name__ == "__main__":
    main()