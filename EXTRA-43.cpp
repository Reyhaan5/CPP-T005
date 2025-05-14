#include<iostream>
using namespace std;
class car
{
    char name[30];
    float kms;
    int no;
    float charge;
public:
    void enter()
    {
        cout<<"Enter the Car no:-"<<endl;
        cin>>no;
        cout<<"Enter the Customer name  :- "<<endl;
        cin>>name;
        cout<<"How many kilometers it has travelled :-"<<endl;
        cin>>kms;
    }
    void calculate()
    {
        if(kms>=1 && kms<=40)
        {
            charge=kms*20;
        }
        else if(kms>40 && kms<=90)
        {
            charge=kms*15;
        }
        else if(kms>90 && kms<=150)
        {
            charge=kms*10;
        }
        else if(kms>150)
        {
            charge=kms*8;
        }
        else
        {
            cout<<"Calculation Error"<<endl;
        }
        charge=charge+(0.12*charge);
    }
    void print()
    {
        cout<<"Customers name :- "<<name<<endl;
        cout<<"Car no :- "<<no<<endl;
        cout<<"Kilometers travelled:- "<<kms<<endl;
        cout<<"Final Bill:- "<<charge<<endl;
    }
};
main()
{
    int n;
    cout<<"How many customers info do you want to enter:- "<<endl;
    cin>>n;
    car c[n];
    int i;
    cout<<"Enter Data --- "<<endl;
    for(i=0;i<n;i++)
    {
        c[i].enter();
    }
    for(i=0;i<n;i++)
    {
        c[i].calculate();
        c[i].print();
    }
}
