#include<iostream>
using namespace std;
class Area
{
    int l,b;
public:
    void get()
    {
        cout<<"Area of Rectangle - > "<<l*b<<endl;
    }
};
main()
{
    Area a;
    a.get();
}
