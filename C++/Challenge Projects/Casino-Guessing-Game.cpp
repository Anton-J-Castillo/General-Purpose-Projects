#include <iostream>
#include <ctime>
using namespace std;

int generateLuckyNumber(){
    int luckyNumber = (rand() % 10) + 1;

    return luckyNumber;
}

bool checkWinner(int guess, int luckyNumber){
    if(guess == luckyNumber){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    bool winner;
    int choice = 2;
    int guess;
    int luckyNumber;
    srand(time(0));

    do{

        if (choice == 2){
            luckyNumber = generateLuckyNumber();
        }

        cout << "This is a number guessing game" << endl;
        cout << "Guess a number" << endl;

        cin >> guess;

        if (guess < 1 || guess > 10) {
            cout << "Please enter a number between 1 and 10." << endl;
            continue;
        }
    
        winner = checkWinner(guess, luckyNumber);
        if (winner) {
            cout << "CONGRATS YOU WON A JACKPOT" << endl;
            break;
        }
        else{
            cout << "YOU LOST! \n";
            cout << "Choose an option from below: \n 1. Retry \n 2. Generate New Number \n 3. Quit \n";
            cin >> choice;

            switch(choice){
                case 1:{
                    continue;
                }
                case 2:{
                    continue;
                }
                case 3:{
                    break;
                }
            }
        }

    }while(true);

    return 0;
}