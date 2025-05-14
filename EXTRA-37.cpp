#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    void enter()
    {
        cout<<"Enter the Real and Imaginary of the complex no:"<<endl;
        cin>>real>>img;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend complex add();
};
