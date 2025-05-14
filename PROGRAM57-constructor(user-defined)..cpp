#include<iostream>
using namespace std;
class Box
{
float width,depth,height;
public:
    Box();
//void setbox();
void getbox();
};
Box::Box()
{
width=0;
depth=0;
height=0;
}
void Box :: getbox()
{
cout<<"Width= "<<width<<endl;
cout<<"Depth= "<<depth<<endl;
cout<<"Height= "<<height<<endl;
}
int main()
{
Box b1;
b1.getbox();
}
