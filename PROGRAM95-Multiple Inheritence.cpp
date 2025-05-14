#include<iostream>
using namespace std;
class M
{
protected:
    int m;
public:
    void set_m()
    {
        cout<<"Enter the value of m :"<<endl;
        cin>>m;
    }
};
class N
{
protected:
    int n;
public:
    void set_n()
    {
        cout<<"Enter the value of n :"<<endl;
        cin>>n;
    }
};
//Multiple Inheritence
class P : public M,public N
{
public:
    void display()
    {
        cout<<"m = "<<m<<" n = "<<n<<endl;
        cout<<"Addition = "<<m+n<<endl;
    }

} ;
main()
{
    P p;
    p.set_m();
    p.set_n();
    p.display();
}
