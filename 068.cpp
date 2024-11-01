// file 068.cpp   (  Rombovydne nasliduwannya..)
// lessons 56 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Parent
{
public:
    virtual void show()
    {
        cout << "Parent" << "\n";
    }
};

class Child_1 : virtual public Parent

{
};

class Child_2 : virtual public Parent

{
};

class Gr_San : public Child_1, public Child_2

{
};

int main()
{
    Gr_San g;
    // g.Child_1::show();
    g.show();
}
