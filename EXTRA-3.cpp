#include<iostream>
using namespace std;
class Book
{

private:
    char name[30];
    int id,qty;
    float price;
public:
    void get_book_info()
    {

        cout<<"Enter Books id - >"<<endl;
        cin>>id;
        cout<<"Enter books name"<<endl;
        cin>>name;
        cout<<"Enter price ->"<<endl;
        cin>>price;
        cout<<"Enter Quantity - >"<<endl;
        cin>>qty;
    }
    void print_book_info()
    {
        cout<<"Books id - >"<<id<<endl;
        cout<<"Enter books name"<<name<<endl;
        cout<<"Enter price ->"<<price<<endl;
        cout<<"Enter Quantity - >"<<qty<<endl;

    }
};
main()
{
    Book b[2];
    int i;
    for(i=0;i<2;i++)
    {
       b[i].get_book_info();
    }
    for(i=0;i<2;i++)
    {
       b[i].print_book_info();
    }
}
