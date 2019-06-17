#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter string";
    getline(cin,str);
    string::reverse_iterator rev;
    for(rev=str.rbegin();rev!=str.rend();rev++)
    cout<<*rev;
    cout<<endl;
}

