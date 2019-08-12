#include<iostream>
using namespace std;
struct s
{
    int p,q,r;
};
int main()
{
    struct s s1,s2,s3;
    s1={1,2,3};
    s2=s1;
    cout<<s2.p<<endl<<s2.q<<endl<<s2.r<<endl;
    int a,b,c;
    a=b=c=1;
    cout<<"Value of a,b,c:"<<a<<' '<<b<<' '<<c<<endl;
}