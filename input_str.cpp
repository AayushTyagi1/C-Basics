//input string by 4 ways and concatenate using +
#include <iostream>
#include <string>
using namespace std;
int main()
{
string prompt("What is your name: "),
name,
line( 40, '-'),
total = "Hello ";
cout << prompt;
getline( cin, name);
total = total + name;//concatenate
cout << line << endl
<< total << endl;
cout << " Your name is "
<< name.length() << " characters long!" << endl;
cout << line << endl;
return 0;
}
