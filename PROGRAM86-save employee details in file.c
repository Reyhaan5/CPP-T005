//71,72,72,73,74,75,76,77,78,79,81,84,85,86
#include<iostream>
#define PI 3.14
#include<fstream>
using namespace std;

class Employee
{
protected:
    int id;
    char name[30];
    float salary;
public:
    void set()
    {
        cout<<"Enter the Employee name->"<<endl;
        cin>>name;
        cout<<"Enter the Employees id ->"<<endl;
        cin>>id;
        cout<<"Enter the Salary ->"<<endl;
        cin>>salary;
    }
    void get()
    {
        cout<<"ID ->"<<id<<endl;
        cout<<"Name ->"<<name<<endl;
        cout<<"Salary ->"<<salary<<endl;
    }
    void save_to_file()
    {
        cout<<"Function to save employee details to the file "<<endl;
        ofstream outfile;
        outfile.open("Employee86.txt",ios :: out);
        char delimiter;
        outfile<<"ID"<<id<<endl<<name<<endl<<salary<<endl;
        outfile.close();
    }
} ;
main()
{
    Employee e;
    e.set();
    e.save_to_file();
    e.get();

}
