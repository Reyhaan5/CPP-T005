#include<iostream>
using namespace std;
class Student
{
public:
    char name[20];
    int roll_no;
    void data ()
    {
        cout<<"Enter the name and roll no :"<<endl;
        cin>>name;
        cin>>roll_no;
    }
};
class Test : public Student
{
public:
    int marks;

};
class Sports
{
public:
    int mark;

};
class Result : public Test,public Sports
{
public:
void display()
{
    cout<<"Enter Test & Sports marks"<<endl;
    cin>>marks>>mark;
    cout<<"Entered data as follows->"<<endl;
    cout<<"Name -> "<<name<<endl;
    cout<<"Roll no -> "<<roll_no<<endl;
    cout<<"Test Marks -> "<<marks<<endl;
    cout<<"Sports Marks-> "<<mark<<endl;
}
};
main()
{
    Result r;
    r.data();
    r.display();
}
