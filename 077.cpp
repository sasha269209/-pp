// file 077.cpp   (  Vidnosyny mij klasamy (zZALEJNIST ASOCIACIA AGREGACIA KOMPOZYCIA)..)
// lessons 64 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

//KOMPOZYCIA

class Human
{
    class Brain
    {
    public:
        void think()
        {
            cout << "I am thinkin" << "\n";
        }
    };
    Brain b;

public:
    void Think()
    {
        b.think();
    }
};

int main()
{
    Human h;
    h.Think();
}