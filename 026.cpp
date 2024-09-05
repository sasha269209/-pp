//file 026.cpp   (  ...)
//lessons 17 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

namespace MyNS
{
    int a = 7;
    int b = 44;
    int c = 20;
}

using MyNS::a;

int main()
{

cout << a << "  " <<  MyNS::b << endl;

int a = 88;
cout << a << "  " <<  MyNS::a << endl;

}