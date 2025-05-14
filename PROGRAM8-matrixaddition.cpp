#include<iostream>
using namespace std;
main()
{
int r,c,i,j;
cout<<"Enter the number of Rows"<<endl;
cin>>r;
cout<<"Enter the number of Columns"<<endl;
cin>>c;
int a[r][c],b[r][c],d[r][c];
cout<<"Enter 1st matrix"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter 2nd matrix"<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>b[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
d[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<< d[i][j] ;
}
cout<<endl;
}
}
