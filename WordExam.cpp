#include<iostream>
#include<cstring>
using namespace std;
class Word
{
    string strdata;
    char cmax,cmin;
public:
    void inp(string str)
    {
    strdata=str;
    }
    void calminmax()
    {
    char maxi,mini; maxi=mini=strdata[0];
    for(int i=0;i<strdata.length();i++)
    {
        if(maxi<strdata[i])
            maxi=strdata[i];
        if(mini>strdata[i])
            mini=strdata[i];
    }
    cmax=maxi;cmin=mini;
}
    void display()
    {
    cout<<strdata<<endl;
    cout<<cmax<<endl<<cmin;
    }
};

int main()
{
    Word w;
    string s;
    getline(cin,s);
    w.inp(s);
    w.calminmax();
    w.display();
}
