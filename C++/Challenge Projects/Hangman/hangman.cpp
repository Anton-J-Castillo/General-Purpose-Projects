#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>
#include <cctype>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

string pickRandomWord(vector<string>& words, int size){
    int randomIndex = rand() % size;
    
    return words[randomIndex];
}

bool gotCorrect(char c, vector<char> correctLetters){
    for (char character : correctLetters){
        if (c == character){
            return true;
        }
    }

    return false;
}

string createUnderscores(string word, vector<char> correctLetters){
    string text;
    for (char c: word){
        if (isspace(c)){
            text += " ";
        }
        else if(gotCorrect(c, correctLetters)){
            text += c;
        }
        else{
            text += "_";
        }
    }
    return text;
}

bool checkWordForChar(char guess, string word, vector<char> correctLetters){
    for(char c: word){
        if (guess == c && !gotCorrect(c, correctLetters)) {
            return true;
        }
    }

    return false;
}

bool allLettersGuessed(string word, vector<char> correctLetters) {
    for (char c : word) {
        if (!isspace(c) && !gotCorrect(c, correctLetters)) {
            return false; // found a letter that hasn’t been guessed yet
        }
    }
    return true; // all letters guessed
}

int main(){
    srand(time(0));
    vector<string> wordsList;
    ifstream file("words.txt"); // open file

    if (!file) {
        cout << "Error: Could not open words.txt" << endl;
        return 1;
    }

    string word;
    while (getline(file, word)) {  // read line by line
        if (!word.empty()) {
            wordsList.push_back(word);
        }
    }
    file.close();    string input;

    char guess;
    int numGuesses = 7;
    vector<char> correctLetters;
    
    string randomWord = pickRandomWord(wordsList, wordsList.size());
    
    do {
        
        if (allLettersGuessed(randomWord, correctLetters)) {
            cout << "Congratulations! You guessed the word: " << randomWord << endl;
            break; // exit the loop
        }

        cout << "\nThis is a game of hangman\n" << endl;
        cout << "You have " << numGuesses << " guesses left" << endl;
        cout << createUnderscores(randomWord, correctLetters) << endl;
        cout << "Please enter a guess: ";

        cin >> input;

        if (input.length() != 1) {
            cout << "Please enter exactly one character." << endl;
            continue;
        }

        guess = input[0];

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        if (gotCorrect(guess, correctLetters)) {
            cout << "You already guessed '" << guess << "'!" << endl;
            continue;
        }
        
        if (checkWordForChar(guess, randomWord, correctLetters) == true){
            correctLetters.push_back(guess);
            cout << guess << " is in the word" << endl;
            continue;
        }
        else{
            cout << guess << " is not in the word" << endl;
            numGuesses -= 1;
        }

        if (numGuesses == 0) {
            cout << "Game over! The word was: " << randomWord << endl;
            break;
        }
        
    } while(numGuesses >= 0);

    return 0;
}