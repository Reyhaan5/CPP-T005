#include<iostream>
using namespace std;
main()
{
    int marks;
    cout<<"Enter the Marks - > "<<endl;
    cin>>marks;
    if(marks>0 && marks<=39)
    {
        cout<<"Fail"<<endl;
    }
    else if(marks>=40 && marks<50)
    {
        cout<<"Pass Class "<<endl;
    }
    else if(marks>=50 && marks<60)
    {
        cout<<"Second Class"<<endl;
    }
    else if(marks>=60 && marks<70)
    {
        cout<<"First Class "<<endl;
    }
    else if(marks>=70 && marks<80)
    {
        cout<<"Distinction "<<endl;
    }
    else if(marks>=80 && marks<=100)
    {
        cout<<"Excellent"<<endl;
    }
    else
    {
        cout<<"Wrong Input"<<endl;
    }
}
