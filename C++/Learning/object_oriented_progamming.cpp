#include <iostream>
using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age = 16;

        void eat(){
            cout << "This person is eating\n";
        }
        void drink(){
            cout << "This person is drinking\n";
        }
        void sleep(){
            cout << "This person is sleeping\n";
        }
};

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "Accelerating";
        }
        void brake(){
            cout << "Braking";
        }
        void start(){
            cout << "Starting Engine";
        }
};

int main(){

    Human anton;

    anton.name = "Anton";
    anton.occupation = "Engineer";

    cout << anton.name << endl;
    cout << anton.occupation << endl;
    cout << anton.age << endl;

    anton.eat();
    anton.drink();
    anton.sleep();

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2025;
    car1.color = "Silver";

    car1.accelerate();
    car1.brake();
    car1.start();

    return 0;
}