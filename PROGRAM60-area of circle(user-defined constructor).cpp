#include<iostream>
#define PI 3.14
using namespace std;
class Area
{
private:
float radius;
public:
Area();
void input();
};
Area :: Area()
{
radius=3;
}
void Area :: input()
{
cout<<"Radius ="<<radius<<endl;
cout<<"Area of Circle is ->"<<PI*radius*radius;
}
int main()
{
Area circle;

circle.input();
}
