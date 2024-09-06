//file 029.cpp   (  ...)
//lessons 20 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

void foo2();
void foo();

int main()
{
foo();

}

void foo2()
{
    cout << "I am fuction foo2" << endl;
}

void foo()
{
    cout << "I am function foo" << endl;
    foo2();
}