#include<iostream>
using namespace std;
class B;
class A
{
public:
int a1;
void accept()
{
cout<<"Enter a number ->"<<endl;
cin>>a1;
}
void display()
{
cout<<a1;
}
friend void small(A a,B b);
};
class B
{
public:
int b1;
void accept()
{
cout<<"Enter a number ->"<<endl;
cin>>b1;
}
void display()
{
cout<<b1;
}
friend void small(A a,B b);
};
void small(A a,B b)
{
cout<<"smallest number is ->"<<endl;
if(a.a1<b.b1)
{
a.display();
}
else
{
b.display();
}
}
main()
{
A a;
B b;
a.accept();
b.accept();
small(a,b);
}
