#include<iostream>
using namespace std;
class complex
{
private:
int real,img;
public:
complex();
complex(int n);
complex(int r,int im);
void setcomplex();
void getcomplex();
inline complex sumcomplex(complex c)
{
complex temp;
temp.real=real+c.real;
temp.img=img+c.img;
return temp;
}
};
complex :: complex()
{
real=0;
img=0;
}
complex :: complex(int r,int im)
{
real=r;
img=im;
}
complex :: complex(int n)
{
real=n;
img=n;
}
void complex :: setcomplex()
{
cout<<"Enter the Real and imaginary part of the complex number"<<endl;
cin>>real>>img;
}
void complex :: getcomplex()
{
cout<<real<<"+"<<img<<"i"<<endl;
}
main()
{
complex c1(2,3),c2(4),c3;
c1.getcomplex();
c2.getcomplex();
c3=c1.sumcomplex(c2);
cout<<"Addition ->"<<endl;
c3.getcomplex();
}
