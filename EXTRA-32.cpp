#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream outfile;
    ifstream infile;
    char file_data[100];
    infile.open("emp.txt", ios :: in);
    infile.get(file_data,sizeof(file_data));
    cout<<"File Data =  "<<file_data<<endl;

    outfile.open("EXTRA29.txt", ios :: out);
    outfile<<file_data<<endl;
    infile.close();
    outfile.close();
}

