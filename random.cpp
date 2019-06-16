#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    unsigned int z;
    int a,b,c;
    cout<<"enter a number";
    cin>>z;
    srand(z);
    a=rand();
    b=rand();
    c=rand();
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    cout<<rand();
}
