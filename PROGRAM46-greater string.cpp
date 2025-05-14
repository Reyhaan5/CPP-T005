#include<iostream>
#include<string.h>
using namespace std;
class str
{
private:
char a[20];
char b[20];
public:
void input()
{
cout<<"Enter string 1"<<endl;
cin>>a;
cout<<"Enter string 2"<<endl;
cin>>b;
}
void compare()
{
if(strcmp(a,b)==0)
{
cout<<"Strings are equal";
}
else if(strcmp(a,b)>0)
{
cout<<"String 1 is greater"<<endl;
}
else if(strcmp(b,a)>0)
{
cout<<"Strings 2 is greater"<<endl;
}
}
};
main()
{
class str s;
s.input();
s.compare();
}
