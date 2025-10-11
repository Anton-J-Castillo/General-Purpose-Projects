#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do {
        cout << "Enter your choice:\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cin >> choice;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thanks for visiting!\n";
                break;
            default:
                cout << "Please choose option 1-4. \n";
                break;
        }
    } while (choice != 4);
    
    return 0;
}

void showBalance(double balance){
    cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << endl;
}

double deposit(){

    double amount = 0;

    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        cout << "Thats not a valid amount: \n";
        return 0;
    }

}

double withdraw(double balance){

    double amount = 0;

    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if (amount <= balance) {
        return amount;
    }
    else if (amount < 0){
        cout << "That's not a valid amount \n";
        return 0;
    }
    else{
        cout << "You don't have enough money \n";
        return 0;
    }
}