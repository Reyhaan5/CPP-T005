#include<iostream>
using namespace std;
class Bank
{
private:
    int account_no;
    float balance;
    float amt;
    float amt2;
public:
    void set()
    {
        cout<<"Enter your account no assigned to you :- "<<endl;
        cin>>account_no;
    }
    void deposit();
    void withdraw();
    void check();
};
void Bank :: deposit()
{
    cout<<"Enter the Amount to be deposited :-"<<endl;// initial balance is 0
    cin>>amt2;
    balance+=amt2;
}
void Bank :: withdraw()
{
    cout<<"Enter the Amount to be withdrawn :- "<<endl;
    cin>>amt;
    if((balance-amt)<3000)
    {
        cout<<"Enter you are required to maintain a balance of 3000... "<<endl;
    }
    else
    {
        balance=balance-amt;
    }
}
void Bank :: check()
{
    cout<<"Account No :- "<<account_no<<endl;
    cout<<"Balance :- "<<balance<<endl;
}
main()
{
    Bank b;
    int choice;
    b.set();
    do
    {
    cout<<"1.DEPOSIT"<<endl;
    cout<<"2.Withdraw"<<endl;
    cout<<"3.Check Balance"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            b.deposit();
            break;
        }
    case 2:
        {
            b.withdraw();
            break;
        }
    case 3:
        {
            b.check();
            break;
        }
    default:
        {
            cout<<"Exiting ..."<<endl;
        }
    }

    }
    while(choice!=3);

}
