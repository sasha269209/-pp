//file 024.cpp   (  ...)
//lessons 17 {@pathtocpp cpp}

#include <iostream>

using std::cout;
using std::endl;

void show_data(int a)
{
    cout << "a in function = " << a << endl;
}

namespace MyNS
{
    int a;    
}

int main()
{

int a (5);
MyNS::a = 10;
cout << "a im main = " << a <<endl;
cout << "a im MyNS = " << MyNS::a << endl;

// scope
{
    int a(4);
    cout << "a in bracets (in score) = " << a <<endl;
}

show_data(a);  

}