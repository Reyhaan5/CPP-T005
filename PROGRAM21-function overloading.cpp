#include<iostream>
using namespace std;

int cal(float a,float b)
{
return a+b;
}
double cal(double a,int b)
{
return a-b;
}
double cal(int a,double b)
{
return a*b;
}
double cal(int a,int b)
{
if(b !=0){
return a/b;
}
else{
cout<<"Undefined"<<endl;
return 0;
}
}
main()
{
int choice;
cout<<"1.ADDITION"<<endl;
cout<<"2.SUBTRACTION"<<endl;
cout<<"3.MULTIPLICATION"<<endl;
cout<<"4.DIVISION"<<endl;
cout<<"Enter your choice from the menu"<<endl;
cin>>choice;
switch(choice)
{
case 1:
{
float a,b;
cout<<"Enter the first number "<<endl;
cin>>a;
cout<<"Enter the second number "<<endl;
cin>>b;
float add=cal(a,b);
cout<<"The ADDITION is ->"<<add<<endl;
break;
}
case 2:
{
double a;
int b;
cout<<"Enter the first number "<<endl;
cin>>a;
cout<<"Enter the second number "<<endl;
cin>>b;
double sub=cal(a,b);
cout<<"The SUBTRACTION is ->"<<sub<<endl;
break;
}
case 3:
{
int a;
double b;
cout<<"Enter the first number "<<endl;
cin>>a;
cout<<"Enter the second number "<<endl;
cin>>b;
double mul=cal(a,b);
cout<<"The MULTIPLICATION  is ->"<<mul<<endl;
break;
}
case 4:
{
int a,b;
cout<<"Enter the first number "<<endl;
cin>>a;
cout<<"Enter the second number "<<endl;
cin>>b;
int div=cal(a,b);
cout<<"The DIVISION is ->"<<div<<endl;
break;
}
default:
{
cout<<"Invalid Input......"<<endl;
}
}
}
