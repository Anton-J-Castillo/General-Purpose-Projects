#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void happyBirthday(int year);

int main(){

    int year = 5;

    happyBirthday(year);

    return 0;
}

void happyBirthday(int year){
    cout << "Happy " << year << " to you" << endl;
    cout << "Happy birthday to you" << endl;
    cout << "Happy birthday to you" << endl;
    cout << "Happy birthday to you" << endl;
}
