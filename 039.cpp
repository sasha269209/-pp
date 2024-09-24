//file 039.cpp   ( #define ...)
//lessons 29 {@pathtocpp cpp}

#include <iostream>
#include <algorithm>
#define PI 3.1415
#define uint unsigned long int
#define DEBUG
#define add 1+5
#define add_a_b(a,b) a+b

using std::cout;
using std::endl;


int main()
{
cout << PI << "\n";

unsigned long int size;
uint size_2 = 1000000000;

#ifdef DEBUG
cout << "Debag text 1" << "\n";
#endif

#ifndef DEBUG
cout << "Debag text 2" << "\n";
#endif

cout << "add = " << add << "\n";

cout << "add_a_b = " << add_a_b(5, 7) << "\n";

return 0;
}