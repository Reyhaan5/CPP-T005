#include<iostream>
using namespace std;
int two(int a,int b)
{
int square_a=a*a;
int square_b=b*b;
return square_a;
return square_b;
}
void two(double a, double b)
{
int i,j;
double factorial_a=1,factorial_b=1;
for(i=1;i<=a;i++)
{
factorial_a=factorial_a*i;
}
cout<<"The Factorial of 1st number is ->"<<factorial_a<<endl;
for(j=1;j<=b;j++)
{
factorial_b=factorial_b*j;
}
cout<<"The Factorial of 2nd number is ->"<<factorial_b<<endl;
}
float two(float a,float b)
{
int greater_a=a;
int greater_b=b;
if(a>b)
{
return greater_a;
}
else
{
return greater_b;
}
}
 int main()
{
int choice;
cout<<"1.SQUARE"<<endl;
cout<<"2.FACTORIAL"<<endl;
cout<<"3.GREATEST NUMBER OF THE TWO"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice)
{
case 1:
{
int a,b;
cout<<"Enter the 1st number ->"<<endl;
cin>>a;
cout<<"Enter the 2nd number ->"<<endl;
cin>>b;
int square_a=two(a,b);
int square_b=two(b,a);
cout<<"The sqaure of 1st number ->"<<square_a<<endl;
cout<<"The square of 2nd number ->"<<square_b<<endl;
break;
}
case 2:
{
double a,b;
cout<<"Enter the 1st number ->"<<endl;
cin>>a;
cout<<"Enter the 2nd number ->"<<endl;
cin>>b;
two(a,b);
break;
}
case 3:
{
float a,b;
cout<<"Enter the 1st number ->"<<endl;
cin>>a;
cout<<"Enter the 2nd number ->"<<endl;
cin>>b;
float greater_a=two(a,b);
float greater_b=two(b,a);

if(greater_a>greater_b)
{
cout<<greater_a<<" is the greatest"<<endl;
}
else
{
cout<<greater_b<<" is the greatest"<<endl;
}
break;
}
default:
{
cout<<"Invalid Input"<<endl;
}
}
}
