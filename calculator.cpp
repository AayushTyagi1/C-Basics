#include<iostream>
using namespace std;
int main()
{
    int x,y,z;char o;
    cout<<"\t\t*****Calculator*****"<<endl;
    repeat:
    cout<<"Enter the values in the format a + b|a - b|a * b|a / b|a % b :";
    cin>>x;
    here:
    cin>>o>>y;
    if(o=='+')
        z=x+y;
    else if(o=='-')
        z=x-y;
    else if(o=='*')
        z=x*y;
    else if(o=='/'&&y!=0)
        z=x/y;
    else if(o=='%')
        z=x%y;
    else
    {
        cout<<"Incorrect input:"<<endl;
        goto repeat;
    }
    cout<<z<<endl;
    x=z;
    goto here;
}
