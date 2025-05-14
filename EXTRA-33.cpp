#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
    ofstream outfile;
    ifstream infile;
    char str[50];
    char ch;
    int i;
    cout<<"Enter the String to be written in the file- > "<<endl;
    cin.getline(str,sizeof(str));
    outfile.open("file1.txt",ios :: out);
    for(i=0;i<strlen(str);i++)
    {
        outfile.put(str[i]);
    }
    outfile.close();
    infile.open("file1.txt", ios :: in);
    while(infile)
    {
        ch=infile.get();
        cout<<ch;
    }
    infile.close();
    cout<<endl;
}
