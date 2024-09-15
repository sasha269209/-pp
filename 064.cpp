//file ?063cpp   (  ...)
//lessons 39 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Koty
{
    // protected:
    private:
string kolir;
int age;
string name;
    public:
void set_kolir (string _kolir)
{
    kolir = _kolir;
}
void set_age (int _age)
{
    age = _age;
}
void set_name (string _name)
{
    name = _name;
}


void show_info()
{
cout << "kolir  " << kolir << endl;
cout << "age  " << age << endl;
cout << "Name  " << name << endl;
}
int get_age ()
{
    return age;
}
};

int main()
{
Koty kit_Myrchuk;
// kit_Myrchuk.kolir = "Siruy";
kit_Myrchuk.set_kolir("Siruy");
// kit_Myrchuk.age = 4;
kit_Myrchuk.set_age(4);
cout << "Kit_Myrchk = age = " << kit_Myrchuk.get_age() << endl;
// kit_Myrchuk.name = "Myrchuk";
kit_Myrchuk.set_name("Myrchuk");
kit_Myrchuk.show_info();

// cout << "kit_Myrchuk.kolir   " << kit_Myrchuk.kolir << endl;

Koty kit_Vaska;
// kit_Vaska.kolir = "Chorhyj";
kit_Vaska.set_kolir ("Chornyj");
// kit_Vaska.age = 2;
kit_Vaska.set_age(2);
// kit_Vaska.name = "Vaska";
kit_Vaska.set_name("Vaska");
kit_Vaska.show_info();



}