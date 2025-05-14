#include<iostream>
using namespace std;
void three()
{
    int num;
    int d;
    int temp,sum=0;
    cout<<"Enter any three digit no:"<<endl;
    cin>>num;
    temp=num;
    cout<<"Reverse No: ";
    d=temp%10;
    sum+=d;
    cout<<d;
    temp=temp/10;
    d=temp%10;
    sum+=d;
    cout<<d;
    temp=temp/10;
    d=temp%10;
    sum+=d;
    cout<<d;
    cout<<"\nSum:"<<sum<<endl;
}

void ten()
{
    int n[10];
    int i,s=0;
    cout<<"Enter 10 2-digit no.s: "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>n[i];
        if(n[i]>=100)
        {
            cout<<"Why you enter 3-digit no why!"<<endl;
            break;
        }
        else
        {
            s+=n[i];
        }
    }
    cout<<"Sum of all 2-digit no.s is: "<<s<<endl;
}
main()
{
three();
ten();
}
