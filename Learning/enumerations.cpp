#include <iostream>
using namespace std;

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){
    Day today = sunday;

    switch(today){
        case sunday:
            cout << "It is sunday\n";
            break;
        case monday:
            cout << "It is monday\n";
            break;    
        case tuesday:
            cout << "It is tuesday\n";
            break;
        case wednesday:
            cout << "It is wednesday\n";
            break;
        case thursday:
            cout << "It is thursday\n";
            break;
        case friday:
            cout << "It is friday\n";
            break;
        case saturday:
            cout << "It is saturday\n";
            break;
    }

    return 0;
}