#include<iostream>
using namespace std;
class Person
{
    char name[30];
    int age;
public:
    void ent_person()
    {
        cout<<"Enter name & age"<<endl;
        cin>>name;
        cin>>age;
    }
    void print_person()
    {
        cout<<"Name :- "<<name<<endl;
        cout<<"Age :- "<<age<<endl;
    }

};
class Student: public Person
{
    int id,sem;
    int m[3];
public:
    int i;
    void ent_student()
    {
        cout<<"Enter the Id and your current Semester "<<endl;
        cin>>id>>sem;
        cout<<"Enter the Marks of 3 Subjects :- "<<endl;
        for(i=0;i<3;i++)
        {
            cin>>m[i];
        }
    }
    void print_student()
    {
        cout<<"Id :- "<<id<<endl;
        cout<<"Semester :- "<<sem<<endl;

        for(i=0;i<3;i++)
        {
            cout<<"Subject "<<i+1<<" "<<m[i]<<endl;
        }
    }
};
class Staff :public Person
{
    int id,ex;
    float bs,gs;
public:
    void ent_staff()
    {
        cout<<"Enter the Id and your Experience "<<endl;
        cin>>id>>ex;
        cout<<"Enter your Basic salary :- "<<endl;
        cin>>bs;
    }
    void print_staff()
    {
        cout<<"Id :- "<<id<<endl;
        cout<<"Experince :- "<<ex<<endl;
        cout<<"Basic Salary :- "<<ex<<endl;
    }
    void calsal()
    {
        gs=bs+(bs*0.67)+(bs*0.35)+(bs*0.05);
        cout<<"Gross Salary : -"<<gs<<endl;
    }
};
main()
{
    Student s1;
    Staff s2;
    s1.ent_person();
    s1.ent_student();
    s1.print_person();
    s1.print_student();

    s2.ent_person();
    s2.ent_staff();
    s2.print_person();
    s2.print_staff();
    s2.calsal();
}
