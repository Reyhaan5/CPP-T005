#include<iostream>
using namespace std;
class nest
{
public:
    void show()
    {
        cout<<"->->->->-><-<-<-<-"<<endl;
        display();
        cout<<"->->->->-><-<-<-<-"<<endl;
    }
    void display()
    {
        cout<<"   Hello World    "<<endl;
    }
};
main()
{
    nest n;
    n.show();
}
