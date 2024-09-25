//file 040.cpp   ( Ternarnuy operator ...)
//lessons 30 {@pathtocpp cpp}

#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;


int main()
{
int a=5, b=10, c;

if (a<b)
{
    cout << "a less than b" << "\n";
}
else
{
    cout << "a more than b" << "\n";
}


a < b ? cout << "a less than b" << "\n" : cout << "a more than b" << "\n";


c = (a < b) ? a:b;
cout << c << "\n";

return 0;
}