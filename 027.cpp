//file 027.cpp   (  ...)
//lessons 18 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

int main()
{
int a(5);
int b(2);

float c = a/b;
cout << "float c = a/b = " << c << endl;

c = (float)a/b;
cout << "float c = (float)a/b = " << c << endl;

c = static_cast<float> (a)/b;
cout << "float c = static_cast<float> (a)/b = " << c << endl;
}