#include<iostream>
using namespace std;

class product
{
private:
int code;
char name[20];
int quantity;
float price;

public:
void setproduct();
void getproduct();
float investment();
};

void product :: setproduct()
{
cout<<"Enter the Code of the product "<<endl;
cin>>code;
cout<<"Enter the Name of the product"<<endl;
cin>>name;
cout<<"Enter the Quantity of the product"<<endl;
cin>>quantity;
cout<<"Enter the Price of the product"<<endl;
cin>>price;
}
void product :: getproduct()
{
cout<<"The Code of the product -> "<<code<<endl;
cout<<"The Name of the product -> "<<name<<endl;
cout<<"The Quantity of the product -> "<<quantity<<endl;
cout<<"The Price of the product -> "<<price<<endl;
}
float product :: investment()
{
float value=quantity*price;
return value;
}
int main()
{
float value;
product p1;
p1.setproduct();
p1.getproduct();
value=p1.investment();
cout<<"Total Investment"<<value<<endl;
}
