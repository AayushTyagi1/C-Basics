#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    cout<<str<<endl;
    cout<<"add a character a at the end:"<<endl;
    str.push_back('a');
    cout<<str<<endl;
}
