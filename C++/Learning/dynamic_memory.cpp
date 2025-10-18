#include <iostream>

using namespace std;

int main(){

    /*int* pNum = nullptr;

    pNum = new int;

    *pNum = 21;

    cout << "Address: " << pNum << endl << "Value: " << *pNum << endl;

    delete pNum;
    */

    char *pGrades = nullptr;
    int size;

    cout << "How many grades do you have?: " << endl;
    cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        cout << "Enter grade number " << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}