#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    cout << "A standard quadratic is in the form ax^2 + bx + c, enter those values now." << endl;

    double a;
    double b;
    double c;

    int numberOfRoots;
    int vertex_X;
    int sumOfRoots;

    cout << "Enter coefficient a" << endl;
    cin >> a;

    cout << "Enter coefficient b" << endl;
    cin >> b;

    cout << "Enter coefficient c" << endl;
    cin >> c;

    double discriminant = (pow(b,2)) - 4*a*c;
    
    double rootOne = ((-b) + sqrt(discriminant)) / 2*a;
    double rootTwo = ((-b) - sqrt(discriminant)) / 2*a;

    if (discriminant == 0){
        numberOfRoots = 1;
    } 
    else if (discriminant > 0){
        numberOfRoots = 2;
    } 
    else {
        numberOfRoots = 0;
    }

    vertex_X = (-b) / (2*a);

    sumOfRoots = (-b) / (a);

    cout << "There are " << numberOfRoots << " real solutions" << endl;
    cout << "The x-coordinate of the vertex is " << vertex_X << endl;
    
    cout << "The sum of the roots is " << sumOfRoots << endl;

    cout << "The first root is " << rootOne << endl;
    cout << "The second root is " << rootTwo << endl;

    return 0;
}