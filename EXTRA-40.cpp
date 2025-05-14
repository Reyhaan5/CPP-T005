#include<iostream>
using namespace std;
class Wall
{
private:
    int length,breadth;
public:
    Wall (int l,int b)
    {
        length=l;
        breadth=b;
    }
    Wall()
    {
        length=6;
        breadth=7;
    }
    Wall(Wall & ob)
    {
        length=ob.length;
        breadth=ob.breadth;
    }
    void area()
    {
        cout<<"Area = "<<length*breadth<<endl;
    }
};
main()
{
    Wall w1(4,5),w2,w3(w2);
    w1.area();//Parameterized constructor
    w2.area();//User Defined constructor
    w3.area();//Copy Constructor


}
