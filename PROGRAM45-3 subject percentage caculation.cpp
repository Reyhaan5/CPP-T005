#include<iostream>
using namespace std;
class report
{
private:
int sub1,sub2,sub3;
float percent=0;
float total=0;
public:
void input()
{
cout<<"Out of 100"<<endl;
cout<<"Enter the marks for subject 1"<<endl;
cin>>sub1;
cout<<"Enter the marks for subject 2"<<endl;
cin>>sub2;
cout<<"Enter the marks for subject 3"<<endl;
cin>>sub3;
total = sub1+sub2+sub3;
cout<<total<<endl;
}
void percentage()
{
percent=(total/300.0)*100.0;
cout<<"The percentage of 3 subjects is -> "<<percent<<"%"<<endl;
}
};
main()
{
class report r;
r.input();
r.percentage();
}
