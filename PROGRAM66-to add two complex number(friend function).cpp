#include<iostream>
using namespace std;
class complex
{
private:

int real,img;
public:

void setcomp();
void getcomp();
friend complex addcomp(complex c1,complex c2);
};

void complex :: setcomp()
{
cout<<"Enter the Real part of the complex number"<<endl;
cin>>real;
cout<<"Enter the Imaginary part of the complex number"<<endl;
cin>>img;
}

void complex :: getcomp()
{
cout<<"The Complex number is -> "<<real<<"+"<<img<<"i"<<endl;
}

complex addcomp(complex c1,complex c2)
{
complex t;
t.real=c1.real+c2.real;
t.img=c1.img+c2.img;
return t;
}
int main()
{
complex c1,c2,c3;
c1.setcomp();
c1.getcomp();
c2.setcomp();
c2.getcomp();
cout<<"Addition ->";
c3=addcomp(c1,c2);
c3.getcomp();
}
