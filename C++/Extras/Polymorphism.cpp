#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void animalSound(){
            cout << "Animal Sound" << endl;
        }
};

class Dog : public Animal{
    public:
        void animalSound() override{
            cout << "Woof" << endl;
        }
};

class Cat : public Animal{
    public:
        void animalSound() override{
            cout << "Meow" << endl;
        }
};

class Monkey : public Animal{
    public:
        void animalSound() override{
            cout << "O o a a" << endl;
        }
};

int main(){

    Animal *Animals[3];
    Animals[0] = new Dog;
    Animals[1] = new Cat;
    Animals[2] = new Monkey;
    
    for (int i = 0; i < 3; i++){
        Animals[i] -> animalSound();
        delete Animals[i];
    }

    return 0;
}