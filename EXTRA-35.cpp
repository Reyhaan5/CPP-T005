#include<iostream>
using namespace std;

void callbyvalue(int x)
{
    x=x+5;
    cout<<"Inside callbyvalue = "<<x<<endl;
}
void callbyrefernce(int &t)
{
    t=t+5;
    cout<<"Inside callbyreference = "<<t<<endl;
}
main()
{
    int n;
    cout<<"Enter a number - > "<<endl;
    cin>>n;
    callbyvalue(n);
    cout<<"Outside callbyvalue = "<<n<<endl;
    callbyrefernce(n);
    cout<<"Outside callbyrefernce = "<<n<<endl;
}
