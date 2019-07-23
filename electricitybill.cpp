#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,u;
    float bill;
    string name;
    cout<<"Enter the name of user:";
    cin>>name;
    cout<<"Enter the unit consumed:";
    cin>>u;
    if(u<=100)
        bill=u*0.60;
    else if(u<=300)
        bill=60+(u-100)*0.80;
    else
        bill=220+(u-300)*0.90;
    bill+=50;
    if(bill>300)
        bill+=0.15*bill;
    cout<<name<<endl;
    cout<<"Rs "<<bill;

}
