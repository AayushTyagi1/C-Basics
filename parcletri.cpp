#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;char c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        c='A';
        for(k=0;k<(2*i+1);k++)
        {
            cout<<c;
            k<(2*i+1)/2?c++:c--;
        }
        cout<<endl;
    }
}

