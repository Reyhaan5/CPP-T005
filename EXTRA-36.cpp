#include<iostream>
using namespace std;
void series()
{
    int i;
    int n;
    int s;
    cout<<"Enter the Limit - > "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i*i<<endl;
        s+=(i*i);
    }
    cout<<"Sum is "<<s<<endl;
}
void show()
{
    cout<<"->->->->->-<-<-<-<-<-"<<endl;
    series();
    cout<<"->->->->->-<-<-<-<-<-"<<endl;
}
void arrange()
{
    int a[5];
    int i,j;
    int temp;
    cout<<"Enter the Array - > "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Sorting the Array - > "<<endl;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                continue;
            }
            else
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"Arranged Array - > "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
}
main()
{
    //show();
    arrange();
}
