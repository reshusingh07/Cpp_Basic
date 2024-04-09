#include <iostream>
#include <string>
using namespace std;
struct employee
{
    int emp_ID;
    char name[20];
    int houseno;
    char area[20];
    char city[20];
    char state[20];
};
int main()
{
    int num, id, i;
    cout << "Enter the number of employees: ";
    cin >> num;
    struct employee info[num];
    for (i = 0; i < num; i++)
    {
        cout << "Enter the details for employee " << i + 1 << endl;
        cout << "Enter the ID of the employee: ";
        cin >> info[i].emp_ID;
        cout << "Enter the name of the employee : ";
        fflush(stdin);
        cin.get(info[i].name,20);
        cout << "Enter House Number of the employee : ";
        cin >> info[i].houseno;
        cout << "Enter the Area of the employee : ";
        fflush(stdin);
        cin.get(info[i].area, 20);
        cout << "Enter the City of the employee : ";
        fflush(stdin);
        cin.get(info[i].city, 20);
        cout << "Enter the state Area of the employee : ";
        fflush(stdin);
        cin.get(info[i].state, 20);
        cout << endl;
    }
    cout << "Enter the ID of the employee you want detail of: ";
    cin >> id;
    for (i = 0; i < num; i++)
    {
        if (info[i].emp_ID == id)
            break;
    }
    cout << "****************DETAILS OF THE Employee****************" << endl
         << endl;
    cout << "Name of the employee: " << info[i].name << endl;
    cout << "House Number of the employee: " << info[i].houseno;
    cout << "Area of the employee: " << info[i].area << endl;
    cout << "City of the employee" << info[i].city << endl;
    cout << "State of the employee" << info[i].state << endl;
    return 0;
}
