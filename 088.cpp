// file 088.cpp   ( Filsovany typy dannyh..)
// lessons 70 {@pathtocpp cpp}

#include <iostream>
#include <string>
typedef unsigned long long ull;
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{   
    // size_t = unsigned long
unsigned long C = -5;
size_t A = -5; 
cout << "C= " << C << "\n";
cout << "A= " << A << "\n";

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// for(size_t i = -10;i < 10; i++)
for(size_t i = 0;i < 10; i++)
{
    cout << arr[i] << " " ;
}
cout << "\n";

int8_t t8 = 3; // char (number)
cout << "int8_t  " << sizeof(int8_t ) << "\n";

int16_t t16  = 16; 
signed short ss = 16; 
cout << "int16_t  " << sizeof(int16_t ) << "\n";

int32_t t32 = 32;
signed int si =  32;
cout << "int32_t  " << sizeof(int32_t ) << "\n";

int64_t t64 = 64;
signed long sl = 64;
cout << "int64_t  " << sizeof(int64_t ) << "\n";

// unsigned
u_int8_t ut8 = 3; // unsigned char (number)
cout << "u_int8_t  " << sizeof(u_int8_t ) << "\n";

u_int16_t ut16  = 16; 
unsigned short uss = 16; 
cout << "u_int16_t  " << sizeof(u_int16_t ) << "\n";

u_int32_t ut32 = 32;
unsigned int usi =  32;
cout << "u_int32_t  " << sizeof(u_int32_t ) << "\n";

u_int64_t ut64 = 64;
unsigned long usl = 64;
cout << "u_int64_t  " << sizeof(u_int64_t ) << "\n";

ull big = 100000000000;

};