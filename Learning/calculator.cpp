#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){

    while (true) {
    char op;
    double num1;
    double num2;
    double result;

    cout << "********* Calculator ***********" << endl;

    cout << "Enter either (+ - * /): ";
    cin >> op;

    cout << "Enter #1: ";
    cin >> num1;

    cout << "Enter #2: ";
    cin >> num2;

    switch(op){
        case '+' :
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-' :
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*' :
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/' :
            result = num1 / num2;
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Result: That wasn't a valid response" << endl;
            break;
    }

    cout << "********* Calculator ***********";
}
    return 0; 
}