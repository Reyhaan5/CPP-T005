#include<iostream>
#include<cstring>
using namespace std;
class Product
{
private:
   int code;
   char name[57];
   float price;
   int stock;
public:
   ~Product()
   {
   cout<<"Dynamic Object Destroyed"<<endl;
   }
   void setProduct();
   void getProduct();
};
void Product :: setProduct()
{
   cout<<"Enter code, name, price and stock of the Product :"<<endl;
   cin>>code;
   cin>>name;
   cin>>price;
   cin>>stock;
}
void Product :: getProduct()
{
   cout<<"Name = "<<name<<endl;
   cout<<"Code = "<<code<<endl;
   cout<<"Price = "<<price<<endl;
   cout<<"Stock = "<<stock<<endl;
}
main()
{
   Product *pob=new Product();
   pob-> setProduct();
   pob-> getProduct();
   delete pob;
}
