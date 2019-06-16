//to create a dice
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<<"throwing a dice:"<<endl;
    srand(time(0));
    cout<<(rand()%6+1);
}
