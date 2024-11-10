// file 087.cpp   (  Obrobka pomylok..)
// lessons 69 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class MyExeption : public std::exception // Nslidyymo class (exeption)
{
private:
    string ermesg;

public:
    MyExeption(const string mesg) : ermesg(mesg) {} // Konstruktor - zadayemo (ermesg)
    const char *what() const noexcept override
    {
        return ermesg.c_str();
    }
};

int main()
{
    try
    {
        throw MyExeption("Failer alocated memory");
    }
    // catch(const std::exception& e)
    // catch (const std::bad_alloc &e)
    catch (const MyExeption &e)
    {
        // e.what();
        std::cerr << "Error " << e.what() << '\n';
    }
};