//file 047.cpp   (  my first OOP...)
//lessons 36 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

//Stworyuemo class

class Animals
{
    public: //Pryznachayemo polya dostypnymy
    string name; // Pryznachayemo polya
    int kilkist_lap;
    int wik;

// Stworyemo metod pokazy informatsii
void show_info ()
{
cout << "name = " << name << "\n";
cout << "ilkist_lap = " << kilkist_lap << "\n";
cout << "wik = " << wik << "\n";
cout << "\n";
}

};

int main()
{
    
//Stworyuemo obect
Animals cat_Waska;

//Napovnyemo polya objekty cat_Waska
cat_Waska.name = "Waska";
cat_Waska.kilkist_lap = 4;
cat_Waska.wik = 7;

//Analogichno ctworyuemo i napownuemo obekt dog_sharik
Animals dog_shatik;
dog_shatik.name = "Sharik";
dog_shatik.kilkist_lap = 4;
dog_shatik.wik = 3;

// Wywid informatsii
cout << "dog_shatik.name = " << dog_shatik.name << "\n";
cout << "dog_shatik.ilkist_la = " << dog_shatik.kilkist_lap << "\n";
cout << "dog_shatik.wik = " << dog_shatik.wik << "\n";
cout << "\n";

// Wywid informatsii - cherez method
cat_Waska.show_info();
dog_shatik.show_info();
}