#include<iostream>
#define PI 3.14
using namespace std;
class A
{
private:
    float r;
public:
    float set_r();
    float get_r();
};
float A :: set_r()
{
    cout<<"Enter Radius"<<endl;
    cin>>r;
}
float A :: get_r()
{
    return r;
}

class B : public A
{
    float c;
public:
    void area();
    void display();
};
void B :: area()
{
   c=PI*get_r()*get_r();
}
void B :: display()
{
    cout<<"Radius = "<<get_r()<<endl;

    cout<<"AREA  = "<<c<<endl;
}

main()
{
    B b;
    b.set_r();
    b.area();
    b.display();
}
