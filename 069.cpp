// file 069.cpp   (  Virtual Destructor..)
// lessons 57 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Parent
{
public:
    Parent()
    {
        cout << "Constructor Parent" << "\n";
    }
    virtual ~Parent()
    {
        cout << "Destructor Parent" << "\n";
    }
};

class Child : public Parent

{
public:
    Child()
    {
        cout << "Constructor Child" << "\n";
    }
    ~Child()
    {
        cout << "Destructor Child" << "\n";
    }
};

int main()
{
    // Child c;
    
    Parent *ptr = new Child();

    delete ptr;
}
