#include<iostream>
using namespace std;
main()
{
int m[3][3],i,j;
cout<<"Enter the Matrix Element"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>m[i][j];
}
}
cout<<"Entered Matrix is"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<m[i][j]<<"   ";
}
cout<<endl;
}
cout<<"Transpose Matrix"<<endl;
for(j=0;j<3;j++)
{
for(i=0;i<3;i++)
{
cout<<m[j][i]<<"   ";
}
cout<<endl;
}
}
