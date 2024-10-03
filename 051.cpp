// file 051.cpp   ( OOP  +++..)
// lessons 40 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class AAA
{
public:
    int vektor;

    AAA()
    {
        vektor = 0;
    }
    AAA(int _vector)
    {
        vektor = _vector;
        cout << "Construktor work " << "\n";
    }

    ~AAA()
    {
        cout << "Destruktor work " << "\n";
    }
};

int main()
{
    {
        AAA obj(33);
        cout << "v = " << obj.vektor << "\n";
        obj.vektor = 6;
        cout << "v = " << obj.vektor << "\n";
        obj.~AAA(); //
        cout << "v = " << obj.vektor << "\n";
    }

}