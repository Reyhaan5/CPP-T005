#include<iostream>
using namespace std;
class Multi
{
    int n1,m;
public:
    void set()
    {
        cout<<"Enter the number "<<endl;
        cin>>n1;
    }
    Multi add(Multi n)
    {
        Multi temp;
        temp.m=n1*n.n1;
        return temp;
    }
    void get()
    {
        cout<<"Multiplication -> "<<m<<endl;
    }
};
main()
{
    Multi x,y;
    x.set();
    y.set();
    x=x.add(y);
    x.get();
}
