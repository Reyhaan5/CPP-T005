#include<iostream>
#include<string.h>
using namespace std;
class Nokia
{
private:
static string phone_name;
public:
static void name()
{
cout<<"Phone :"<<phone_name;
}
static void set_name(string name)
{
phone_name=name;
}
};
string Nokia::phone_name=" ";
main()
{
Nokia :: set_name("Nokia 2600");
Nokia :: name();

}
