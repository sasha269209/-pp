// file 079.cpp   (  Shablonni class..)
// lessons 66 {@pathtocpp cpp}

#include <iostream>
#include <string>
#include "079.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    My_class<int> mci(15);
    My_class<double> mcd;
    My_class<bool> mcb(1);
    mcd.set_data (22.45);
    cout << mci;
    cout << mcd;
    cout << mcb;
    
}