#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player = ' ';
    char computer = ' ';

    player = getUserChoice();
    
    return 0;
}

char getUserChoice(){

    char player;
    cout << "Rock-Paper-Scissors Game! \n";

    do {
        cout << "Choose one of the following \n"; 

        cout << "'r' for rock \n";
        cout << "'p' for paper \n";
        cout << "'s' for scissors \n";

        cin >> player;
    } while(player != 'r' && player!= 'p' && player != 's');
    
    return 0;
}
char getComputerChoice(){



    return 0;
}
void showChoice(char choice){

}
void chooseWinner(char player, char computer){

}