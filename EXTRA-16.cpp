#include<iostream>
using namespace std;
class avg
{
    int n[3];
    int i,s=0,a;
public:
    void enter()
    {
        cout<<"Enter 3 no.s"<<endl;
        for(i=0;i<3;i++)
        {
            cin>>n[i];
        }
        for(i=0;i<3;i++)
        {
            s+=n[i];
        }
        a=s/3;
        cout<<"Average is - > "<<a<<endl;
    }

};
main()
{
    avg g;
    g.enter();
}
