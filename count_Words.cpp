#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l=s.length();
    int c=1;
    for(int i=0;i<l;i++)
    {
        if(s[i]==32&&s[i+1]!=32&&s[i+1]!='\0')
            c++;
    }
    cout<<c;
}

