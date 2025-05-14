#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
ifstream infile;
ofstream outfile;
char str[50],ch;
int i;
cout<<"Enter the string to be written in th file "<<endl;
gets(str);
outfile.open("demo81.txt",ios::out);
for(i=0;i<strlen(str);i++)
{
outfile.put(str[i]);
}
outfile.close();
infile.open("demo81.txt", ios :: in);
cout<<"Data Read from the file is :"<<endl;
while(infile)
{
ch=infile.get();
cout<<ch;
}
infile.close();
cout<<endl;
}
