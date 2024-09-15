//file ?063cpp   (  ...)
//lessons 39 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class A
{
    public:
int g;

A(int _g)
{
g = _g;    
cout << "Konstruktor work" << endl;
};
~A()
{
cout << "Destruktor work" << endl;
};
void show_g()
{
    cout << "g= " << g << endl;
}
};



int main()
{

    {
    A ttt(55);
    ttt.show_g();
    ttt.~A();
    ttt.show_g();

    
    }

//A h ()


}