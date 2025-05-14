#include<iostream>
using namespace std;
main()
{
int i,num,sum=0;
cout<<"Enter any number ->"<<endl;
for(i=0;sum<100;i++)
{
cin>>num;
sum+=num;
}
if(sum>100)
{
goto display;
}

display :cout<<"SUM is ->"<<sum<<endl;

}
