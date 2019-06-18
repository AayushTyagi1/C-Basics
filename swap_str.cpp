#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str1;
    str="everything is possible";
    str1="mission impossible";
    cout<<"swapped strings: "<<endl;
    str.swap(str1);
    cout<<str<<endl;
    cout<<str1;
}

