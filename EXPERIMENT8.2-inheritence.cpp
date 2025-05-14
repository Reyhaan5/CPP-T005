#include<iostream>
using namespace std;
class Student
{
protected:
   int id;
   char name[30];
public:
   void setter()
   {
      cout<<"Enter the Id and Name of the Student ->"<<endl;
      cin>>id>>name;
   }
   void getter()
   {
      cout<<"ID: "<<id<<" Name: "<<name<<endl;
   }
};
class test : public Student
{

protected:
   int sub1, sub2;
public:
   void setMarks()
   {
      cout<<"Enter the Marks of two subjects :"<<endl;
      cin>>sub1>>sub2;
   }
   void getMarks()
   {
      cout<<"Physics: "<<sub1<<"Chemistry: "<<sub2<<endl;
   }
};
   class Result :public test
   {
   private:
      int total;
      float avg;
   public:
      disp_result()
      {
         total=sub1+sub2;
         avg=total/2.0;
         cout<<"Total Marks :"<<total<<endl;
         cout<<"Average :"<<avg<<endl;
      }
   };
   main()
   {
      Result r;
      r.setter();
      r.getter();
      r.setMarks();
      r.getMarks();
      r.disp_result();
   }


