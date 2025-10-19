#include <iostream>
#include <ctime>
using namespace std;

char getComputerChoice(){
    char computerChoice;

    int randNumber = (rand() % 3) + 1;

    switch(randNumber){
        case 1:
            computerChoice = 'r';
            break;
        case 2:
            computerChoice = 's';
            break;
        case 3:
            computerChoice = 'p';
            break;
        default:
            return 0;
    }

    return computerChoice;
}
string checkWinner(char userChoice, char computerChoice){
    if (userChoice == computerChoice){
        return "Tie";
    }
    else if (userChoice == 'r' && computerChoice == 's'){
        return "User";
    }
    else if (userChoice == 's' && computerChoice == 'p'){
        return "User";
    }
    else if (userChoice == 'p' && computerChoice == 'r'){
        return "User";
    }
    else{
        return "Computer";
    }
}

int main(){
    char playerChoice;
    char computerChoice;
    string winner;

    srand(time(0));

    do{
        cout << "This is a game of rock paper scissors" << endl;
        cout << "Enter your choice: 'r' for rock, 's' for scissors or 'p' for paper" << endl;
        cin >> playerChoice;

        playerChoice = tolower(playerChoice);
        computerChoice = getComputerChoice();

        cout << "Your choice was: " << playerChoice << endl;
        cout << "Computer's choice was: " << computerChoice << endl;

        winner = checkWinner(playerChoice, computerChoice);

        if (winner == "Tie") {
            cout << "It was a tie" << endl;
        }
        else if (winner == "User"){
            cout << "You won" << endl;
        }
        else {
            cout << "You lost" << endl;
        }
    }while(true);
        
    return 0;
}