#include<iostream>
using namespace std;
class square
{
private:
int num;
int s;

public:
void calculate();
};
void square :: calculate()
{
cout<<"Enter the number ->"<<endl;
cin>>num;
s=num*num;
cout<<"Square of nuumber "<<num<< " is "<<s<<endl;
}
int main()
{
class square s1;
s1.calculate();
}
