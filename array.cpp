#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter limit:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
}
