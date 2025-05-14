#include<iostream>
using namespace std;

class car_manufacturer
{
private:
    char name[30];
public:
    void set_name()
    {
        cout<<"Enter the Cars name ->"<<endl;
        cin>>name;
    }
    void get_name()
    {
        cout<<"Car Name : "<<name<<endl;
    }
};
class car_model : public car_manufacturer
{
private:
    char model_name[30];
    int model_no;
public:
    void set_model()
    {
        cout<<"Enter Model name and no ->"<<endl;
        cin>>model_name>>model_no;
    }
    void get_model()
    {
        cout<<"Model name : "<<model_name<<endl;
        cout<<"Model no : "<<model_no<<endl;
    }
};
class car : public car_model
{
private:
    int car_no;
    char color[30];
public:
    void set_car()
    {
        cout<<"Enter the Car no & Color->"<<endl;
        cin>>car_no>>color;
    }
    void get_car()
    {
        cout<<"Car no : "<<car_no<<endl;
        cout<<"Color : "<<color<<endl;
    }
};
main()
{
class car c;
c.set_name();
c.set_model();
c.set_car();
c.get_name();
c.get_model();
c.get_car();
}
