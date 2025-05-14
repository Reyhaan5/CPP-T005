#include<iostream>
using namespace std;
class op
{
    int x,y;
public:
    void set()
    {
        cout<<"enter the no: "<<endl;
        cin>>x>>y;
    }
    void get()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
    void operator--()
    {
        x--;
        y--;
    }
};
main()
{
    op o;
    o.set();
    --o;
    o.get();
}

