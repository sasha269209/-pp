// file 052.cpp   ( Konstruktor kopiyuwannya+++..)
// lessons 41 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class A
{
    double data;

public:
    // A() { data = 0.0; }
    A() : data(0.0) 
    {
        cout << "Konstruktor bez argumentiv" << "\n";
    }
    A(double _data)
    {
        cout << "Konstruktor z argumentom" << "\n";
        data = _data;
    }
    A(const A &obj) // Konstruktor kopiyuwannya
    {
        cout << "Konstruktor kopiyuwannya" << "\n";
        data = obj.data;
    }
    ~A() 
    {
        cout << "Desrtukror" << "\n";
    }
};

void foo (A obj)
{

}

int main()
{
    A obj(45.33);
    foo(obj);


}