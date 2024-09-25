//file 041.cpp   ( enum...)
//lessons 31 {@pathtocpp cpp}

#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;


int main()
{
enum my_enum {ZERO, ONE, TWO, THRE, FOUR};  //Start from 0 (dy fifine)

enum my_enum_2 {TWO_ = 2, THRE_, FOUR_};  //Start from 2 (our task)

my_enum::THRE;

cout << my_enum::ONE << "\n";

return 0;
}