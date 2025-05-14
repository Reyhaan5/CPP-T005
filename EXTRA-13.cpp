#include<iostream>
using namespace std;
main()
{
    float h,w;
    float bmi;
    cout<<"Enter the height(cm) & weight(kg) of the person - > "<<endl;
    cin>>h>>w;
    bmi=(w/(h*h));
    if(bmi<18.5)
    {
        cout<<"Underweight"<<endl;
    }
    else if(bmi>18.5 && bmi<24.9)
    {
        cout<<"Normal"<<endl;
    }
    else if(bmi>25 && bmi<29.9)
    {
        cout<<"Overweight"<<endl;
    }
    else if(bmi>30)
    {
        cout<<"Obese"<<endl;
    }
    else
    {
        cout<<"Wrong Input"<<endl;
    }

}
