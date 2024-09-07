//file 030.cpp   (  ...)
//lessons 21 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

template<typename T>

T foo(T a, T b)
{
    return a + b;
}

int main()
{
cout << foo(11, 14) << endl; //int
cout << foo(111.7, 144.6) << endl; // float - double
}