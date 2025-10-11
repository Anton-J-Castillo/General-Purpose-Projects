#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::endl;

//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Anton";
    number_t radius = 5;

    cout << firstName << endl;

    return 0;
}