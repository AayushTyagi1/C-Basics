#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    unsigned int x=5,y=10,c;//5=0000101 10=0001010
    c =x & y;cout<<c<<endl;
    c =x | y;cout<<c<<endl;
    c =~x;cout<<c<<endl;
    c =x ^ y;cout<<c<<endl;
    c=x>>2;cout<<c<<endl;
    c=x<<2;cout<<c<<endl;
}
