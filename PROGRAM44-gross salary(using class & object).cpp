#include<iostream>
using namespace std;
class salary
{
private:
int bs,ta,da;
float gs;
public:
void gross_salary()
{
cout<<"Enter the BASIC SALARY ->"<<endl;
cin>>bs;
ta=bs*0.50;
da=bs*0.40;
gs=bs+ta+da;
cout<<"GROSS SALARY ->"<<gs;
}
};
main()
{
struct salary s;
s.gross_salary();
}
