#include<iostream>
using namespace std;

class UnaryMinus
{
int x,y;
public:
void setxy()
{

cout<<"Enter x&y values:"<<endl;
cin>>x>>y;
}
void getxy()
{
cout<<"x= "<<x<<" and y= "<<y<<endl;
}
void operator-();
};
void UnaryMinus :: operator-()
{
x=-x;
y=-y;
}
int main()
{
UnaryMinus ob1,ob2;
ob1.setxy();
-ob1;
ob1.getxy();
ob2.setxy();
-ob2;
ob2.getxy();
}
