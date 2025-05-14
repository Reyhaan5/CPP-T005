#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream outfile;
outfile.open("demo.txt",ios::out);//Opening a file in reading mode
outfile<<"My name is Reyhaan ansari.my roll no is T005"<<endl;
outfile.close();
}
