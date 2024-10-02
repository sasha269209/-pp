// file 081cpp   (  Naslidyvannya...)
// lessons 51 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Parent
{
public:
    string massege_1 = "Public";

protected:
    string massege_2 = "Protected";

private:
    string massege_3 = "Private";
};

// class Child : public Parent
class Child : protected Parent
// class Child : private Parent


{
public:
    void show_masege()
    {
        cout << "massege_2  - " << massege_1 << "\n";
    }
};

int main()
{
    Child obj;
    //cout << "obj.massege_1  - " << obj.massege_1 << "\n";
    obj.show_masege();
}
