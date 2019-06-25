#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i;
    cout<<"Enter limit:";
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    for(i=2;i<n;i++)
    {
        c=a+b;
        cout<<c<<"\t";
        a=b;b=c;
    }
}
