#include<iostream>
#include<string.h>
using namespace std;
main()
{
char a[20],b[20],c;
cout<<"Enter the string-1 ->"<<endl;
cin>>a;
cout<<"Enter the string-2 ->"<<endl;
cin>>b;
c=strcmp(a,b);
if(c==0)
{
cout<<"The strings are equal..."<<endl;
}
else
{
cout<<"The strings are not equal..."<<endl;
}
}
