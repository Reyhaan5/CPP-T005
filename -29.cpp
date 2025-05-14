#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream infile;
    char ch[100];
    infile.open("EXTRA29.txt", ios :: in);
    infile.getline(ch,sizeof (ch));
    cout<<"Data read from the file= "<<ch<<endl;
    infile.close();
}
