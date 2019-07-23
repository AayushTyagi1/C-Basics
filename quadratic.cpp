#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"INPUT THE VALUE OF a,b,c";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0)
    {
        cout<<"Real root exist which are:";
        cout<<(-b+sqrt(d))/2*a;
        cout<<(-b-sqrt(d))/2*a;
    }
    else
    {
        cout<<"Imaginary root exist which are:";
        cout<<-b/(2*a)<<'+'<<sqrt(-d)/2*a<<'i'<<endl;
        cout<<-b/(2*a)<<'-'<<sqrt(-d)/2*a<<'i';
    }
}
