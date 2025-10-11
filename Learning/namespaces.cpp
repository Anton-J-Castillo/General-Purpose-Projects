#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

using std::cout;

int main() {
    
    cout << first::x << '\n';

    return 0;
}