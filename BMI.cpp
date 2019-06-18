#include<iostream>
using namespace std;
class BMI
{
public:
    int weight;
    float height;
    double BMIfound();
};
double BMI::BMIfound()
{
    return(weight/(height*height));
}
int main()
{
    BMI p;
    cout<<"Enter your weight in KG:";
    cin>>p.weight;
    cout<<"Enter your height in m:";
    cin>>p.height;
    cout<<"BMI found -->"<<p.BMIfound();
}
