#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int x,y;
    cout<<"enter x,y"<<endl;
    cin>>x>>y;
    cout<<"x to the power y is:"<<power(x,y);
    return 0;
}
int power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return(a*power(a,b-1));
}
