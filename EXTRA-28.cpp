#include<iostream>
using namespace std;
void swap(int *n3,int *n4)
{
    int temp;
    temp=*n3;
    *n3=*n4;
    *n4=temp;
}

main()
{
    int n1,n2;
    int *n1ptr;
    int *n2ptr;
    n1ptr=&n1;
    n2ptr=&n2;
    cout<<"Enter a number --> "<<endl;
    cin>>n1;
    cout<<"Enter another number -->"<<endl;
    cin>>n2;
    cout<<"Values before Swap using pointer --> "<<endl;
    cout<<"Number 1 - > "<<*n1ptr<<endl;
    cout<<"Number 2 - > "<<*n2ptr<<endl;
    cout<<"Address"<<endl;
    cout<<"Address of Number 1 - > "<<&n1<<endl;
    cout<<"Address of Number 2 - > "<<&n2<<endl;
    swap(&n1,&n2);
    cout<<"After Swap --> "<<endl;
    cout<<"Number 1 - >"<<*n1ptr<<endl;
    cout<<"Number 2 - >"<<*n2ptr<<endl;
}
