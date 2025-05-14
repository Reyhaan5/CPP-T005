                                                                                                                                                                                                                                                                                                                                                                                                    #include<iostream>
using namespace std;

class circle
{
private:
double r;
double area;
public:
void read();
void compute()
{
area=3.14*r*r;
}
void display();
};

inline void circle :: read()
{
cout<<"Enter the radius ->"<<endl;
cin>>r;
compute();
}

inline void circle :: display()
{
cout<<"The Area of Circle ->  "<<area<<endl;
}

main()
{
circle c1;
c1.read();

c1.display();

}
