#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main(){

    int number; //defaults to 0

    do {
        cout << "Enter a positive #: " << endl;
        cin >> number;
    } while(number < 0);

    cout << "The number is " << number;

    return 0;
}