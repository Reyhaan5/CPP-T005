#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char name[30];
    int age;
    char add[50];
    char city[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    cout<<"Enter your address :"<<endl;
    cin>>add;
    cout<<"Enter your city :"<<endl;
    cin>>city;
    cout<<"Entered Data :"<<endl;
    cout<<"Name "<<name<<endl;
    cout<<"Age "<<age<<endl;
    cout<<"Address "<<add<<endl;
    cout<<"City "<<city<<endl;
    ofstream outfile;
    outfile.open("info.txt",ios::out);
    {
        outfile<<"Name : "<<name<<endl;
        outfile<<"Age : "<<age<<endl;
        outfile<<"Address : "<<add<<endl;
        outfile<<"City : "<<city<<endl;


    }
    outfile.close();


}
