#include<iostream>
using namespace std;
class number
{
int x,y;
public:
void set()
{
cout<<"Enter thee number->"<<endl;
cin>>x>>y;
}
void get()
{
cout<<"value x = "<<x<<endl;
cout<<"value y = "<<y<<endl;
}
void operator++()
{
x++;
y++;
}
void operator--()
{
x--;
y--;
}
};
main()
{
number n1,n2,n3;
n1.set();
n1.get();
++n1;
n1.get();
n2.set();
n2.get();
--n2;
n2.get();

}
