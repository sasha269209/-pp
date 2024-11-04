// file 075.cpp   (  Polimorfizm..)
// lessons 62 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Weapon //abstrack class
{
    public:
    virtual void shoot() = 0; // virtual function (mechod)

};

class Pistol : public Weapon
{
    public:
    void shoot() override // Function is override
    {
        cout << "puf   puf" << "\n";
    }
};

class Mashinegun : public Weapon
{
    public:
    void shoot() override // Function is override
    {
        cout << "tratata tratata" << "\n";
    }
};

class Player
{
    public:
    void attack (Weapon * w)
    {
        w->shoot();
    }
};

int main()
{
   Pistol p;
   Mashinegun m;
   Weapon* ptr = &m; // Polimorfizm
   Player pt; //Polimorfizm

   pt.attack(ptr);

}