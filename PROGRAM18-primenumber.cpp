#include<iostream>
using namespace std;
main()
{
int num,i,flag=0;
cout<<"Enter a number ->"<<endl;
cin>>num;
if(num<=1)
{
cout<<"Not a prime number ->"<<endl;
}
for(i=2;i<=num;i++)
{
if(num%i==0)
{
flag++;
}
}
if(flag>1)
{
cout<<num<<" is not a Prime number"<<endl;
}
else
{
cout<<num<<" is a Prime number"<<endl;
}
}

