#include<iostream>
using namespace std;
class Mediastore
{
    int code;
    char title[30];
    int quant;
    float price;
public:
    void ent_media()
    {
        cout<<"Enter the Code :- "<<endl;
        cin>>code;
        cout<<"Enter the Title :- "<<endl;
        cin>>title;
        cout<<"Enter the Price :- "<<endl;
        cin>>price;
        cout<<"Enter the Quantity :- "<<endl;
        cin>>quant;
    }
    void print_media()
    {
        cout<<"The Code :- "<<code<<endl;
        cout<<"The Title :- "<<title<<endl;
        cout<<"The Price :- "<<price<<endl;
        cout<<"The Quantity :- "<<quant<<endl;
    }
};
class Book :public Mediastore
{
    int no;

 public:

    void  books_bill()
     {
         cout<<"How many Books you want to take :- "<<endl;
         cin>>no;
         string genre[no];
         int price[no];
         int i;
         for(i=0;i<no;i++)
         {
              cout<<"Enter the price of the book :- "<<endl;
              cin>>price[i];
              cout<<"Enter the genre of the book :- "<<endl;
              cin>>genre[i];
         }
         for(i=0;i<no;i++)
         {
              cout<<"No of Books "<<no<<endl;
              cout<<"Genre "<<genre[i]<<endl;
              cout<<"price "<<price[i]<<endl;
         }
     }

};
class DVD : public Mediastore
{
    int length;
    float rpd;
    int nod;
public:
    void enter_DVD()
    {
        cout<<"Enter the time in minutes  of DVD: -"<<endl;
        cin>>length;
        cout<<"Enter the Rent Per Day  of DVD : -"<<endl;
        cin>>rpd;
        cout<<"Enter the No of Days : -"<<endl;
        cin>>nod;
    }
    void dvd_rent_bill()
    {
        cout<<"Total Bill to be paid :- "<<rpd*((int)nod)<<endl;
    }
    void print_DVD()
    {
        cout<<"Time in minutes  of DVD: -"<<length<<endl;
        cout<<"The Rent Per Day  of DVD: -"<<rpd<<endl;
        cout<<"The No of Days: -"<<nod<<endl;
    }
};
main()
{
    DVD d;
    d.ent_media();
    d.enter_DVD();
    d.print_media();
    d.print_DVD();
    d.dvd_rent_bill();
    Book b;
    b.ent_media();
    b.print_media();
    b.books_bill();
}
