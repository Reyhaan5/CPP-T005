#include<iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout<<"Constructor Invoked..."<<endl;
    }
    ~Test()
    {
        cout<<"Destructor Invoked...."<<endl;
    }
};
main()
{
    Test t;

}
