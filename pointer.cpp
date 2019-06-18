#include<iostream>
using namespace std;
int add(int *p,int *q)
{
    *p=*p+*q;
    return(*p);
}
int main()
{
    int a,b,*p;
    p=&a;
    a=2,b=4;
    cout<<"value of a : "<<*p<<endl;
    cout<<"address of a : "<<p<<endl;
    cout<<"address of pointer p : "<<&p<<endl;
    cout<<"addition using function : "<<add(&a,&b);
}
