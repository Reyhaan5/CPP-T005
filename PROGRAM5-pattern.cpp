#include<iostream>
using namespace std;
main()
{
int n,i,j;
char c;
cout<<"Enter the number of lines ->"<<endl;
cin>>n;
cout<<"Enter the special character->"<<endl;
cin>>c;
for(i=0;i<=n;i++)
{
for(j=0;j<i;j++)
{
cout<<c;
}
cout<<endl;
}
}
