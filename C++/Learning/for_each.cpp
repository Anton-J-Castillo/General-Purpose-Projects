#include <iostream>

int main(){

    std::string students[] = {"Anton", "Arbby", "Argz", "Gian", "Sara"};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(char grade: grades){
        std::cout << grade << '\n';
    }

    return 0;
}