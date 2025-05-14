 #include<iostream>
using namespace std;
main()
{
int n,i,digit,rev=0;
string str;
cout<<"Enter a number ->"<<endl;
cin>>n;
while(n>0)
{
i=n%10;
n=n/10;
rev=rev*10+i;
}
string num;
while(rev>0)
{
digit=rev%10;


switch(digit)
{
case 0:cout<<"ZERO ";
       break;
case 1:cout<<"ONE ";
       break;
case 2:cout<<"TWO ";
       break;
case 3:cout<<"THREE ";
       break;
case 4:cout<<"FOUR ";
       break;
case 5:cout<<"FIVE ";
       break;
case 6:cout<<"SIX ";
       break;
case 7:cout<<"SEVEN ";
       break;
case 8:cout<<"EIGHT ";
       break;
case 9:cout<<"NINE ";
       break;
}
rev=rev/10;

}
cout<<num<<endl;
}

