#include<iostream>
using namespace std;
enum direction {east, west, north, south};
int main()
{
direction dir;
int userdir;
cout<<"Enter the valid direction code i.e. 0-east, 1-west, 2-north, 3-south"<<endl;
cin>>userdir;
switch(userdir)
{
case east:cout<<"EAST";
          break;
case west:cout<<"WEST";
          break;
case north:cout<<"NORTH";
           break;
case south:cout<<"SOUTH";
           break;
default:cout<<"Wrong Direction";
           break;

}
}
