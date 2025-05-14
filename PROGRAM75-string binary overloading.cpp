#include<iostream>
#include<string.h>
using namespace std;
class string1
{
    char str[20];
    public:
        void accept_string()
        {
            cout<<"Enter a string:\n";
            cin>>str;
        }
        void display_string()
        {
            cout<<str<<endl;
        }
        string1 operator+(string1 x)
        {
            string1 s;
            strcpy(s.str,str);
            strcat(s.str,x.str);
            return s;
        }
};
main()
{
    string1 s1, s2, s3;
    s1.accept_string();
    s2.accept_string();
    cout<<"First String: "<<endl;
    s1.display_string();
    cout<<"Second String: "<<endl;
    s2.display_string();
    s3=s1+s2;
    cout<<"First String: "<<endl;
    s1.display_string();
    cout<<"Concatinated String: "<<endl;
    s3.display_string();
}
