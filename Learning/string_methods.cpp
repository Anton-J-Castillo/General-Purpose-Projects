#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

typedef std::string text_t;

int main(){

    text_t name;

    cout << "Enter your name: ";
    getline(cin >> std::ws, name);
    
    name.erase(0,3);

    cout << name << endl;
    return 0;
}