#include <iostream>
#include <cmath>

std::string fullName(std::string firstName, std::string lastName);

int main() {

    std::string firstName = "Anton";
    std::string lastName = "Castillo";

    std::string newString = fullName(firstName, lastName);

    std::cout << newString << std::endl;

   return 0;
}

std::string fullName(std::string firstName, std::string lastName){
    std::string newString = firstName + " " + lastName;

    return newString;
}
