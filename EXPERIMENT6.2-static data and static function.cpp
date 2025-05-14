#include<iostream>
using namespace std;
class Member
{
private:
static int A;
static int B;
static int C;
public:
static void display()
{
cout<<"The value of A is "<<A<<endl;
cout<<"The value of B is "<<B<<endl;
cout<<"The value of C is "<<C<<endl;
}
};
int Member :: A=20;
int Member :: B=30;
int Member :: C=40;
main()
{
Member mb;
cout<<"Print the static member through object name :"<<endl;
mb.display();
cout<<"Print the static member through class name :"<<endl;
Member::display();
}
