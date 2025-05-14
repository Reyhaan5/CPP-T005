#include<iostream>
#include<fstream>
#define PI 3.14
using namespace std;
class area
{
int r;
int l,b;
float le,h;
public:
area()
{
r=5;
}
area(int length,int breadth)
{
l=length;
b=breadth;
}
area(area & obj)
{
le=obj.l;
h=obj.b;
}
void area_circle()
{
cout<<"Area of Circle is ->"<<PI*r*r<<endl;
}
void area_rectangle()
{
cout<<"Area of Rectangle is ->"<<l*b<<endl;
}
void area_triangle()
{
cout<<"Area of Triangle is ->"<<0.5*h*le<<endl;
}
};
main()
{
area a1,a2(2,10),a3(a2);
int choice;
cout<<"1.Area of Circle"<<endl;
cout<<"2.Area of Rectangle"<<endl;
cout<<"3.Area of  Triangle"<<endl;
cout<<"Enter your choice from the menu"<<endl;
cin>>choice;
switch(choice)
{
case 1:{
a1.area_circle();
break;
}
case 2:{
a2.area_rectangle();
break;
}
case 3:{
a3.area_triangle();
break;
}
default:{
cout<<"Wrong Input"<<endl;
}
}
}
