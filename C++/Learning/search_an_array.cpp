#include <iostream>

using std::string;

int searchArray(string array[], int size, string element);

int main(){

    string names[]  = {"Anton", "Arbby", "Argz", "Gian", "Sara"};

    int size = (sizeof(names)/sizeof(string));

    int index;
    string myName;

    std::cout << "Enter a name to search for: " << '\n';
    std::cin >> myName;

    index = searchArray(names, size, myName);
    
    if(index != -1){
        std::cout << myName << " is at index " << index;
    }
    else{
        std::cout << myName << " is not in the array";
    }

    return 0;
}

int searchArray(string array[], int size, string element){

    for (int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;

}