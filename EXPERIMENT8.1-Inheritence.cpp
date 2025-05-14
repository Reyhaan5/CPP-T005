#include<iostream>
using namespace std;
class Person
{
private:
char name[50];
int age;
public:
void setP()
{
cout<<"Enter your name and age:"<<endl;
cin>>name>>age;
}
void getP()
{
cout<<"Name: "<<name<<" Age: "<<age<<endl;
}
};
class employee : public Person
{
int id,bsal;
float tsal;
public:
void setE()
{
cout<<"Enter the ID and Basic Salary"<<endl;
cin>>id>>bsal;
}
void getE()
{
cout<<"ID: "<<id<<" Basic Salary: "<<bsal<<endl;
}
void calsal()
{
tsal=(0.78*(float)bsal)+(0.55*(float)bsal)+bsal;
cout<<" Total Salary : "<<tsal;
}
};
main()
{
employee e;
e.setP();
e.setE();
e.getP();
e.getE();
e.calsal();
}
