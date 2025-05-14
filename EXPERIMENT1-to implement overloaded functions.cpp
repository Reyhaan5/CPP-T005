#include<iostream>
using namespace std;
float area(int r)
{
float a_cir=r*r*3.14;
return a_cir;
}
int area(int l,int b)
{
int a_rect=l*b;
return a_rect;
}
float area(int ba,float h)
{
float a_tri=0.5*ba*((float)h);
return a_tri;
}

int main()
{
int num,r,l,b,ba;
float h;
cout<<"****MENU****"<<endl;
cout<<"1.AREA OF CIRCLE"<<endl;
cout<<"2.AREA OF RECTANGLE"<<endl;
cout<<"3.AREA OF TRIANGLE"<<endl;
cout<<"Choose from the given menu ->"<<endl;
cin>>num;

switch(num)
{
case 1:
{
cout<<"Enter the radius of the circle ->"<<endl;
cin>>r;
float a_cir=area(r);
cout<<"The AREA of the circle is "<<a_cir<<endl;
break;
}
case 2:
{
cout<<"Enter the length of the rectangle ->"<<endl;
cin>>l;
cout<<"Enter the breadth of the rectangle ->"<<endl;
cin>>b;
int a_rect=area(l,b);
cout<<"The AREA of rectangle is "<<a_rect<<endl;
break;
}
case 3:
{
cout<<"Enter the breadth of the triangle"<<endl;
cin>>ba;
cout<<"Enter the length of the triangle"<<endl;
cin>>h;
float a_tri=area(ba,h);
cout<<"The AREA of triangle is "<<a_tri<<endl;
break;
}
default :
{
cout<<"WRONG CHOICE";
}
}


}
