#include<iostream>
using namespace std;
class Box
{
float width,depth,height;
public:
Box(float w,float d,float h);
void getbox();
};
Box :: Box(float w,float d,float h)
{
cout<<"Welcome to parameterized constructor :"<<endl;
width=w;
depth=d;
height=h;
}
void Box :: getbox()
{
cout<<"Width= "<<width<<endl;
cout<<"Depth= "<<depth<<endl;
cout<<"Height= "<<height<<endl;
}
int main()
{
Box b1(1.1,1.2,1.3);
b1.getbox();
}
