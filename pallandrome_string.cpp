#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int flag=0;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=1;break;
        }
    }
    flag==0?cout<<"PALLANDROME":cout<<"NOT PALLANDROME";
}
