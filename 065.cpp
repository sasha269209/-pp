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

Koty (string _kolir, int _age, string _name)
{
    kolir = _kolir;
    age = _age;
    name = _name;
    cout << "Konstruktor with argument" << this << endl;
}
Koty ()
{
    cout << "Konstruktor - pystuy" << this<< endl;
}
~Koty()
{
    cout << "DE_struktor" << this << endl;
}
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
Koty kit_Myrchuk("Siruj",4,"Myrchuk");

Koty kit_Vaska("Chornuy",2,"Vaska");


Koty DDD;


}