#include<iostream>
#include<string.h>
using namespace std;
class mobile
{
private:
int mod;

char name[50];
public:
float price;
void input()
{
cout<<"Enter name ->"<<endl;
cin>>name;
cout<<"Enter Model no->"<<endl;
cin>>mod;
cout<<"Enter Price ->"<<endl;
cin>>price;
}
void output()
{
cout<<"Name ->"<<name<<endl;
cout<<"Model no ->"<<mod<<endl;
cout<<"Price ->"<<price<<endl;
}
};
main()
{
class mobile m[10];
int i;
for(i=0;i<10;i++)
{
m[i].input();
}
for(i=0;i<10;i++)
{
if(m[i].price>10000)
{
m[i].output();
}
}

}
