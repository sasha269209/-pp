//file 027.cpp   (  ...)
//lessons 18 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
    return a+b;
}

double sum(double a)
{
    return 0.0;
}

int main()
{

cout << sum(10,15) << endl;
cout << sum(10.5f,15.7f) << endl;
cout << sum(5) << endl;

}