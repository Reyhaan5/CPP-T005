#include<iostream>
using namespace std;
main()
{
int n;
float sum=0,i;
cout<<"Enter the limit ->"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
sum=sum+(1.0/i);
}
cout<<sum;
}
