#include<iostream>
#include<string.h>
using namespace std;
class staff
{
string name[10];
string dept[10];
int i;
public:
void input()
{
for(i=0;i<10;i++)
{
cout<<"Enter name ->";
cin>>name[i];
cout<<"Enter department ->";
cin>>dept[i];
}
}
void output()
{
for(i=0;i<10;i++)
{
if(dept[i]=="IT" || dept[i]=="it" || dept[i]=="It" )
{

cout<<"Name ->"<<name[i]<<endl;
cout<<"Department ->"<<dept[i]<<endl;
}
}
}
};
main()
{
class staff s;
s.input();
s.output();
}
