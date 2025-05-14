#include<iostream>
#include<string.h>
using namespace std;
main()
{
char s1[100],s2[100];
cout<<"Enter the string->"<<endl;
cin>>s1;
strcpy(s2,s1);

cout<<strrev(s2);
}
