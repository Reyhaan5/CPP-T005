#include<iostream>
using namespace std;
class area
{
private:
    int l,b;
    float le,be;
public:
    void rect();
    void tri();
};
inline void area :: rect()
{
    cout<<"Enter length and breadth of Rectangle ->  "<<endl;
    cin>>le>>be;
    cout<<"Area of Triangle ->"<<(0.5)*le*be<<endl;
}
inline void area :: tri()
{
    cout<<"Enter length and breadth of Triangle ->  "<<endl;
    cin>>l>>b;
    cout<<"Area of Rectangle - >"<<l*b<<endl;
}
main()
{
    area a;
    a.rect();
    a.tri();
}
