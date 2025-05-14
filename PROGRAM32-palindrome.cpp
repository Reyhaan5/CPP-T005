#include<iostream>
#include<string.h>
using namespace std;
main()
{
char a[20],b[20];
cout<<"Enter the string"<<endl;
cin>>a;
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
cout<<"The Strings are equal"<<endl;
}
else
{
cout<<"The String is not a palindrome"<<endl;
}
}
