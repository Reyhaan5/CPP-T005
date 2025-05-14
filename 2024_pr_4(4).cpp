#include<iostream>
using namespace std;
class product
{
    int price;
    char name[30];
public:
    void get()
    {
        cout<<"Enter the name and price :"<<endl;
        cin>>name>>price;
    }
    void print()
    {
        cout<<"Name "<<name<<endl;
        cout<<"Price "<<price<<endl;
    }
    int operator>(product p)
    {
        if(price>p.price)
        {
           return 1;
        }
        else
        {
            return 0;
        }
    }
};
main()
{
    product p1,p2;
    p1.get();
    p2.get();
    if(p1>p2)
    {
        p1.print();
    }
    else
    {
        p2.print();
    }
}
