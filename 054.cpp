// file 054.cpp   ( Konstruktor  - perewantajennya+++..)
// lessons 42 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class pointers
{
private:
    short x;
    short y;
    short z;

public:
    pointers() {}
    pointers(short _x, short _y, short _z)
    {
        cout << "Konstr - 3 data" << "\n";
        x = _x;
        y = _y;
        z = _z;
    }
    pointers(short _x, short _y)
    {
        cout << "Konstr - 2 data" << "\n";
        x = _x;
        y = _y;
        z = 0;
    }
    pointers(short _x)
    {
        cout << "Konstr - 1 data" << "\n";
        x = _x;
        y = 0;
        z = 0;
    }

    pointers(double f, char c, short gg, int dfd)
    {
    }

    pointers(float f) { cout << "float  " << "\n"; }
    pointers(double y) { cout << "double  " << "\n"; }
    pointers(unsigned y) { cout << "unsignet  " << "\n"; }
    pointers(long int y) { cout << "long int  " << "\n"; }
    pointers(long double y) { cout << "long double  " << "\n"; }
    pointers(long long y) { cout << "long long  " << "\n"; }
};

int main()
{
    // pointers kkk(4.44);  //

    // pointers ddd(4.44f); // f float

    // pointers dfd (44u);   // u unsigned

    // pointers ll(3l);
    // pointers gf(3.99l); // long double
    pointers jj(3ll); // long long

    // u int
    // u double
    // l long
    // l l - long long
    // long double
}