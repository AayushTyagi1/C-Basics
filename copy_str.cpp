#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str2;
    char str1[20];
    cout<<"enter string: ";
    getline(cin,str);
    int l;l=str.length();
    str.copy(str1,l,0);
    cout<<str1<<endl;
}
