// file 067.cpp   (  Polimorfizm, virtnalnuy clas + abstract class..)
// lessons 55 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Enemi // abstract class - "interface"
{
public:
    virtual void attack() = 0; //Virtual mechod
};

class Warior : public Enemi
{
public:
    void attack() override
    {
        cout << "Warior - Sword" << "\n";
    }
};

class Mage : public Enemi

{
public:
    void attack() override
    {
        cout << "Mage - Fireball" << endl;
    }
};

class Archer : public Enemi

{
public:
    void attack() override
    {
        cout << "Arher - Bow" << endl;
    }
};

int main()
{
    Warior w;
    Mage m;
    Archer a;
    // Parent *ptr = &g;
    Enemi *ptr;
    // ptr->show();

    Enemi *enemis[3];
    enemis[0] = &w;
    enemis[1] = &a;
    enemis[2] = &m;
    for (int i = 0; i < 3; ++i)
    {
        ptr = enemis[i];
        ptr->attack();
    }
}
