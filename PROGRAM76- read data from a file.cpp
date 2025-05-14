#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream infile;
infile.open("demo.txt",ios::in);//Opening a file in reading mode
char file_data[100];
infile.getline(file_data,sizeof(file_data));
cout<<"Data read from the file= \n"<<file_data<<endl;
//closing a file
infile.close();
}
