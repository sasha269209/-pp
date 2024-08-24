//file 007.cpp   (Operatory porivnyannya ...)
//lessons 05 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 20;
    bool c;

    c = a <  b;
    cout << "c= " << c << endl;
    c = a >  b;
    cout << "c= " << c << endl;
    c = a <=  b;
    cout << "c= " << c << endl;
    c = a >=  b;
    cout << "c= " << c << endl;
    c = a == b;
    cout << "c= " << c << endl;
    c = a !=  b;
    cout << "c= " << c << endl;
    cout << endl;

    a = 10;
    c = (a);
    cout << "c= " << c << endl;
    c = (!a);
    cout << "c= " << c << endl;
    cout << endl;

    a = 0;
    c = (a);
    cout << "c= " << c << endl;
    c = (!a);
    cout << "c= " << c << endl;
    cout << endl;
}