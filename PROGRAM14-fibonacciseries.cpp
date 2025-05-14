#include<iostream>
using namespace std;
main()
{
int t1=0,t2=1,n,next=0,i;
cout<<"Enter a number"<<endl;
cin>>n;
if(n<=0)
{
cout<<"Enter a positive integer"<<endl;
}
else if(i==1)
{
cout<<t1<<endl;
}
else if(i<1)
{
cout<<t1<<", "<<t2;
for(i=3;i<=n;i++)
{
next=t1+t2;
cout<<", "<<next;
t1=t2;
t2=next;
}

}


}
