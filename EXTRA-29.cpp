#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream outfile;
    outfile.open("EXTRA29.txt",ios :: out );
    outfile<<"Hello India"<<endl;
    outfile.close();
}
