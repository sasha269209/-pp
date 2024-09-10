//file ?061cpp   (  ...)
//lessons 37 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Human
{
public:
void set_age(int _age)
{
    age = _age;
}
void set_name(string _name)
{
    name = _name;
}
void show_data()
{
    cout << "Name " << name << endl ;
    cout << "Age " << age << endl;
}
string get_name()
{
    return name;
}
int get_age()
{
    return age;
}
private:
int age;
string name;
//protected:
};

int main()
{
Human man;
man.set_age(19);
man.set_name("Ivan");
man.show_data();

Human woman;
woman.set_age(22);
woman.set_name("Barbara");
woman.show_data();
woman.set_age(23);
cout << woman.get_age() << endl;


}