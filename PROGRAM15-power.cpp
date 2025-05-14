#include<iostream>
using namespace std;
main()
{
int i,j,n,x,power;
cout<<"Enter a number"<<endl;
cin>>x;
cout<<"Enter the power n"<<endl;
cin>>n;
if(x<1)
{
cout<<"the positive"<<endl;
x= -(x);
cout<<x<<endl;
}
for(i=1;i<=n;i++)
{
power=1;
for(j=1;j<=i;j++)
{
power=power*x;

}
cout<<x<<"^"<<i<<"="<<power<<endl;
}
}
