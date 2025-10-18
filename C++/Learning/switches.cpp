#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::string;
using std::ws;
using std::endl;

int main(){
    while (true) {   
        int day;
        cout << "What day is it?" << endl;
        cin >> day;

        switch (day) {
            case 1:
                cout << "It is Monday" << endl;
                break;
            case 2:
                cout << "It is Tuesday" << endl;
                break;
            case 3:
                cout << "It is Wednesday" << endl;
                break;
            case 4:
                cout << "It is Thursday" << endl;
                break;
            case 5:
                cout << "It is Friday" << endl;
                break;
            case 6:
                cout << "It is Saturday" << endl;
                break;
            case 7:
                cout << "It is Sunday" << endl;
                break;
            default:
                cout << "That is not possible" << endl;
        }
    }
    return 0;
}