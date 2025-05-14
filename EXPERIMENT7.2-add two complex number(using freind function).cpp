#include<iostream>
using namespace std;
class Comp
{
int x,y;
public:
void read()
{
cout<<"Enter real and imaginary parts:"<<endl;
cin>>x>>y;
}
friend Comp add(Comp c1, Comp c2);
void disp()
{
if(y<0)
{
cout<<x<<y<<"i";
}
else
{
cout<<x<<"+"<<y<<"i"<<endl;
}
}
};
Comp add(Comp c1, Comp c2)
{
Comp t;
t.x=c1.x+c2.x;
t.y=c1.y+c2.y;
return t;
};
main()
{
Comp c1,c2,c3;
c1.read();
c2.read();
c3=add(c1,c2);
c3.disp();
}
