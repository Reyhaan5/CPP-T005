#include<iostream>
using namespace std;
class Subtract
{
public:
    int n;
    void enter()
    {
        cout<<"Enter the no :"<<endl;
        cin>>n;
    }
    void display()
    {
        cout<<"Number n : "<<n<<endl;
    }
    void sub(Subtract a,Subtract b)
    {
        n=a.n-b.n;
    }
};
main()
{
    Subtract s1,s2,s3;
    s1.enter();
    s2.enter();
    s3.sub(s1,s2);
    s3.display();
}
