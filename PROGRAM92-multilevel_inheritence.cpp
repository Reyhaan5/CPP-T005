#include<iostream>
using namespace std;
class Student
{
protected:
int roll_no;
public:
void set_number()
{
cout<<"Enter the Roll no ->"<<endl;
cin>>roll_no;
}
void get_number()
{
cout<<"Roll number ->"<<roll_no<<endl;
}
};
class Test : public Student
{
protected:
int sub1,sub2;
public:
void set_marks();
void get_marks();
};
void Test :: set_marks()
{
cout<<"Enter marks of 2 subjects"<<endl;
cin>>sub1>>sub2;
}
void Test :: get_marks()
{
cout<<" marks  sub1"<<sub1<<endl;
cout<<" marks  sub2"<<sub2<<endl;
}
class Result : public Test
{
int total;
float avg;
public:
void display();
};
void Result :: display()
{
total=sub1+sub2;
avg=total/2.0;
cout<<"TOTAL ->"<<total<<endl;
cout<<"Average ->"<<avg<<endl;
}
main()
{
Result student1;
student1.set_number();
student1.set_marks();
student1.display();


}
