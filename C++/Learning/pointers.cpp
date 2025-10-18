#include <iostream>

int main(){

    std::string name = "Bro";
    int age = 16;

    std::string *pName = &name;
    int *pAge = &age;

    std::string pizza[3] = {"pizza1", "pizza2", "pizza3"};
    std::string *pPizza = pizza;

    std::cout << *pName << '\n';
    std::cout << * pAge << '\n';
    std::cout << *pPizza;

    return 0;
}