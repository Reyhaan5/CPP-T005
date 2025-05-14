#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    void enter()
    {
        cout<<"Enter the Real an Imaginary part of the Complex no:- "<<endl;
        cin>>real;
        cin>>img;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex addcomp (complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
main()
{
    complex c1,c2,c3;
    c1.enter();
    c2.enter();
    c3=c1.addcomp(c2);
    c3.print();
}

