#include<iostream>
#include<string.h>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout<<"b= "<<b<<endl;
    }
};
class DC :public BC
{
public:
    int d;
    void show()
    {
        cout<<"b= "<<b<<endl;
        cout<<"d= "<<d<<endl;
    }
};
int main()
{
    BC *bptr;
    BC base;
    bptr=&base;
    cout<<"bptr points to the object base "<<endl;
    bptr->b=100;
    bptr->show();

    DC derived;
    bptr=&derived;
    cout<<"bptr points to the object derived "<<endl;
    cout<<"It can only access the private members inherited by BC i.e only b "<<endl;
    bptr->b=200;
    cout<<"b= "<<bptr->b<<endl;
    DC *dptr;
    dptr=&derived;
    cout<<"dptr points to the object derived "<<endl;
    cout<<"as dptr is of type DC, it can access all members of DC "<<endl;
    dptr->d=300;
    dptr->show();

    cout<<"Using CASTING Concept, a base pointer class can access all the members of DC "<<endl;
    ((DC*)bptr)->d=400;
    ((DC*)bptr)->show();

}
