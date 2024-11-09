// file 084.cpp   (  Obrobka pomylok..)
// lessons 67 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

double devide(double a, double b)
{
    double result = 0;
    int c ;
    if (b != 0)
    {
        double result = a / b;
        return result;
    }
    else
    {
        // throw result; //
        throw c = 12;
        // throw result = 999; //
    }
}

int main()
{
    try
    {
        /* code */
        devide(3.6, 0);
    }
    catch (int res)
    // catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
        std::cerr << "Error " << res << "\n";
    }
};