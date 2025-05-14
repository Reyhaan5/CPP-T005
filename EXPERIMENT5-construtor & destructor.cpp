#include<iostream>
using namespace std;

class Box
{
float depth,width,height;
public:
Box();
Box(float w,float d,float h);
Box(float val);
Box(Box & ob);
~Box();
void getBox();
};
Box :: Box(Box & ob)
{
cout<<"Hello Constructor";
width=ob.width;
depth=ob.depth;
height=ob.height;
}
Box :: ~Box()
{
width=0;
depth=0;
height=0;
}
Box :: Box(float w, float d, float h)
{
width=w;
depth=d;
height=h;
}
Box :: Box(float val)
{
width=val;
depth=val;
height=val;
}
void Box ::getBox()
{
cout<<"Width = "<<width<<endl;
cout<<"Hight = "<<height<<endl;
cout<<"Depth = "<<depth<<endl;
}
int main()
{
Box b1(7.2, 2.2, 3.2);
Box b2;
b1.getBox();
b2.getBox();
Box b3(5.3);
b3.getBox();
Box b4;
b4=b3;
b4.getBox();
Box b6;
}
