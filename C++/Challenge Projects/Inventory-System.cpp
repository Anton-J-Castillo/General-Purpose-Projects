#include <iostream>
#include <vector>
#include <limits>
#include <string>

using namespace std;

class Item{       
    public:
        string name;
        int quantity;
        double price;

    Item(string name, int quantity, double price){
        this -> name = name;
        this -> quantity = quantity;
        this -> price = price;
    }
};

int main(){

    vector<Item> items;
    int choice;
    string name;
    int quantity;
    double price;

    do{
        cout << "*********INVENTORY SYSTEM**************" << endl;

        cout << "What do you want to do: \n 1. Add an Item \n 2. Remove an Item \n 3. List Items \n 4. Quit \n";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch(choice){
            case 1:{
                cout << "What is the name of the item" << endl;
                cin.ignore();
                getline(cin, name);
                cout << "How many of the item" << endl;
                cin >> quantity;
                cout << "What is the price of the item" << endl;
                cin >> price;
                
                items.push_back(Item(name, quantity, price));
                cout << "Item added successfully!" << endl;
                break;  
            }      
            case 2: {
                cout << "What is the name of the item you want to remove?" << endl;
                cin.ignore();
                getline(cin, name);

                bool found = false;

                for (int i = 0; i < items.size(); i++){
                    if (items.at(i).name == name){
                        found = true;
                        items.erase(items.begin() + i);
                        cout << "Item removed!" << endl;
                        break;
                    }
                }

                if (!found) {
                    cout << "Item is not in inventory" << endl;
                }
                break;
            }
            case 3:{
                cout << "The inventory currently has: " << endl;
                for (int i = 0; i < items.size(); i++){
                    string indexName = items[i].name;
                    int indexQuantity = items[i].quantity;
                    double indexPrice = items[i].price;

                    cout << "#" << i+1 << ": " << "Name: " << indexName << " | " << "Quantity: " << indexQuantity << " | " << "Price: $" << indexPrice << " | " << endl;
                    cout << endl;
                }

                break;
            }
            case 4:{
                cout << "Thank you for using our inventory system!" << endl;
                break;
            }
            default:{
                cout << "That is not a valid option" << endl;
                break;
            }

        }

    } while (choice != 4);
  

    return 0;
}