//file 032.cpp   ( Recursia ...)
//lessons 22 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

void recurs (int count)
{
    cout << "count - vhid = " << count << endl ;
    if (count >0 )
    {
    recurs (count - 1);
    cout << "count - out = " << count << endl ;
    }
}

int main()
{
recurs (10);
}