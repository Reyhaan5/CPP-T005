#include<iostream>
#include<string.h>
using namespace std;
class staff
{
char name[20][5];
char dept[20][5];
int i;
public:
void input()
{
for(i=1;i<=5;i++)
{
cout<<"Enter name ->";
cin>>name[i];
cout<<"Enter department ->";
cin>>dept[i];
}
}
void output()
{
for(i=1;i<=5;i++)
{
cout<<"Name ->"<<name[i]<<endl;;
cout<<"Department ->"<<dept[i]<<endl;;
}
}

};
main()
{
class staff s;
s.input();
s.output();
}
