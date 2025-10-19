#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class Employee{
    private:
        string name;
        string role;
        string collegeDegree;
        int hoursWorked;
        double currentSalary;
        bool highAchieving;
        bool isManager;

    public:

        Employee(string name, string role, string collegeDegree, int hoursWorked, double currentSalary, bool highAchieving, bool isManager){
            this -> name = name;
            this -> role = role;
            this -> collegeDegree = collegeDegree;
            this -> hoursWorked = hoursWorked;
            this -> currentSalary = currentSalary;
            this -> highAchieving = highAchieving;
            this -> isManager = isManager;
        }

        void displayInfo() const {
            cout << "Name: " << name << " | " << "Role: " << role << " | " << "Degree: " << collegeDegree << " | " << "Hours Worked: " << hoursWorked << " | " << "Current Salary: " << currentSalary << " | " << "High Achieving: " << (highAchieving ? "Yes" : "No") << " | " << "Manager: " << (isManager ? "Yes" : "No") << endl;
        }

        string getName() const { return name; }
        double getSalary() const { return currentSalary; }

        void setSalary(double newSalary){
            currentSalary = newSalary;
        }

        void promote(){
            isManager = 1;
        }

        double calculateSalary(){
            double salary = currentSalary;

            if (hoursWorked >= 100){
                salary *= 1.2;
            }
            
            if (highAchieving) {
                salary *= 1.5;
            }

            if (isManager) {
                salary *= 2;
            }

            return salary;
        }
};

int main(){

    int choice;
    string name;
    string role;
    string degree;
    int hours;
    double salary;
    bool highAchieving;
    bool isManager;
    vector<Employee> employeeList;

    do{
        cout << "This is a Payroll System" << endl;
        cout << "Choose a function: \n 1. Add an Employee \n 2. Fire an Employee \n 3. List your Employees \n 4. Calculate a salary \n 5. Promote an Employee to Manager \n 6. Exit \n";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch(choice){
              case 1:{
                cout << "Enter the name: ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, name);
                cout << "Enter the role: ";
                getline(cin, role);
                cout << "Enter a degree (Bachelor, Associate, None): ";
                cin >> degree;
                cout << "How many hours have they worked?: ";
                cin >> hours;
                cout << "What is their current salary?: ";
                cin >> salary;
                cout << "Are they high achieving (insert 1 for yes or 0 for no)?: ";
                cin >> highAchieving;
                 cout << "Are they a manager (insert 1 for yes or 0 for no)?: ";
                cin >> isManager;

                employeeList.push_back(Employee(name, role, degree, hours, salary, highAchieving, isManager));
                cout << "Employee added successfully!" << endl;
                break;
            }
            case 2:{
                if (!employeeList.empty()){
                    cout << "Enter the Employee's Name who you want to remove: ";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, name);
                    bool found = false;

                    for(int i = 0; i < employeeList.size(); i++){
                        if (employeeList[i].getName() == name){
                            found = true;
                            cout << "Successfully found employee named " << name << "!" << endl;

                            employeeList.erase(employeeList.begin() + i);

                            cout << "Successfully removed" << endl;
                            break;
                        }
                    }

                    if (!found){
                        cout << "Failed to find employee" << endl;
                    }
                }
                else{
                    cout << "Employee list is currently empty" << endl;
                }
                
                break;
            }
            case 3:{
                if (!employeeList.empty()){
                    for (int i = 0; i < employeeList.size(); i++){
                        employeeList[i].displayInfo();
                    }
                }
                else{
                    cout << "There are no employees currently" << endl;
                }
                
                break;
            }
            case 4:{
                cout << "Enter the name of the employee you want to calculate a salary for: " << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, name);
                bool found = false;

                for (int i = 0; i < employeeList.size(); i++){
                    if (employeeList[i].getName() == name){
                        found = true;
                        salary = employeeList[i].calculateSalary();
                        employeeList[i].setSalary(salary);
                        cout << "Succesfully Changed Salary" << endl;
                        cout << "New Salary: " << salary << endl;
                    }
                }

                if (!found){
                    cout << "Failed to find employee" << endl;
                }

                break;
            }
            case 5:{
                cout << "Enter the employee you want to promote" << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, name);
                bool found = false;

                for (int i = 0; i < employeeList.size(); i++){
                    if (employeeList[i].getName() == name){
                        found = true;
                        employeeList[i].promote();
                        cout << "Succesfully promoted" << endl;
                    }
                }

                if (!found){
                    cout << "Failed to find employee" << endl;
                }

                break;
            }
            case 6: {
                cout << "Thank you for using our app!" << endl;
                break;
            }
            default: {
                cout << "Invalid Option" << endl;
                break;
            }
        }
        
        cout << endl;

    } while (choice != 6);

    return 0;
}