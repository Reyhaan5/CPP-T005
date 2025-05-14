#include<iostream>
using namespace std;
class Mobile
{
    int model_no;
    char name[30];
    int quantity;
    float price;
public:
    void accept()
    {
        cout<<"Enter the name of the Company "<<endl;
        cin>>name;
        cout<<"Enter the Model no : "<<endl;
        cin>>model_no;
        cout<<"Enter the Price : "<<endl;
        cin>>price;
        cout<<"Enter Quantity : "<<endl;
        cin>>quantity;
    }
    void display()
    {
        cout<<"Model no :-"<<model_no<<endl;
        cout<<"Mobile name :-"<<name<<endl;
        cout<<"Price :-"<<price<<endl;
        cout<<"Quantity :-"<<quantity<<endl;
    }
    float valuation()
    {
        return (float)quantity*price;//Type conversion
    }
};
main()
{
    Mobile m[3];//Array of Objects
    Mobile *ptr[3];
    int i;
    float value;
    cout<<"Entering the data "<<endl;
    for(i=0;i<3;i++) //Extra using pointers only this way it can be done
    {
        ptr[i]=&m[i];
        (*ptr[i]).accept();
    }
    cout<<"Entered Data"<<endl;
    for(i=0;i<3;i++)
    {
        ptr[i]=&m[i];
        ptr[i]->display();
        value=ptr[i]->valuation();
        cout<<"Valuatio = "<<value<<endl;
    }
}
