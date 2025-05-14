#include<iostream>
using namespace std;
class two;//forward declaration
class one
{
int n1;
public:
one()
{n1=0;}
friend void input(one o,two t); //friend function

};
class two
{
int n2;
public:
two()
{n2=0;}
friend void input(one o,two t); //friend function
};
void input(one o,two t) // not using :: as it is not a member function as it is a friend function
{
cout<<"Enter the 1st number ->"<<endl;
cin>> o.n1;
cout<<"Enter the 2nd number ->"<<endl;
cin>>t.n2;
if(o.n1<t.n2)
cout<<o.n1<<" is less than "<<t.n2<<endl;
else
cout<<t.n2<<" is less than "<<o.n1<<endl;
}
main()
{
class one o;
class two t;
input(o,t);
}
