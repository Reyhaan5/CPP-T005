#include<iostream>
using namespace std;
main()
{
int f=1,n,i;
cout<<"Enter a number ->"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
f=f*i;
}
cout<<"Factorial of "<<n<<" is "<<f<<endl;
}
