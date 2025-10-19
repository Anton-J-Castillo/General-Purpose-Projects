questions = (
    "1. What is 1+1",
    "2. What is 2^2",
    "3. What type of language is Python",
    "4. What type of language is C++",
)

options = (
    (
        "a. 2", "b. 5", "c. 8", "d. 9"
    ),
    (
        "a. 2", "b. 4", "c. 8", "d. 62"
    ),
    (
        "a. Low Level", "b. Snake", "c. Animal", "d. High Level"
    ),
    (
        "a. Low Level", "b. C", "c. Computer", "d. High Level"
    ),
)

answerKey = (
    "a", "b", "d", "a"
)

guesses = []
questionNumber = 0
correctAnswers = 0

for question in questions:
    print(question)
    for option in options[questionNumber]:
        print(option)
        
    guesses.append(input())
    
    if guesses[questionNumber].lower() == answerKey[questionNumber]:
        correctAnswers += 1
        
    questionNumber += 1
    
percent = (correctAnswers / len(questions)) * 100
print(f"You got a {percent}%!!")