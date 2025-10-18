#include <iostream>
using namespace std;

double getGpa(int gradeIndex, int size){
    double GPA = (double) gradeIndex / size;
    return GPA;
}

int main(){
    char* grades = nullptr;
    int size;
    int gradeIndex = 0;

    cout << "How many grades do you have??" << endl;
    cin >> size;

    grades = new char[size];

    for (int i = 0; i < size; i++){
        cout << "What is grade # " << i + 1 << endl;
        cin >> grades[i];
        grades[i] = toupper(grades[i]);
    }

    for (int i = 0; i < size; i++){
        if (grades[i] == 'A'){
            gradeIndex += 4;
        }
        else if (grades[i] == 'B'){
            gradeIndex += 3;
        }
        else if (grades[i] == 'C'){
            gradeIndex += 2;
        }
        else if (grades[i] == 'F'){
            gradeIndex += 1;
        }
        else {
            cout << "Invalid Letter Grade" << endl;
        }
    }

    cout << getGpa(gradeIndex, size) << endl;

    delete[] grades;
    return 0;
}