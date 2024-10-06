// file 058.cpp   ( static       ..)
// lessons 46 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class AAA
{
public:
    static int count; // Iniciall static (in publik)
    AAA()
    {
        ++count; // Add ++count in construktor
    }
    ~AAA()
    {
        --count; // Add --count in destruktor
    }
};
int AAA::count = 0; // Set 0 (before main)
int main()
{
    cout << AAA::count << "\n"; // statuc cout = 0
    {
        AAA f;
        AAA b;
        cout << AAA::count << "\n"; // statuc cout = 2
    }
    cout << AAA::count << "\n"; // statuc cout = 0 (after destructor)
    AAA k;
    cout << AAA::count << "\n"; // statuc cout = 1
}