#include<iostream>
using namespace std;
class Product
{
    int id;
    float price;
    char name[30];
    public:
        void set()
        {
            cout<<"Enter the name, id, price of the Product ->"<<endl;
            cin>>name>>id>>price;
        }
        void get()
        {
            cout<<"Name - > "<<name<<endl;
            cout<<"Id - > "<<id<<endl;
            cout<<"Price - > "<<price<<endl;
        }
};
main()
{
Product p;
p.set();
p.get();
}
