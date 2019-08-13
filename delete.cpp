#include<iostream>
using namespace std;
int main()
{
    int n=50;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    p[i]=i;
    for(int i=0;i<n;i++)
    cout<<p[i]<<' '<<i<<endl;
    delete [] p;
    cout<<"Values at p has been deleted";
    cout<<p[0];
}