#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <string>
using namespace std;

class House{
    private:
        string address;
        int year;
        double price;
    public:
        House(string address, int year, double price){
            this -> address = address;
            this -> year = year;
            this -> price = price;
        }
        House(){
            this -> address = "Unknown";
            this -> year = 0;
            this -> price = 0;
        }
};

class Car{
    private:
        string model;
        int year;
        double price;
        vector<string> modifications;
    public:
        Car(string model, int year, double price, vector<string> modifications){
            this -> model = model;
            this -> year = year;
            this -> price = price;
            this -> modifications = modifications;
        }
        Car(){
            this -> model = "Unknown";
            this -> year = 0;
            this -> price = 0;
        }
};

class Human{
    private:
        string name;
        int age;
        string health;
        string occupation;
        int strength;
        int speed;
        Car car;
        House house;
    public:
        Human(string name, int age){
            this -> name = name;
            this -> age = age;
            this->health = "Healthy";
            this->occupation = "Unemployed";
            this->strength = 10;
            this->speed = 10;
        }
        void eat(){
            cout << this -> name << endl;
        }
        void checkStats(){
            cout << "Name: " << name << " | " << "Age: " << age << " | " << "Occupation: " << occupation << endl;
            cout << "Health: " << health << " | " << "Strength: " << strength << " | " << "Speed: " << speed << endl;
        }
};

int main(){

    string playerName;
    int playerAge;
    int choice;

    vector<string> citizens;
    vector<string> friends;

    cout << "Enter your name: " << endl;
    getline(cin, playerName);
    cout << "Enter your age: " << endl;
    cin >> playerAge;

    Human player(playerName, playerAge);

    do{
        cout << "************LIFE SIMULATOR*****************" << endl;
        cout << "Choose a function:\n1. Check Stats\n2. Social Functions\n3. Buy Functions\n4. Sell Functions\n5. Career Functions\n6. Family/House Functions\n7. Item Functions\n8. Quit Game" << endl;
        cin >> choice;

        switch(choice){
            case 1:{
                player.checkStats();
                break;
            }
        }
           
    } while (choice != 8);

    return 0;
}