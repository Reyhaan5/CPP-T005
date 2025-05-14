#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"Welcome to A's Constructor "<<endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout<<"Welcome to B's Constructor "<<endl;
    }
};
class C : public B
{
public:
    C()
    {
        cout<<"Welcome to C's Constructor "<<endl;
    }
};
main()
{
    C c;
}
