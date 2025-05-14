#include<iostream>
using namespace std;
class student
{
private:
char name[20];
int sem;
int subm[3];
public:
void setter();
void getter();
float avg();
};
void student :: setter()
{
cout<<"Enter the Students name ->"<<endl;
cin>>name;
cout<<"Enter the Semester ->"<<endl;
cin>>sem;
cout<<"Enter the marks of 3 subjects of the student ->"<<endl;
for(int i=0;i<3;i++)
{
cin>>subm[i];
}
}

void student :: getter()
{
cout<<"The student name is ->\n"<<name<<endl;
cout<<"The semester is ->\n"<<sem<<endl;
cout<<"The marks ->"<<endl;
for(int i=0;i<3;i++)
{
cout<<" "<<subm[i];
}
}
float student :: avg()
{
int sum=0,i;
for(int i=0;i<3;i++)
{
sum=sum+subm[i];
}
return sum/3.0;
}
int main()
{
class student s[10];
int n,i;
cout<<"You can enter max 10 students data."<<endl;
cout<<"How many students do you want to enter"<<endl;
cin>>n;
cout<<"Enter "<<n<<"students data"<<endl;

for(i=0;i<n;i++)
{
s[i].setter();
}
cout<<"Enter "<<n<<"students data area as follows "<<endl;
for(i=0;i<n;i++)
{
s[i].getter();
float avgm=s[i].avg();
cout<<"The Average of 3 Subjects:"<<avgm<<endl;
}
}
