#include<iostream>
using namespace std;
main()
{
int n[5],t,i,j;
for(i=0;i<5;i++)
{
cout<<"Enter the array"<<endl;
cin>>n[i];
}

for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(n[i]>n[j])
{
t=n[j];
n[j]=n[i];
n[i]=t;
}
}
}
cout<<"The array in ascending order"<<endl;
for(i=0;i<5;i++)
{
cout<<n[i]<<endl;
}


}

