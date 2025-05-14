#include<iostream>
using namespace std;
main()
{
    int m[2][3];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter the Matrix Element - > "<<endl;
            cin>>m[i][j];
        }

    }
    cout<<"Entered matrix is - > "<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<"Transpose Matrix - >"<<endl;
    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
