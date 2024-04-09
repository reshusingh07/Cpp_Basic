#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int emp_id;
    string name;
    int houseno;
    string city;
    string area;
    string state;
};

int main() {
    Employee emp[3];

    // information for each employee
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Employee " << i+1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> emp[i].emp_id;
        cout << "Name: ";
        cin >> emp[i].name;
        cout << "House Number: ";
        cin >> emp[i].houseno;
        cout << "City: ";
        cin >> emp[i].city;
        cout << "Area: ";
        cin >> emp[i].area;
        cout << "State: ";
        cin >> emp[i].state;
        cout << endl;
    }

    // Retrieve information for employee with given ID number
    int emp_id_to_find;
    cout << "Enter the ID number of the employee you want to find: ";
    cin >> emp_id_to_find;

    bool found = false;
    for (int i = 0; i < 3; i++) {
        if (emp[i].emp_id == emp_id_to_find) {
            cout << "Employee found! Details are as follows:" << endl;
            cout << "Employee ID: " << emp[i].emp_id << endl;
            cout << "Name: " << emp[i].name << endl;
            cout << "House Number: " << emp[i].houseno << endl;
            cout << "City: " << emp[i].city << endl;
            cout << "Area: " << emp[i].area << endl;
            cout << "State: " << emp[i].state << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Employee not found." << endl;
    }

    return 0;
}
