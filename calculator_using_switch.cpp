#include<iostream>
using namespace std;
int main()
{
    int x,y;char o;
    cout<<"\t\t*****Calculator*****"<<endl;
    repeat:
    cout<<"Enter the values in the format a + b|a - b|a * b|a / b|a % b :\n";
    cin>>x;
    here:
    cin>>o>>y;
    switch(o)
    {
        case '+':
            x=x+y;
            break;
        case '-':
            x=x-y;
            break;
        case '*':
            x=x*y;
            break;
        case '/':
            if(y!=0)
            x=x/y;
            else
                cout<<"DBZE"<<endl;
            break;
        case '%':
            x=x%y;
            break;
        default :
            cout<<"Incorrect format";
            goto repeat;
    }
    cout<<x<<endl;
    goto here;
}
