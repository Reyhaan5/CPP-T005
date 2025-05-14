#include<iostream>
#include<string.h>
using namespace std;
void join()
{
    char a[30],b[30],c[30];
    cout<<"Enter the 1st string :-"<<endl;
    cin>>a;
    cout<<"Enter the 2nd string :-"<<endl;
    cin>>b;
    strcpy(c,a);
    strcat(c,b);
    cout<<"1st string :- "<<a<<endl;
    cout<<"2nd string :- "<<b<<endl;
    cout<<"Concatinated string :- "<<c<<endl;

}

    class number
    {
        int n;
    public:
        void accept()
        {
            cout<<"Enter any number"<<endl;
            cin>>n;
        }
        void print()
        {
            cout<<"Number is "<<n<<endl;
        }
        int operator==(number n3)
        {
            if(n3.n==n)
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
    //join();
    number n1,n2;
    n1.accept();
    n2.accept();
    if(n1==n2)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not Equal "<<endl;
    }

}
