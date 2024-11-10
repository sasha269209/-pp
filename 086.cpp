// file 086.cpp   (  Obrobka pomylok..)
// lessons 69 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
// Check operator "new" 
long lenth = 100000000000000; // Keryemo (malo = 5 - ok) (bagato = 9999999999 - problem)
try
{
    int* arr = new int[lenth]; //Wydilyaemo pamyat
    // if good - next ; else  - go to catch
    cout << "Memory OK" << "\n";
    delete[] arr;
}
// catch(const std::exception& e)
catch(const std::bad_alloc& e)
{
    // e.what();
    std::cerr << "Error " << e.what() << '\n';
}



};