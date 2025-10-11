#include <iostream> 

int main(){

    std::string students[] = {"Anton", "Arbby", "Argz", "Sara", "Sophia", "Reese", "Payton", "Toby"};

    for(int i = 0; i < (sizeof(students)/sizeof(std::string)); i++){
        std::cout << students[i] << std::endl;
    }

    return 0;
}