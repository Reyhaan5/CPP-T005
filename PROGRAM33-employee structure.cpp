
#include<iostream>
using namespace std;
struct employee
{
int id;
char name[20];
float salary;
};
main()
{
struct employee e[2];
int i;
for(i=0;i<2;i++)
{
cout<<"Enter your name ->"<<endl;
cin>>e[i].name;
cout<<"Enter your employee id->"<<endl;
cin>>e[i].id;
cout<<"Enter your salary ->"<<endl;
cin>>e[i].salary;
}
cout<<"Entered details->"<<endl;
for(i=0;i<2;i++)
{
cout<<"Name ->"<<e[i].name<<endl;
cout<<"Employee id->"<<e[i].id<<endl;
cout<<"Salary ->"<<e[i].salary<<endl;

}

}
