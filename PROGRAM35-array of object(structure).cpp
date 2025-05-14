#include<iostream>
using namespace std;
struct student
{
char name[20];
int marks[3];
float sum=0;
float percentage;
};
main()
{
struct student s[3];
int i,j;
for(i=0;i<3;i++)
{
cout<<"Enter the Students name ->"<<endl;
cin>>s[i].name;
cout<<"Enter the marks of 3 subjects of the student (max marks=100)-> "<<endl;
for(j=0;j<3;j++)
{
cin>>s[i].marks[j];
;
}
}
for(i=0;i<3;i++)
{
cout<<"Name ->"<<endl;
cout<<s[i].name<<endl;
cout<<"Marks of 3 subjects of the student (max marks=100)-> "<<endl;
for(j=0;j<3;j++)
{
cout<<s[i].marks[j]<<endl;;
s[i].sum=s[i].sum+s[i].marks[j];
}

s[i].percentage=(s[i].sum/300)*100;
cout<<"The Percentage is ->"<<s[i].percentage<<endl;
}
}

