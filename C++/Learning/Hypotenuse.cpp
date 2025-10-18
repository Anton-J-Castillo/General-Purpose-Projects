#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ws;
using std::getline;

int main(){

    double sideA;
    double sideB;

    cout << "What is the first side?" << endl;
    cin >> sideA;

    cout << "What is the second side" << endl;
    cin >> sideB;

    double hypotenuse = sqrt((pow(sideA, 2)) + (pow(sideB, 2)));
    cout << "The hypotenuse is " << hypotenuse << endl;

    return 0;
}