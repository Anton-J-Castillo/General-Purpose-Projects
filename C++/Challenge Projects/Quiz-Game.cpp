#include <iostream>
using namespace std;

int main(){

    string questions[4] = { "1. What  is 1+1",
                            "2. What is 2^2",
                            "3. What type of language is Python",
                            "4. What type of language is C++",
                          };
    string choices[4][4] = {{
                             "a. 2", "b. 4", "c. 1", "d. Infinite"
                            },
                            {
                             "a. 3", "b. 4", "c. 8", "d. 16"
                            },
                            {
                             "a. Snake", "b. High-Level", "c. Low-Level", "d. English"
                            },
                            {
                             "a. Spanish", "b. Computer", "c. C", "d. Low-Level"
                            },
                            };
    char answerKey[4] = {'a', 'b', 'b', 'd'};

    char guess;
    int score = 0;

    int size = sizeof(questions)/sizeof(questions[0]);

    for (int i = 0; i < size; i++){
        cout << questions[i] << endl;
        for (int j = 0; j < sizeof(choices[i])/sizeof(choices[i][0]); j++){
            cout << choices[i][j] << endl;
        }
        cin >> guess;
        guess = tolower(guess);
        if (guess == answerKey[i]) {
            score++;
        }
        cout << endl;
    }

    cout << "Your score is: " << (double(score) / size) * 100 << "%" << endl;

    return 0;
}