// file 048.cpp   ( Incapsulacia, setery, getery...)
// lessons 37 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class Human
{
public: // Wse dostupne z main
    Human()
    {
        cout << "Konstruktor blank  " << this << "\n";
        cout << "\n";
    }

    Human(string _name, int _age, int _hight)
    {
        name = _name;
        age = _age;
        hight = _hight;
        cout << "Konstruktor z argumentamy  " << this << "\n";
        cout << "\n";
    }

    ~Human()
    {
        cout << "Destruktor blank  " << this << "\n";
    }

    int age;
    void set_name(string _name)
    {
        name = _name;
    }
    void set_age(int _age)
    {
        age = _age;
    }
    void set_hight(int _hight)
    {
        hight = _hight;
    }
    void get_info()
    {
        cout << "name - " << name << "\n";
        cout << "age -  " << age << "\n";
        cout << "Hight - " << hight << "\n";
        cout << "\n";
    }

private: // Ne dostupne z mai
    string name;
    int hight;
};

int main()
{
    Human Man("Stepan", 33, 177);

    Human Woman;

    Woman.set_name("Masha");
    Woman.set_age(22);
    Woman.set_hight(175);

    Man.get_info();
    Woman.get_info();

    Human ccc;
}