#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    float marks;

public:
    int roll_no;
    void set_data(int r, string n, float m)
    {
        roll_no = r;
        name = n;
        marks = m;
    }
    void display_data()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.set_data(114, "ishita", 89.5);
    s2.set_data(004, "Amaan", 91);

    int roll;
    cout << "Enter roll no. to display marks: ";
    cin >> roll;

    if (roll == s1.roll_no)
    {
        s1.display_data();
    }
    else if (roll == s2.roll_no)
    {
        s2.display_data();
    }
    else
    {
        cout << "Invalid roll no." << endl;
    }

    return 0;
}
