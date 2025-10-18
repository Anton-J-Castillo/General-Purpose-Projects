#include <iostream>
using namespace std;
template <typename T, typename U>

auto getMax(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    
    cout << getMax(1, 2.1);

    return 0;
}