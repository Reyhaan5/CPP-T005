#include<iostream>
using namespace std;

class complex
{
    int real,img;
public:
    void accept()
    {
        cout<<"Enter the Real and Imaginary part of the complex no : -"<<endl;
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex addcomp(complex c)
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
    c1.accept();
    c2.accept();
    c3=c1.addcomp(c2);
    c3.display();
}
