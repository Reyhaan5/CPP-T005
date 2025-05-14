#include<iostream>
using namespace std;
class op
{
    int x,y;
public:
    void set()
    {
        cout<<"Enter Two number's - > "<<endl;
        cin>>x>>y;
    }
    void get()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
    void operator ++()
    {
        x++;
        y++;
    }
};
main()
{
    op o;
    o.set();
    ++o;
    o.get();
}

