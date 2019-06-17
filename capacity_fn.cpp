#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    cout<<str<<endl;
    cout<<"capacity of string is";
    cout<<str.capacity()<<endl;
    str.resize(8);
    cout<<str<<endl;
    cout<<str.capacity();
}
