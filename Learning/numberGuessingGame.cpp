#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main(){

    srand(time(0));
    int num = (rand() % 100) + 1;

    int guess;
    int tries = 0;

    cout << "************ Number Guessing Game ***************" << endl;

    do{
        cout << "Enter a guess between 1 - 100 \n";
        cin >> guess;
        tries += 1;

        if (guess > num){
            cout << "Too high \n";
        }
        else if (guess < num) {
            cout << "Too low \n";
        }
        else{
            cout << "Correct # of tries: " << tries << endl;
        }
    } while (guess != num);

    cout << "************ Number Guessing Game ***************" << endl;

    return 0;
}