#include<iostream>
using namespace std;
class person
{
    int height,weight;
public:
    person(int h,int w);
    //void set();
    void get()
    {
        cout<<"Height - > "<<height<<endl;
        cout<<"Weight - > "<<weight<<endl;
    }
};
person :: person(int h, int w)
{
    height=h;
    weight=w;
}
main()
{
    person p(175,67);
    p.get();
}
