#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    double gpa = 2.5;
    string name = "Anton";   
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    string students[5] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    cout << sizeof(students) << " bytes" << endl;

    students[4] = "King";

    cout << sizeof(students);

    return 0;
}