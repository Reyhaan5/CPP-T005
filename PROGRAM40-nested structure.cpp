#include<iostream>
#define PI 3.14
using namespace std;
struct circle
{
float radius;
float area;
struct
{
float c;
}center;
};
int main()
{
struct circle c1;
cout<<"Enter the Radius of the circle ->"<<endl;
cin>>c1.radius;
cout<<"Enter the center of the circle ->"<<endl;
cin>>c1.center.c;
c1.area = PI*c1.radius*c1.radius;
cout<<"The Area of circle ->"<<endl;
cout<<c1.area;
}
