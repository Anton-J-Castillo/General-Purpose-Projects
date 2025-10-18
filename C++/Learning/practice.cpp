#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::cin;
using std::endl;

typedef std::string text_t;
using number_t = int;

namespace first{
    number_t radius = 1;
    text_t firstName = "Arbby";
}

int main(){

    while (true) {
        const double PI = 3.141259;
        double radius;
        double circumference;
        double area;

        string name;
        string choice;

        cout << "This program will calculate the circumference of any circle." << endl;

        cout << "Please enter your full name." << endl;

        getline(cin >> std::ws, name);

        cout << "What is the radius?" << endl;
        cin >> radius;

        cout << "Pick a value (area or circumference)" << endl;
        cin >> choice;

        circumference = (2 * PI * radius);
        area = (PI * pow(radius, 2));

        cout << "Your name is " << name << endl;

        if (choice == "circumference") {
            cout << "The circumference is " << circumference << endl;
        }
        else if (choice == "area") {
            cout << "The area is " << area << endl;
        }
        else {
            cout << "Can't calculate" << endl;
        }
    }
    
    return 0;
};