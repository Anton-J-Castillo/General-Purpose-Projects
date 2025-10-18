#include <iostream>

int main() {
    
    const double LIGHT_SPEED = 2999792458;
    const int width = 1920;
    const int height = 1080;
    const double PI = 3.14159;
    double radius = 3;
    
    double circumference = 2 * PI * radius;

    std::cout << circumference << std::endl;

    return 0;
}