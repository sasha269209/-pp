// file 053.cpp   ( Konstruktor kopiyuwannya+++..)
// lessons 41 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class A
{
    double *data = new double;

public:
    //A() : data(0.0) 
    A()
    {
        cout << "Konstruktor bez argumentiv" << "\n";
        data = new double(0.0);
    }
    A(double _data)
    {
        cout << "Konstruktor z argumentom" << this << "\n";
        data = new double (_data);
    }
    A(const A &obj) // Konstruktor kopiyuwannya
    {
        cout << "Konstruktor kopiyuwannya" << this << "\n";
        // data = obj.data;  // Wariant A (Problem z podwiqynoy ochustkoy pamyati v destruktpri)
        data = new double(*obj.data);  // Wariant B (novuy - prawulnuy)
        
    }
    ~A() 
    {
        cout << "Desrtukror" << this << "\n";
        delete data;
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