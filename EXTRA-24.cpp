#include<iostream>
using namespace std;
class birthday
{
    int day,month,year;
public:
    void set()
    {
        cout<<"Enter the day, month & year of birth - > "<<endl;
        cin>>day>>month>>year;
    }
    void get()
    {
        cout<<"BirthDay- > "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
main()
{
    birthday b;
    birthday *ptr;
    ptr=&b;
    (*ptr).set();
    ptr->get();
}
