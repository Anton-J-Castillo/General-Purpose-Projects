#include <iostream>

void printInfo(std::string &name,int &age);

int main(){

    std::string name = "Anton";
    int age = 16;

    printInfo(name, age);
    std::cout << age;
    std::cout << name;

    return 0;
}

void printInfo(const std::string &name, const int &age){
    name = " ";
    age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}