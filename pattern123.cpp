#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter limit :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=n;j++)
        {
            cout<<k;
            if(k<n)
                k++;
        }
        cout<<endl;
    }
}
