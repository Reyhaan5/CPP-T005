#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;//false
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int number;
    cout<<"Enter the Number - > "<<endl;
    cin>>number;

    if(number < 0)
    {
        cout<<"Not Defined "<<endl;
    }
    else
    {
        cout<<"Factorial of "<<number<<" is "<<factorial(number)<<endl;
    }
}
