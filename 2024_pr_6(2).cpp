#include<iostream>
using namespace std;
class Distance
{
    float kilometer;
    float meter;
public:
    void enter()
    {
        cout<<"Enter the distance in kilometer and meter "<<endl;
        cin>>kilometer;
        cin>>meter;
    }
    void display()
    {
        if(meter>1000)
        {
            meter=meter-1000;
            kilometer++;
            cout<<"Distance- > "<<endl;
            cout<<kilometer<<"."<<meter<<" Kms"<<endl;
        }
        else
        {
            cout<<"Distance- > "<<endl;
            cout<<kilometer<<"."<<meter<<" Kms"<<endl;
        }
    }
    Distance add(Distance d)
    {
        Distance temp;
        temp.kilometer=kilometer+d.kilometer;
        temp.meter=meter+d.meter;
        return temp;
    }
};
main()
{
    Distance d1,d2,d3;
    d1.enter();
    d2.enter();
    d1.display();
    d2.display();
    d3=d1.add(d2);
    d3.display();
}
