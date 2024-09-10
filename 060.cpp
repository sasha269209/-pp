//file ?060.cpp   (  ...)
//lessons 36 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

class Animals
{
    public:
unsigned int paws;
bool tale;
string name;

void show_info()
{
    cout << "Name" << name << endl;
    cout << "Paws" << paws << endl;
    cout << "Tale" << tale << endl;
}
}
int main()
{
    Animals cat;
    cat.name = "Murka";
    cat.paws = 4;
    cat.tale = true; 
cat.show_info();
    /*
cout << "Name" << cat.name << endl;
cout << "Paws" << cat.paws << endl;
cout << "Tale" << cat.tale << endl;
    */

    Animals dog;
    dog.name = "Sharik";
    dog.paws = 4;
    dog.tale = false;
dog.show_info();

string name;
name.at;


}