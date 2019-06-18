#include<iostream>
#include<string>
using namespace std;
class myclass
{
    public:
    string name;
    int age;
    void print(){
    cout<<"Name-"<<name<<endl<<"Age-"<<age;
    }
};
int main()
{
    myclass obj;
    cout<<"Enter your name and age:";
    cin>>obj.name;
    cin>>obj.age;
    obj.print();
    return 0;
}
