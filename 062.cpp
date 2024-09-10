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
Human ()
{
    cout << "Without arguments" << this << endl;
age = 0;
name = " ";
}
Human (int _age, string _name)
{
    cout << "With arguments" << this << endl;
    age = _age;
    name = _name;
}
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
~Human()
{
    cout << "Destructor" << this << endl;
}
private:
int age;
string name;
//protected:
};

int main()
{

Human (22, "Ivan");
Human (33, "Vika");

Human h;



}