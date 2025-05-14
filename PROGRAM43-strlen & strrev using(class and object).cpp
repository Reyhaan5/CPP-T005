#include<iostream>
#include<string.h>
using namespace std;
class str
{
private:
char a[20],b[20];
public:
void enter()
{
cout<<"Enter the String ->"<<endl;
cin>>a;
}
void length()
{
cout<<"The String length is ->"<<strlen(a)<<endl;
}
void copy()
{
strcpy(b,a);
}
void reverse()
{
strrev(b);
}
void print()
{
cout<<"REVERSE string ->"<<b<<endl;
}

};
main()
{
class str s;
s.enter();
s.length();
s.copy();
s.reverse();
s.print();
}
