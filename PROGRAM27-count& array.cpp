#include<iostream>
using namespace std;
main()

{
    int n[5],i,sum=0;
    cout<<"Enter the number ->"<<endl;
    for(i=0;i<5;i++)
    {
     cin>>n[i];
     while(n[i]>99)
     {
        cout<<"Re-enter the number as it is 3 digit number "<<endl;
        cin>>n[i];
     }
     sum+=n[i];
    }
cout<<"Sum is "<<sum<<endl;
}
