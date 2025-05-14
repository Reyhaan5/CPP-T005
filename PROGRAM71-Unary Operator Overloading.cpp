#include<iostream>
using namespace std;

class UnaryMinus
{
int x,y;
public:
void setData()
{

cout<<"Enter x&y values:"<<endl;
cin>>x>>y;
}
void getData()
{
cout<<"x="<<x<<" and y="<<y<<endl;
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
UnaryMinus umob1,umob2;
umob1.setData();
-umob1;
umob1.getData();
umob2.setData();
-umob2;
umob2.getData();
}
