#include<iostream>
using namespace std;
class staff
{
private:
    int code;
    char name[20];
public:
    void set_info()
    {
        cout<<"Enter the Name and Code of the Staff ->"<<endl;
        cin>>name>>code;

    }
    void get_info()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
    }
};
class teacher : public staff
{
private:
    char dept[20],subject[20];
public:
    void set()
    {
        cout<<"Enter the Department & Subject of the Teaching staff ->"<<endl;
        cin>>dept>>subject;

    }
    void get()
    {
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject : "<<subject<<endl;
    }
};
class officer : public staff
{
private:
    char grade;
    int yoj;
public:
    void enter()
    {
        cout<<"Enter your grade and year of joining->"<<endl;
        cin>>grade>>yoj;
    }
    void output()
    {
        cout<<"Grade : "<<grade<<endl;
        cout<<"Year of Joining : "<<yoj<<endl;
    }
};
main()
{
    teacher t;
    officer o;
    t.set_info();
    t.set();
    t.get_info();
    t.get();
    o.set_info();
    o.enter();
    o.get_info();
    o.output();
}
