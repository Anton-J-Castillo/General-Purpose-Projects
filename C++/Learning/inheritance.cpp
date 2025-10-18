#include <iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "This animal is eating\n";
    }
};

class Dog : public Animal{
    public:
        void bark(){
            cout << "The dog goes woof\n";
        }
};

class Cat : public Animal{
    public:
        void meow(){
            cout << "The cat goes meow\n";
        }
};

int main(){

    Dog dog;
    Cat cat;

    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();
    
    cout << dog.alive << endl;

    return 0;
}