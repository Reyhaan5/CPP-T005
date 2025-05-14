#include<iostream>
struct cricket
{
char name[30];
int runs;
int wickets;
};
using namespace std;
main()
{
int n,i;
cout<<"Enter the number of Cricketers ->"<<endl;
cin>>n;
struct cricket c[n];
for(i=0;i<n;i++)
{
cout<<"Enter the Name of the Cricketer ->"<<endl;
cin>>c[i].name;
cout<<"Enter the numbers of Runs Scored ->"<<endl;
cin>>c[i].runs;
cout<<"Enter the number of Wickets taken->"<<endl;
cin>>c[i].wickets;
}
for(i=0;i<n;i++)
{
cout<<"Name    Runs Scored    Wickets taken "<<endl;
cout<<""<<c[i].name;
cout<<"    "<<c[i].runs;
cout<<"                "<<c[i].wickets;
}
}
