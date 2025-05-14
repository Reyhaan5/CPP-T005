#include<iostream>
using namespace std;

class op
{
public:
    int n;
    void enter()
    {
        cout<<"Enter any no : "<<endl;
        cin>>n;
    }
    void print()
    {
        cout<<"Number - > "<<n<<endl;
    }
    int operator<(op m);
};
int op:: operator<(op m)
{
    if(n<m.n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
main()
{
    op n1,n2;
    n1.enter();
    n2.enter();
    if(n1<n2)
    {
        cout<<n1.n<<" is small "<<endl;
    }
    else
    {
        cout<<n2.n<<" is small "<<endl;
    }
}
