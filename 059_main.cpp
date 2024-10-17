// file 059_main.cpp   (         ..)
// lessons 47 {@pathtocpp cpp}

#include <iostream>
#include <string>
#include "059_pointers.h"
using std::cin;
using std::cout;
using std::string;

int main()
{
    pointers p_1(3, 3);
    pointers p_2(8, 8);
    pointers p_3 = p_1 + p_2;
    p_3.show();
    pointers p_4 = p_2 - p_1;
    p_4.show();
    pointers p_5 = p_2 * p_1;
    p_5.show();
    pointers p_6 = p_2 / p_1;
    p_6.show();
    pointers p_7 = p_2 % p_1;
    p_7.show();
    if (p_1 > p_2)
    {
        cout << " p_1 > p_2 " << "\n";
    }
    else
    {
        cout << " p_1 !> p_2 " << "\n";
    };
    cout << "\n";
    cout << p_2 << p_1 << "\n";

    cout << p_2 * p_1 << "\n";

}