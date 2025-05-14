#include<iostream>
#define PI 3.14
using namespace std;
class area
{
    int r;
public:
    area();
    float get();
};
area :: area (){
r=3;
}
float area :: get()
{
    return PI*r*r;
}
main()
{
    class area a;
    cout<<a.get();
}
