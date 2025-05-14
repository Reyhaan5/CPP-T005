#include<iostream>
using namespace std;
#define PI 3.14
main()
{
int r,l,b,h,B,choice;
cout<<"****MENU****"<<endl;
cout<<"1.AREA OF RECTANGLE"<<endl;
cout<<"2.AREA OF TRIANGLE"<<endl;
cout<<"3.AREA OF CIRCLE"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter the length"<<endl;
cin>>l;
cout<<"Enter the breadth"<<endl;
cin>>b;
cout<<"AREA OF RECTANGLE ->"<<l*b<<endl;
break;

case 2:
cout<<"Enter the breadth"<<endl;
cin>>B;
cout<<"Enter the height"<<endl;
cin>>h;
cout<<"AREA OF TRIANGLE ->"<<0.5*B*h<<endl;
break;

case 3:
cout<<"Enter the radius"<<endl;
cin>>r;
cout<<"AREA OF CIRCLE ->"<<PI*r*r<<endl;
break;

}
}
