#include<iostream>
using namespace std;
class Distance{
int meter;
public:
    Distance()
    {
        meter=0;
    }//friend function
    friend int addfive(Distance);

};
int addfive(Distance d)
{
    d.meter+=5;
    return d.meter;
}
int main()
{
    Distance d;
    cout<<"Distance :"<<addfive(d)<<endl;
}
