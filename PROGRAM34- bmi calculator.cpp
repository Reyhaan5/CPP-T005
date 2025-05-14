#include<iostream>
using namespace std;
main()
{
float height,weight,bmi;
cout<<"Enter the Height(in meters) of the person->"<<endl;
cin>>height;
cout<<"Enter the Weight(in kgs) of the person->"<<endl;
cin>>weight;
bmi=weight/(height*height);
cout<<"BMI-"<< bmi<<endl;
if(bmi<18.5)
{
cout<<"You are underweight"<<endl;
}
else if(bmi>=18.5 && bmi<=24.9)
{
cout<<"You have a Optimal weight"<<endl;
}
else if(bmi>=25 && bmi<29.9)
{
cout<<"You are overweight"<<endl;
}
else if(bmi>=30)
{
cout<<"You are Obese"<<endl;
}
}
