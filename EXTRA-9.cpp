#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    void set()
    {
        cout<<"Enter the Real and Imaginary part of the complex no: "<<endl;
        cin>>real>>img;
    }
    void get()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
};
main()
{
    complex c1,c2,c3;
    c1.set();
    c2.set();
    c3=c1-c2;
    c3.get();
}

