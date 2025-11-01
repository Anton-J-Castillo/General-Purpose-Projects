#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <string>
using namespace std;

class Task{
    private:
        string name;
        int due_date;
        string description;
    public:
        Task(string name, int due_date, string description){
            this -> name = name;
            if (due_date) {
                this -> due_date = due_date;
            }
            else{
                this -> due_date = 0;
            }
            if (description.length() > 0){
                this -> description = description;
            }
            else{
                this -> description = "None.";
            }
        }
        static void displayTasks(vector<Task> tasks){
            if (!tasks.empty()){
                for(int i = 0; i < tasks.size(); i++){
                    Task task = tasks[i];

                    cout << i+1 << ". Task: " << task.name << " | " << "Due Date: " << task.due_date << " | " << "Description: " << task.description << endl;
                }
            }
        }
};

class Player{
    private:
        string name;
        vector<Task> to_do_list;
    public:
        void setName(string name){
            this->name = name;
        }
        void displayName(){
            cout << "Hello, " << name << endl;
        }
        Player(string name){
            this -> name = name;
        }
        vector<Task> getList(){
            return to_do_list;
        }
};

int main(){

    string name;
    int choice = 0;

    cout << "Please enter your name: ";
    getline(cin, name);

    Player player(name);

    do {
        cout << "************TO DO LIST**************" << endl;
        player.displayName();
        cout << "Pick an option below:\n1. Check TO-DO\n2. Add task\n3. Edit TO-DO\n4. Quit Game\n";
        cin >> choice;
        
        switch(choice){
            case 1:{
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                cout << "Program stopped" << endl;
                break;
            }
        }

    } while (choice != 4);

    return 0;
}