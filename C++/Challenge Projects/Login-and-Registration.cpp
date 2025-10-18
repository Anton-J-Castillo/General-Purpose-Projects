#include <iostream>
using namespace std;

class User{
    private:
        string name;
        string password;
    public:
        string getName(){
            return name;
        }
        string getPassword(){
            return password;
        }
        void setName(string name){
            this -> name = name;
        }
        void setPassword(string password){
            this -> password = password;
        }
};

int main(){

    string username;
    string password;
    User user;

    cout << "This is a login and registration system." << endl;
    cout << "Please enter your username: ";
    cin >> username;
    cout << "Please enter your password: ";
    cin >> password;

    user.setName(username);
    user.setPassword(password);

    cout << "Registration successful!" << endl;

    cout << "Username: " << user.getName() << endl;
    cout << "Password: " << user.getPassword() << endl;

    return 0;
}