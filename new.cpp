#include<iostream>
using namespace std;
int main()
{
	int size,i;
	int *ptr;

	cout<<"Enter limit of an Array : ";
	cin>>size;
	ptr = new int[size];
	//Creating memory at run-time and return first byte of address to ptr.
    for(i=0;i<size;i++)
    {
	   cin>>ptr[i];
    }
    for(i=0;i<size;i++)
    cout<<ptr[i]<<" ";
    delete[] ptr;
    //deallocating all the memory created by new operator
}
