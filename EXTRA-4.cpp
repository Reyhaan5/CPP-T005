#include<iostream>
using namespace std;
class Mobile
{
    public:
    char name[30];
    float price;
    int no;
    void set()
    {
        cout<<"Enter the Mobile's Name, Price and Model no -> "<<endl;
        cin>>name>>price>>no;
    }
    void get()
    {
        cout<<"Name - >"<<name<<endl;
        cout<<"Price - > "<<price<<endl;
        cout<<"Model's No - > "<<no<<endl;
    }
};
main()
{
    Mobile m[5];
    int i;
    for(i=0;i<5;i++)
    {
        m[i].set();
    }
    cout<<"Selected One's ->"<<endl;
    for(i=0;i<5;i++)
    {
        if(m[i].price>15000)
        {
            m[i].get();
        }
        else
        {
            continue;
        }
    }

}
