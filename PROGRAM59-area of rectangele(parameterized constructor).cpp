#include<iostream>
using namespace std;
class Area
{
private:
int length,breadth;
public:
Area(int l,int b);
void output();
};
Area :: Area(int l, int b)
{
length=l;
breadth=b;
}

void Area :: output()
{
cout<<"Length ="<<length<<endl;
cout<<"Breadth ="<<breadth<<endl;
cout<<"Area of Rectangle ->"<<length*breadth;
}

main()
{
int l,b;
cout<<"Enter Length and breadth ->"<<endl;
cin>>l>>b;
Area rect(l,b);
rect.output();
}
