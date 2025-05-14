#include<iostream>
using namespace std;
void area(int length,int breadth)
{
    cout<<"Area of Rectangle is = "<<length*breadth<<endl;
}
void area()
{
    int r;
    cout<<"Enter the Radius of the circle"<<endl;
    cin>>r;
    cout<<"Area of Circle is = "<<3.14*r*r<<endl;
}
void area(float l,float h)
{
    cout<<"Area of Triangle is ="<<0.5*h*l<<endl;
}
main()
{
    area(4,5);
    area();
    float be,he;
    cout<<"Enter the height and breadth of triangle ";
    cin>>he>>be;
    area(be,he);
}
