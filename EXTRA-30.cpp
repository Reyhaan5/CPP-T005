#include<iostream>
#include<fstream>
using namespace std;
class employee
{
    char name[30];
    char des[50];
    float net_sal;
    ofstream outfile;
public:
    void enter()
    {
        cout<<"Enter name - > "<<endl;
        cin>>name;
        cout<<"Enter Designation - > "<<endl;
        cin>>des;
        cout<<"Enter Net Salary- > "<<endl;
        cin>>net_sal;
    }
    void save_to_file()
    {
        outfile.open("emp.txt", ios :: out );
        outfile<<"Employee name - > "<<name<<endl;
        outfile<<"Employee Designation - > "<<des<<endl;
        outfile<<"Employee Net Salary - > "<<net_sal<<endl;
        outfile.close();
    }
    void print()
    {
        cout<<"Employee name - > "<<name<<endl;
        cout<<"Employee Designation - > "<<des<<endl;
        cout<<"Employee Net Salary - > "<<net_sal<<endl;
    }
};
main()
{
    employee e;
    e.enter();
    e.save_to_file();
    e.print();
}
