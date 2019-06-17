#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    string::iterator it;
    //print without space
    for(it=str.begin();it != str.end();it++)
    {
        if(*it!=' ')
            cout<<*it;
    }
    cout<<endl;
}

