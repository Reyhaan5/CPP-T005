#include<iostream>
using namespace std;
class complex
{
int real,img;
public:
void setcomplex()
{
cout<<"Enter Real and Imaginary parts of the complex number ->"<<endl;
cin>>real>>img;
}
void getcomplex()
{
cout<<real<<"+"<<img<<"i"<<endl;
}
//Declaration of operator function
complex operator+(complex c);
};
complex complex :: operator+(complex c)
{
complex temp;
temp.real=real+c.real;
temp.img=img+c.img;
return temp;
}
int main()
{
complex c1,c2,c3;
c1.setcomplex();
c2.setcomplex();
c3=c1+c2;
cout<<"Addition"<<endl;
c3.getcomplex();
}
