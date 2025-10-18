#include <iostream>
using namespace std;

class Student{
    private:
        string name;
    public:
        friend void setName(Student student);
};

void setName(Student student){
    student.name = "Anton";
    cout << student.name << endl;
}

int main(){

    Student student1;
    setName(student1);

    return 0;
}