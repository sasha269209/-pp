// file 057.cpp   ( constanta        ..)
// lessons 45 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
#define PI 3.1415 // Stworennya constanty - durectywa - #define

int foo(const int d) // In function -create copi of data (with we take)
{
    return d + 8;
}

int foo_2(const int d) // In function -create copi of data (with we take)
{
    return d + 8;
}

int foo_3(int ggg) // in this function we can change ggg
{
    ggg = ggg + 1;
}

int foo_3_const(const int ggg) // in this function we cant change ggg
{
}

class CLASS
{
private:
    int data;

public:
    int foo_clas_const(int dd) const // we do not have posibility to chane class date (becauce of const)
    {
        return dd * 2;
    }

    int foo_clas(int dd) // In this function we do not have posibility use const
    {
        data = dd * 2; // if we use const (we cant to change data)
        return data;
    }
};

const int AAA = 99; // Stworennya constanty - kluch slowo - const

int main()
{
    cout << AAA << "\n";
    cout << foo(AAA) << "\n";   // In function -create copi of data (with we take)
    cout << foo_2(AAA) << "\n"; // In function -create copi of data (with we take)
}