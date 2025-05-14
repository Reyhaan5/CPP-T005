#include<iostream>
using namespace std;
class series
{
int n;
float sum=0,i;
public:
void input();
};
inline void series :: input()
{
cout<<"Enter no:"<<endl;
cin>>n;
float sum=0;
for(i=1.0;i<=n;i++)
{
sum=sum+(1.0/(i*i));
}
cout<<"SUM is ->"<<sum<<endl;

}
main()
{
class series s;
s.input();
}
