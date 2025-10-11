#include <iostream>
#include <string>

using text_t = std::string;

int main(){

    text_t name;
    int age;

    std::cout << "What's your age?:" << std::endl;
    std::cin >> age;

    std::cout << "What's your name?" << std::endl;
    std::getline(std::cin >> std::ws, name);

    std::cout << "Nice! You are " << age << " years old" << std::endl;
    std::cout << "Nice your name is " << name << std::endl;

    return 0;
}