#include<iostream>
using namespace std;
class employee
{
    int id;
    char name[30];
public:
    void read_data()
    {
        cout<<"Enter the Employee's ID and Name - >"<<endl;
        cin>>id>>name;
    }
    void display_data()
    {
        cout<<"ID - > "<<id<<endl;
        cout<<"Name - > "<<name<<endl;
    }
};
main()
{
    employee e;
    e.read_data();
    e.display_data();
}

