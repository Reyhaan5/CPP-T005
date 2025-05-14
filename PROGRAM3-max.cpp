#include<iostream>
using namespace std;
main()
{
int a[5],i,max=0;
cout<<"Enter the numbers->"<<endl;
for(i=0;i<5;i++)
{
cin>>a[i];
}
cout<<"Entered numbers are ->"<<endl;
for(i=0;i<5;i++)
{
cout<<a[i]<<endl;
}
for(i=0;i<5;i++)
{
if(a[i]>0 && a[i]>max)
{
max=a[i];
}
else
{
continue;
}
}
cout<<"MAX number is ->>>"<<endl<<max<<endl;
}
