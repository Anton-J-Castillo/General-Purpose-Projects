#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){

    string name = "Anton";
    int age = 16;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}