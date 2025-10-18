#include <iostream>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled = true;
};

int main(){

    student student1;
    student1.name = "Anton";
    student1.gpa = 4.0;

    student student2;
    student2.name = "Arbby";
    student2.gpa = 2.0;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl;

    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl;

    return 0;
}