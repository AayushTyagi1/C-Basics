#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"Enter Number:";
    cin>>n;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    flag==0?cout<<"PRIME":cout<<"NOT PRIME";
}
