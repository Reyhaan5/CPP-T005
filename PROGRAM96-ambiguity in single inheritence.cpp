#include<iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<"A"<<endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout<<"B"<<endl;
    }
};
main()
{
B b;
b.A :: display();
b.B :: display();
}
