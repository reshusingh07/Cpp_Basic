#include <iostream>
using namespace std;
struct student
{
    char first_name[15];
    int age;
    int marks;
    char branch[10];
};
int main()
{
    int num;
    cout << "Enter the number of students: ";
    cin >> num;
    struct student info[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the details for student " << i + 1 << endl;
        cout << "Enter first name: ";
        cin >> info[i].first_name;
        cout << "Enter age: ";
        cin >> info[i].age;
        cout << "Marks of the student(max.100): ";
        cin >> info[i].marks;
        cout << "Enter branch of the student: ";
        cin >> info[i].branch;
        cout << endl;
    }
    cout << "****************DETAILS OF THE STUDENTS****************" << endl<< endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Details of the student " << i + 1 << endl;
        cout << "First name of student: " << info[i].first_name << endl;
        cout << "Age of student: " << info[i].age << endl;
        cout << "Total marks of student: " << info[i].marks << endl;
        cout << "Branch of student: " << info[i].branch << endl;
        cout << endl;
    }
}
