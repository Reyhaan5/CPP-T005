#include<iostream>
using namespace std;
class account
{
int ac_no;
char name[50];
public:
float balance;
void input()
{
cout<<"Enter acc no :";
cin>>ac_no;
cout<<"Enter name :";
cin>>name;
cout<<"Enter Balance :";
cin>>balance;
}
void output()
{
cout<<"Account no ->"<<ac_no<<endl;
cout<<"Name ->"<<name<<endl;
cout<<"Balance ->"<<balance<<endl;
}
};
main()
{
class account a[10];
int i;
for(i=0;i<10;i++)
{
a[i].input();
}
for(i=0;i<10;i++)
{
if(a[i].balance<5000)
{
a[i].output();
}
}
}
