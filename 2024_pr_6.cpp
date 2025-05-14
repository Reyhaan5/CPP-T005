#include<iostream>
using namespace std;
class Student
{
    int age;
    char name[30];
    int roll_no;
public:
    void getdata()
    {
        cout<<"Enter the Student's name -"<<endl;
        cin>>name;
        cout<<"Enter the Student's age -"<<endl;
        cin>>age;
        cout<<"Enter the Student's Roll no -"<<endl;
        cin>>roll_no;
    }
    void printdata()
    {
        cout<<"Student's name -"<<name<<endl;
        cout<<"Student's Age -"<<age<<endl;
        cout<<"Student's Name -"<<age<<endl;
    }
};
class result : public Student
{
private:
    int m1;
    int m2;
    int total;
    float per;
public:
    void get_marks()
    {
        cout<<"Enter the Marks for 2 subjects :-" <<endl;
        cin>>m1>>m2;
    }
    void print_marks()
    {
        cout<<"Marks for - >"<<endl;
        cout<<"Subject 1 : "<<m1<<endl;
        cout<<"Subject 1 : "<<m2<<endl;
    }
    void cellpercentage();
};
void result ::  cellpercentage()
    {
       total=m1+m2;
       per=total/200.0;
       cout<<"Percentage is :-" <<per*100<<endl;
    }
main()
{
    result r;
    r.getdata();
    r.get_marks();
    r.printdata();
    r.print_marks();
    r.cellpercentage();

}
