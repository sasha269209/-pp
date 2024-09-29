//file 048.cpp   ( Incapsulacia, setery, getery...)
//lessons 37 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;


/*
// Modyfikatory dostypy

public:
private:
protected:
*/

class Human
{
    public: //Wse dostupne z main

//SETER
// stworuemo metod dlya zapownennya poliw (w private)
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


//GETER
void get_info()
{
    cout << "name - " << name << "\n";
    cout << "age -  " << age << "\n";
    cout << "Hight - " << hight << "\n";
    cout << "\n";
}

string get_name()
{
    return name;
}
    private: // Ne dostupne z mai
string name;
int hight;
    protected:
};


int main()
{
Human Man;
Man.age = 33; // Dostupni polya z publick

//Zapownuemo polya private
Man.set_name("Petro");
Man.set_hight(182);
Man.set_age(33);

// Analogichno stworuemo objekt Woman
Human Woman;

Woman.set_name("Masha");
Woman.set_age(22);
Woman.set_hight(175);

Man.get_info();
Woman.get_info();
 
cout << "Woman.get_name = " << Woman.get_name() << "\n";
cout << "\n";

Man.set_age(34);

Man.get_info();

}