#include<iostream>
#include<typeinfo>
using namespace std;
struct A
{};
struct B {};
int main()
{
    struct A a1,a2;
    struct B b1,b2;
    if(typeid(a1)==typeid(struct A))
    cout<<"equal\n";
    else 
    cout<<"different\n";
    if(typeid(b1)==typeid(struct A))
    cout<<"equal";
    else 
    cout<<"different";
}