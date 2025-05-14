#include<iostream>
using namespace std;
class M
{
public:
    void display()
    {
        cout<<"class M"<<endl;
    }
};
class N
{
public:
    void display()
    {
        cout<<"class N"<<endl;
    }
};
class P: public M,public N
{
public:
    void display()
    {
        M :: display();
    }
};
main()
{
    P p;
    p.display();
    p.N :: display();
}

