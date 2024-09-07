//file 031.cpp   (  ...)
//lessons 21 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

template<typename T1, typename T2>

T1 foo_2(T1 a, T2 b)
{
    return a + b;
}

int main()
{
int i = 10;
float f = 5.4f;
double d = 45.32;
char c = 'r';

cout << foo_2(10.4, 3) << endl;
cout << foo_2(10, 3.7) << endl;

cout << foo_2(f, c) << endl;
}