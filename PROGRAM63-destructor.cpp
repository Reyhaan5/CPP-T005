#include<iostream>
using namespace std;
class Test
{
    public:
        Test(){
        cout<<"Constructor Executed.."<<endl;
        }
        ~Test()
        {
        cout<<"Destructor Executed.."<<endl;
        }

};
main()
{
    Test t;

}
