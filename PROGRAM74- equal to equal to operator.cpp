#include<iostream>
using namespace std;
class number
{
public:
int value;
int operator==(number n)
{
if(value==n.value)
{
cout<<"Equal"<<endl;
return 1;
}
else
{
cout<<"Not Equal"<<endl;
return 0;
}
}
};
main()
{
number n1,n2;
cout<<"Enter the value of n1"<<endl;
cin>>n1.value;
cout<<"Enter the value of n2"<<endl;
cin>>n2.value;
n1==n2;
}
