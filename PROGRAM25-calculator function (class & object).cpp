#include<iostream>
using namespace std;
class calculator
{
private:
double n1;
double n2;
double a,sub,multiply,div;

public:
void add();
void subtract();
void multiplication();
void division();
};

void calculator :: add()
{
cout<<"Enter 1st number ->"<<endl;
cin>>n1;
cout<<"Enter 2nd number ->"<<endl;
cin>>n2;
a=n1+n2;
cout<<"The Addition is ->"<<a<<endl;

}

void calculator :: subtract()
{
cout<<"Enter 1st number ->"<<endl;
cin>>n1;
cout<<"Enter 2nd number ->"<<endl;
cin>>n2;
sub=n1-n2;
cout<<"The Subtraction is ->"<<sub<<endl;
}

void calculator :: multiplication()
{
cout<<"Enter 1st number ->"<<endl;
cin>>n1;
cout<<"Enter 2nd number ->"<<endl;
cin>>n2;
multiply=n1*n2;
cout<<"The Multiplication is ->"<<multiply<<endl;
}

void calculator :: division()
{
cout<<"Enter 1st number ->"<<endl;
cin>>n1;
cout<<"Enter 2nd number ->"<<endl;
cin>>n2;
div=n1/n2;
cout<<"The Division is ->"<<div<<endl;

}
main()
{
char choice;
class calculator c1;
cout<<"a.ADDITION"<<endl;
cout<<"b.SUBTRACTION"<<endl;
cout<<"c.MULTIPLICATION"<<endl;
cout<<"d.DIVISION"<<endl;
cout<<"Enter your choice ->"<<endl;
cin>>choice;

switch(choice)
{
case 'a':c1.add();
         break;
case 'b':c1.subtract();
         break;
case 'c':c1.multiplication();
         break;
case 'd':c1.division();
         break;
default:
cout<<"Wrong Input"<<endl;
        break;
}

}
