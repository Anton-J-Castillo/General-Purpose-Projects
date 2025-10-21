#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Account{
    private:
        string name;
        double cash;
    public:
        Account(string name, double cash){
            this -> name = name;
            this -> cash = cash;
        }
        void displayInfo(){
            cout << "Name: " << name << " | " << "Cash: $" << cash << endl;
        }
        string getName(){ return name; }
        void withdrawMoney(double cash){
            if (this -> cash >= cash){
                this -> cash -= cash;
                cout << "You withdrew $" << cash << endl;
            }
            else{
                cout << "Not enough money in account" << endl;
                cout << "You only have $" << this -> cash << endl; 
            }
        }
        void depositMoney(double cash){
            if (cash > 0) {
                this -> cash += cash;
                cout << "Successfully deposited $" << cash << endl;
                cout << "Your new balance is $" << this -> cash << endl;
            }
            else{
                cout << "Invalid deposit amount" << endl;
            }
        }
};

int main(){
    cout << fixed << setprecision(2);

    int choice;
    string name;
    double cash;

    vector<Account> accounts;

    do {

        cout << "This is a Banking System" << endl;
        cout << "Choose a function: \n 1. Add an Account \n 2. Remove an Account \n 3. List Accounts \n 4. Withdraw Money \n 5. Deposit Money \n 6. Exit \n";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch(choice){
            case 1:{
                cout << "What is the name of the account?: " << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, name);

                cout << "How much cash does this account have?: " << endl;
                cin >> cash;

                accounts.push_back(Account(name, cash));
                cout << "Successfully registed account for " << name << endl;
                break;
            }
            case 2:{
                if (!accounts.empty()){
                    bool found = false;
                    cout << "What is the name of the account?: " << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, name);

                    for (int i = 0; i < accounts.size(); i++){
                       if (accounts.at(i).getName() == name){
                            found = true;
                            accounts.erase(accounts.begin() + i);
                            cout << "Successfully deleted account for " << name << endl;
                            break;
                        }
                    }

                    if(!found){
                        cout << "Could not find account" << endl;
                    }
                    
                    break;
                }
                else{
                    cout << "There are no accounts" << endl;
                    break;
                }
            }
            case 3:{
                if (!accounts.empty()){
                    for (int i = 0; i < accounts.size(); i++){
                        accounts.at(i).displayInfo();
                    }
                }
                else{
                    cout << "There are no accounts" << endl;
                }
                break;
            }
            case 4: {
                if (!accounts.empty()){
                    bool found = false;
                    cout << "Enter the account name that is withdrawing money" << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, name);

                    for (int i = 0; i < accounts.size(); i++){
                       if (accounts.at(i).getName() == name){
                            found = true;
                            
                            cout << "How much do you want to withdraw?: " << endl;
                            cin >> cash;

                            if (cash > 0) {
                                accounts.at(i).withdrawMoney(cash);
                            }
                            else{
                                cout << "invalid amount" << endl;
                            }

                            break;
                        }
                    }

                    if (!found) {
                        cout << "Couldn't find account" << endl;
                    }

                    break;
                }
                else{
                    cout << "There are no accounts" << endl;
                }
                break;
            }
            case 5:{
                 if (!accounts.empty()){
                    bool found = false;
                    cout << "Enter the account name that is depositing money" << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, name);

                    for (int i = 0; i < accounts.size(); i++){
                       if (accounts.at(i).getName() == name){
                            found = true;
                            
                            cout << "How much do you want to deposit?: " << endl;
                            cin >> cash;

                            if (cash > 0) {
                                accounts.at(i).depositMoney(cash);
                            }
                            else{
                                cout << "invalid amount" << endl;
                            }

                            break;
                        }
                    }

                    if (!found) {
                        cout << "Couldn't find account" << endl;
                    }

                    break;
                }
                else{
                    cout << "There are no accounts" << endl;
                }
                break;
            }
            case 6:{
                cout << "Thank you for using our program!" << endl;
                break;
            }
        }

    } while(choice != 6);

    return 0;
}