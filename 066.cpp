// file 066.cpp   (  Polimorfizm, virtnalnuy clas..)
// lessons 55 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Warior
{
public:
    virtual void attack()
    {
        cout << "Warior - Sword" << "\n";
    }
};

class Mage : public Warior

{
public:
    void attack() override
    {
        cout << "Mage - Fireball" << endl;
    }
};

class Archer : public Warior

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
    Warior *ptr;
    // ptr->show();

    Warior *enemis[3];
    enemis[0] = &w;
    enemis[1] = &a;
    enemis[2] = &m;
    for (int i = 0; i < 3; ++i)
    {
        ptr = enemis[i];
        ptr->attack();
    }
}
