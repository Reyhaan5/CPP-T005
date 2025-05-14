#include<iostream>
using namespace std;
main()
{
int n,sum,d1,d2,d3;
cout<<"Enter any three digit number ->";
cin>>n;

d3=n%10;        // Last Digit Extraction
cout<<d3<<endl;
n=n/10;        //Deleting the last digit because it is int
d2=n%10;
cout<<d2<<endl;
n=n/10;
d1=n%10;
cout<<d1<<endl;
cout<<"The sum is ->"<<d1+d2+d3<<endl;
}
