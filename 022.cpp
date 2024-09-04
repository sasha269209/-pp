//file 022.cpp   ( type char  ...)
//lessons 14 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{
    char c;
    for(int i =0;i<256;++i)
    {
        cout << "Code:  " << i << "  " << c << endl;
        c++;
    }

}