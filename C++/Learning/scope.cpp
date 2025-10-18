#include <iostream>

using std::cout;
using std::cin;
using std::string;

int myNum = 3;

void printNum();

int main(){

    int myNum = 1;
    printNum();
    cout << ::myNum << std::endl;

    return 0;
}

void printNum(){
    int myNum = 2;
    cout << ::myNum << std::endl;
}