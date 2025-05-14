#include<iostream>
using namespace std;

void call_by_value(int x)
{
    x+=5;
    cout<<"Inside Call by value : "<<x<<endl;
}
void call_by_refernce(int &t)
{
    t+=5;
    cout<<"Inside Call by reference : "<<t<<endl;
}
main()
{
    int n;
    cout<<"Enter a no : -"<<endl;
    cin>>n;
    call_by_value(n);
    cout<<"Outside call by value : "<<n<<endl;
    call_by_refernce(n);
    cout<<"Outside call by reference : "<<n<<endl;
}
