#include<iostream>
using namespace std;
int series()
{
int n,i=1,square=0;
cout<<"Enter the Limit ->"<<endl;
cin>>n;

for(i=1;i<=n;i++)
{
square=square+(i*i);
}
cout<<square;
};

int main()
{

series();


}
