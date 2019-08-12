#include<iostream>
using namespace std;
int sq(int a)
{
    return(a*a);
};
int main()
{
    int s=3;
    cout<<"Function call"<<sq(3)<<endl;
    int (*p)(int);
    p=&sq;
    cout<<"pointer to fn"<<(*p)(s);
}