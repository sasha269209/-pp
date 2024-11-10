// file 085.cpp   (  Obrobka pomylok..)
// lessons 68 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

    int i;
    double d;
    float f;
    bool b;
    char c;

    try
    {
        // throw d;
        // throw 25.6f;
        throw "a";
    }
    catch (int)
    // catch(const std::exception& e)
    {
        std::cerr << " int " << "\n";
    }
    catch (double res)
    {
        std::cerr << " double " << "\n";
    }
        catch (float res)
    {
        std::cerr << " float " << "\n";
    }
    catch (...)
    {
        std::cerr << " ??? " << "\n";
    }
};