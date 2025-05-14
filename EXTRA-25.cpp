#include<iostream>
using namespace std;
void area()
{
    int length, breadth;
    cout<<"Enter Length & Breadth -> "<<endl;
    cin>>length>>breadth;
    cout<<"Area of Rectangle - > "<<length*breadth<<endl;
}
int area(int lengthh , int height)
{
    return lengthh*height;
}
main()
{
    area();
    int l,b;
    int ar;
    cout<<"Enter Length & Height -> "<<endl;
    cin>>l>>b;
    ar=area(l,b);
    cout<<"Area of Triangle - >"<<0.5*ar<<endl;
}
