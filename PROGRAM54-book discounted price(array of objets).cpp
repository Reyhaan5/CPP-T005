#include<iostream>
using namespace std;
class Book
{
char name[30];
int price;
public:
void input()
{
cout<<"Enter the name of the book ->"<<endl;
cin>>name;
cout<<"Enter the price of the book ->"<<endl;
cin>>price;
}
void discount()
{
price=price-(0.10*price);
cout<<"Name ->"<<name<<endl;
cout<<"Discounted Price ->"<<price<<endl;
}
};

main()
{
Book b[5];
int i;
for(i=0;i<5;i++)
{
b[i].input();
}
for(i=0;i<5;i++)
{
b[i].discount();
}
}
