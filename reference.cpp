/*What Is a Reference?
A reference is an alias; when you create a reference, you initialize it with the name of another object,
the target. From that moment on, the reference acts as an alternative name for the target, and anything
you do to the reference is really done to the target.
You create a reference by writing the type of the target object, followed by the reference operator (&),
followed by the name of the reference.*/
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<a<<endl;
    r=7;
    cout<<a<<endl;
    int b=2;
    r=b;
    cout<<a<<endl<<b;
}
