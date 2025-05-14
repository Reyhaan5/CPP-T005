#include<iostream>
using namespace std;

void add(int n1,int n2)
{
    cout<<"Addition of 2 int no.s is - > "<<n1+n2<<endl;
}
void add(float n3,float n4)
{
    cout<<"Addition of 2 float no.s is - > "<<n3+n4<<endl;
}
void add(int n5,float n6)
{
    cout<<"Addition of int and float no is - > "<<n5+n6<<endl;
}
main()
{
   int m1,m2;
   float m3,m4;
   int m5;
   float m6;
   cout<<"Enter 2 int no.s - > "<<endl;
   cin>>m1>>m2;
   add(m1,m2);
   cout<<"Enter 2 float no.s - > "<<endl;
   cin>>m3>>m4;
   add(m3,m4);
   cout<<"Enter int no - > "<<endl;
   cin>>m5;
   cout<<"Enter float no - > "<<endl;
   cin>>m6;
   add(m5,m6);

}
