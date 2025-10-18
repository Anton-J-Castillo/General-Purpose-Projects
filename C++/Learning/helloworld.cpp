#include <iostream>

int main(){
    
    //Int = whole number
    int x = 5; //Declaration
    int y = 6;
    int sum = x + y;

    //Double = decimal number
    double money = 20.5;
    double temperature = 25.5;

    //Char = single character
    char initial = 'A';
    char grade = 'B';

    //Bool = true or false
    bool job = false;
    bool black = false;
    bool on = true;\

    //String = words
    std::string name = "Anton";
    std::string pangit = "Arbby";
    std::string food = "I like pizza";

    std::cout << "Hello " << name << std::endl;
    std::cout << "The pangit's name is " << pangit << std::endl;

    std::cout << temperature << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << '\n';

    return 0;
}