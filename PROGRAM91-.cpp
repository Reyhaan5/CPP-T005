
#include<iostream>
using namespace std;
class Employee
{
public:
    char name[30];
    int id;
    void set();
};
void Employee :: set()
{
    cout<<"Enter the Name and ID"<<endl;
    cin>>name>>id;
}
class Fitness : private Employee
{
public:
    int height;
    int weight;
    void read();
    void display();
};
void Fitness :: read()
{
     set();
    cout<<"Enter Height and Weight"<<endl;
    cin>>height>>weight;
}
void Fitness :: display()
{
    cout<<"Name "<<name<<endl;
    cout<<"Id "<<id<<endl;
    cout<<"Height"<<height<<endl;
    cout<<"Weight"<<weight<<endl;

}

main()
{
    Fitness b;
   b.read();
    b.display();
}
