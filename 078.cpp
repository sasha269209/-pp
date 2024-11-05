// file 078.cpp   (  Vidnosyny mij klasamy (zZALEJNIST ASOCIACIA AGREGACIA KOMPOZYCIA)..)
// lessons 64 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

//  AGREGACIA

class Watch
{
public:
    void time()
    {
        cout << "Time " << "\n";
    }
};

class Human
{
public:
    void seetime(Watch *w)
    {
        w->time();
    }
};

int main()
{
    Watch w;
    Human h;
    h.seetime(&w);
}