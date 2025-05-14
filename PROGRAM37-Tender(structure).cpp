#include<iostream>
using namespace std;
struct Tender
{
char tender_name[30];
int cost;
char company_name[30];
};
main()
{
struct Tender t[2];
int i;
for(i=0;i<2;i++)
{
cout<<"Enter the Tender name->"<<endl;
cin>>t[i].tender_name;
cout<<"Enter the Tender Cost->"<<endl;
cin>>t[i].cost;
cout<<"Enter the Company name->"<<endl;
cin>>t[i].company_name;
}
for(i=0;i<2;i++)
{
cout<<"Tender Name ->"<<t[i].tender_name<<endl;
cout<<"Cost ->"<<t[i].cost<<endl;
cout<<"Company Name ->"<<t[i].company_name<<endl;
}
}
