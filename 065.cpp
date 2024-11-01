// file 065.cpp   (  Polimorfizm, virtnalnuy clas + abstract class..)
// lessons 55 {@pathtocpp cpp}

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

class Child : public Parent

{
public:
    void show() override
    {
        cout << "Child" << endl;
    }
};

class Gr_San : public Parent

{
public:
    void show() override
    {
        cout << "Gr_San" << endl;
    }
};

int main()
{
    Parent p;
    Child c;
    Gr_San g;
    Parent *ptr = &c;

    ptr->show();
    
}
