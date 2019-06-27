#include<iostream>
using namespace std;
int main()
{
   int c = 0;
   loop: c ++;
   cout << "c: " << c << "\n";
   if (c < 5)
   goto loop;
   cout << "Complete. c: " << c << ".\n";
   return 0;
}
