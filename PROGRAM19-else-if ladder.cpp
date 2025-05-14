#include<iostream>
using namespace std;
main()
{
int fare;
cout<<"Enter Your fare for the train journey"<<endl;
cin>>fare;

if(fare>=100 && fare<=500)
cout<<"GENERAL"<<endl;
else if(fare>=500 && fare<=1000)
cout<<"FIRST"<<endl;
else if(fare>1000 && fare<=2000)
cout<<"3AC"<<endl;
else if(fare>2000 && fare<=3000)
cout<<"2AC"<<endl;
else if(fare>3000 && fare<=4000)
cout<<"1AC"<<endl;
else
cout<<"Wrong Input"<<endl;
}
