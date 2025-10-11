#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        double gpa;
        string studentID;
        string classes[6];
    public:
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        double getGPA(){
            return gpa;
        }
        string getStudentID(){
            return studentID;
        }
        string* getClasses(){
            return classes;
        }
        void setName(string name){
            this -> name = name;
        }
        void setAge(int age){
            this -> age = age;
        }
        void setGPA(double gpa){
            this -> gpa = gpa;
        }
        void setStudentID(string studentID){
            this -> studentID = studentID;
        }
        void setClasses(string classes[6]){
            for(int i = 0; i < 6; i++){
                this -> classes[i] = classes[i];
            }
        }
};

int main(){
    Student student;
    string name;
    int age;
    double gpa;
    string studentID;
    string classes[6];

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student GPA: ";
    cin >> gpa;
    cout << "Enter student ID: ";
    cin >> studentID;
    cout << "Enter 6 classes (space-separated): ";
    for(int i = 0; i < 6; i++){
        cin >> classes[i];
    }

    student.setName(name);
    student.setAge(age);
    student.setGPA(gpa);
    student.setStudentID(studentID);
    student.setClasses(classes);

    cout << "\nStudent Information:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "GPA: " << student.getGPA() << endl;
    cout << "Student ID: " << student.getStudentID() << endl;
    cout << "Classes: ";
    for(int i = 0; i < 6; i++){
        cout << student.getClasses()[i] << " ";
    }
    cout << endl;

    return 0;
}