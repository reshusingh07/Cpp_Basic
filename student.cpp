#include<iostream>
#include<string>
using namespace std;
class student {
    public : 
    char name, department;
    int roll ;
    
    void input() {
        cout<<"enter the name of the student:"<<endl;
        cin>>name;
        cout<<"enter the roll number of the student:"<<endl;
        cin>>roll;
        cout<<"enter the department of student:"<<endl;
        cin>>department;
    }
    void display() {
        cout<<"name :"<<name;
        cout<<"roll :"<<roll;
        cout<<"dep :"<<department;
    }
    };
    int main(){
        student s; 
        s.input();
        s.display();
        return 0;
    }
