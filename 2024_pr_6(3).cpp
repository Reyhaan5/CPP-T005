#include<iostream>
#include<string.h>
using namespace std;
void reverse()
{
    int n;
    int i;
    cout<<"How many nos do you want to enter -"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter no:- "<<endl;
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<"Entered no:- "<<endl;
        cout<<a[i]<<endl;
    }
}
void palindrome()
{
    char a[30],b[30];
    cout<<"Enter String  1 - "<<endl;
    cin>>a;
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        cout<<"String is a Palindrome :- "<<endl;
    }
    else
    {
        cout<<"Not a palindrome ... "<<endl;
    }

}
main()
{
    //reverse();
    palindrome();

}
