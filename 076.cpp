// file 076.cpp   (  Kros platfom kod..)
// lessons 62 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
   #ifdef linux
   cout <<"Linux" << "\n";
   #elif WIN32
   oout << "Windows" << "\n";
   #elif macos
   cout << "Macos" << "\n";
   #endif




    #ifdef WIN32
    system("pause");
    #endif
}