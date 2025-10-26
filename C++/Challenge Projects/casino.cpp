#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

string createRow(string symbols[], int size, string results[]){
    string row = "| ";
    for(int i = 0; i < 3; i++){
        int randIndex = rand() % size;
        string symbol = symbols[randIndex];
        results[i] = symbol;
        row += symbol += " | ";
    }

    return row;
}

int calculateWinnings(string spun[3], int bet){
    if(spun[0] == spun[1] && spun[1] == spun[2]){
        return bet * 5;  // jackpot
    } 
    else if(spun[0] == spun[1] || spun[1] == spun[2] || spun[0] == spun[2]){
        return bet * 2;  // partial win
    }
    else{
        return 0;        // no win
    }
}

int main(){
    int balance = 100;
    int bet;
    int winnings;

    srand(time(0));
    string symbols[5] = {"🍇", "🍒", "🍌", "🥝", "🍓"};
    string results[3];

    do{
        cout << "\nThis is a casino game" << endl;
        cout << "\nYou currently have $" << balance << endl;
        cout << "Enter a bet amount please: ";

        cin >> bet;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        if (bet > balance){
            cout << "Insufficient Funds" << endl;
            continue;
        }

        if (bet <= 0){
            cout << "You must bet $1 or more" << endl;
            continue;
        }

        balance -= bet;
        cout << "You bet $" << bet << endl;

        cout << "Spinning..." << endl;
        this_thread::sleep_for(chrono::seconds(2));

        cout << createRow(symbols, sizeof(symbols) / sizeof(symbols[0]), results) << endl;

        int winnings = calculateWinnings(results, bet);
        balance += winnings;

        if(winnings > 0){
            cout << "You won $" << winnings << "!" << endl;
        } else {
            cout << "No win this time." << endl;
        }
    }while(balance > 0);

    return 0;
}