#include<iostream>
using namespace std;
main()
{
int num,x,og,rev=1;
cout<<"Enter a number ->"<<endl;
cin>>num;
og=num;
cout<<"Original Number->"<<endl;
cout<<og<<endl;
cout<<"Reversed Number ->"<<endl;
//Reverse Process
while(num != 0)
{
x=num%10;    //Last digit extraction

cout<<x;
num=num/10;   //Last digit elimination
}
}
