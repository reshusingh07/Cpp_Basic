#include<iostream>
#include<string>
using namespace std;
struct student
{
    char name[12];
    int DOB;
    int rollno;
    char branch[12];
    float marks;
};
int  main()
{
    int n;
    cout<<"Enter the number of the students:";
    cin>> n;
    student students[n];
    for(int i=0;i<n;i++)
    {
    cout<<"Enter the details of the student: "<<i+1<< ":"<<endl;
    cout<<"Name:"<<endl;
    cin>>students[i].name;
    cout<<"DOB"<<endl;
    cin>>students[i].DOB;
    cout<<"roll no."<<endl;
    cin>>students[i].rollno;
    cout<<"branch"<<endl;
    cin>>students[i].branch;
    cout<<"marks"<<endl;
    cin>>students[i].marks;
    cout<<endl;
}
for(int i=0;i<n;i++)
{
 cout<<"student"<<i+1<< ":"<<endl;
 cout<<"Name"<<students[i].name<<endl;
 cout<<"DOB"<<students[i].DOB<<endl;
 cout<<"rollno"<<students[i].rollno<<endl;
 cout<<"branch"<<students[i].branch<<endl;
 cout<<"marks"<<students[i].marks<<endl;
 cout<<endl;
 return 0;
}
}
