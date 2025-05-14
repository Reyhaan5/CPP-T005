#include<iostream>
using namespace std;
class Student
{
    int id;
    float std;
    string name;
    public:
        void set()
        {
            cout<<"Enter the name, id, std of the Student ->"<<endl;
            cin>>name>>id>>std;
        }
        void get()
        {
            cout<<"Name - > "<<name<<endl;
            cout<<"Id - > "<<id<<endl;
            cout<<"Standard - > "<<std<<endl;
        }
};
main()
{
Student s;
s.set();
s.get();
}
