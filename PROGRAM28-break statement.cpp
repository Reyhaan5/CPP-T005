#include<iostream>
using namespace std;
main()
{
int n[5],i,d,sum=0;
cout<<"Enter 10 two-digit numbers"<<endl;
for(i=1;i<=10;i++)
{
cin>>n[i];
d=n[i];
int count=0;
while(d!=0)
{
d=d/10;
count++;
}
sum=sum+n[i];
if(count!=2)
{
break;
}

}
cout<<"The SUM IS ->"<<sum<<endl;
}
