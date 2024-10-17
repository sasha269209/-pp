// file 059_pointers.h   (         ..)
// lessons 47 {@pathtocpp cpp}

#ifndef SASHA_059
#define SASHA_059

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class pointers
{
private:
    int x;
    int y;

public:
    pointers();
    pointers(int x, int y);
    void show();
    pointers operator+(pointers other);
    pointers operator-(pointers other);
    pointers operator*(pointers other);
    pointers operator/(const pointers &other);
    pointers operator%(const pointers &other);
    bool operator==(const pointers &other) const;
    bool operator<(const pointers &other) const;
    bool operator>(const pointers &other) const;
    friend std::ostream &operator<<(std::ostream &os, const pointers &obj);
};

#endif