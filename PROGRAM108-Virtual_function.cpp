#include<iostream>
#include<string.h>
using namespace std;
class Base
{
public:
    void display()
    {
      cout<<"Display Base"<<endl;
    }
    virtual void show()
    {
        cout<<"Show Base "<<endl;
    }
};
class Derived : public Base
{
    void display()
    {
      cout<<"Display Base"<<endl;
    }
    void show()
    {
        cout<<"Show Base "<<endl;
    }

};
int main()
{
    Base *bptr;
    Base b;
    bptr=&b;
    cout<<"bptr is pointing to object b"<<endl;
    bptr->display();
    bptr->show();

    Derived d;
    bptr=&d;
    cout<<"bptr is pointing to object d"<<endl;
    cout<<"as the type of btr is Base, it can call Base display() only "<<endl;
    bptr->display();
    cout<<"As show() is virtual and bptr is having address of d,"<<endl;
    cout<<"It can call the derived version of show() "<<endl;
    bptr->show();
    return 0;
}
