#include<iostream>
using namespace std;
class Example
{
public:
int a;
Example add(Example Ea,Example Eb)
{
Example EC;
EC.a=Ea.a+Eb.a;
return(EC);
}
};
main()
{
Example E1,E2,E3;
E1.a=50;
E2.a=100;
E3.a=0;
cout<<"value of obj 1:"<<E1.a<<endl;
cout<<"Value of obj 2:"<<E2.a<<endl;
cout<<"Value of obj 3:"<<E3.a<<endl;
E3=E3.add(E1,E2);
cout<<"value of obj 1:"<<E1.a<<endl;
cout<<"Value of obj 2:"<<E2.a<<endl;
cout<<"Value of obj 3:"<<E3.a<<endl;
}
