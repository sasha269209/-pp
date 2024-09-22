//file 036.cpp   (  References - posylannya...)
//lessons 26 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;


void foo_1(int a) //funkcia robyt kopiy zminnoi
{
    ++a;
    cout << "foo_1 - addres of a = " << &a << "\n";
}

void foo_2(int &a) //Funkcia pratcue z posylannym
{
    ++a;
    cout << "foo_2 - addres of a = " << &a << "\n";
}

int main()
{
int a =10;
cout << "main - addres of a = " << &a << "\n";

foo_1(a);
foo_2(a);

cout << a << "\n";

// Riznutsya 
int *ptr_a = &a; //Pryznachennya vkaziwnyka
int &ref_a = a; //Pryznachennya pocylannya

// Rozmirb v pamyti
cout << "vkazinn    = " << sizeof(ptr_a) << "\n";
cout << "posylannya = " << sizeof(ref_a) << "\n";
}
