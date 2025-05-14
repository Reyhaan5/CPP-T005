#include<iostream>
using namespace std;
class A
{
private:
    int a,b;
public:
    void set_ab();
    int get_a();
    int get_b();
};
void A :: set_ab()
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
}
int A :: get_a()
{
    return a;
}
int A :: get_b()
{
   return b;
}
class B : public A
{
    int c;
public:
    void add();
    void display();
};
void B :: add()
{
    c=get_a()+get_b();
}
void B :: display()
{
    cout<<"First number"<<get_a()<<endl;
    cout<<"Second number"<<get_b()<<endl;
    cout<<"Addition ="<<c<<endl;
}

main()
{
    B b;
    b.set_ab();
    b.add();
    b.display();
}
