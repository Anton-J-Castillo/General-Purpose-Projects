#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){

    double temp;
    char unit;

    cout << "***** Temperature Conversion *****\n";

    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";

    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if(unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temperature is " << temp << "C\n";
    }
    else{
        cout << "Not a valid unit\n";
    }

    cout << "***** Temperature Conversion *****\n";

    return 0;
}