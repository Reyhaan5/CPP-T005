#include<iostream>
using namespace std;
class complex
{
private:

int real,img;
public:

void setcomp();
void getcomp();
complex addcomp(complex c2);
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

complex complex :: addcomp(complex c)
{
complex ans;
ans.real=real+c.real;
ans.img=img+c.img;

return ans;
}
int main()
{
complex c1,c2;
c1.setcomp();
c1.getcomp();
c2.setcomp();
c2.getcomp();
complex c3=c1.addcomp(c2);
c3.getcomp();
}
