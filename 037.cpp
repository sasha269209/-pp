//file 037.cpp   (  Zavdannya...)
//lessons 27 27.1 {@pathtocpp cpp}

#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

void foo_1 (int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}
void foo_2 (int &a, int &b)
{
    int c =0;
    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;

    *ptr_c = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = *ptr_c;
}

void swap_1 (int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap_2 (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

template<typename T>
void swap_3(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{

int a = 10;
int b = 45;
cout << "a= " << a << "  b= " << b << "\n";
//foo_1 (a,b); 
//foo_2 (a,b); 
//swap_1(a, b);
//swap_2(a, b);
//swap_3(a, b);
std::swap(a,b);
cout << "a= " << a << "  b= " << b << "\n";
}