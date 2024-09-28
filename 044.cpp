//file 044.cpp   ( struct...)
//lessons 33 {@pathtocpp cpp}

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

struct cow
{
    string name;  // name of cow
    short weight; // Weight of cow in kg
    short age;    // ege of cow in kg
    bool milk_give; // 0 - no (false) or 1 - yes (True)

    void show_cow ()
{
    cout << "Name - " << name << "\n";
    cout << "Age - " << age << "\n";
    cout << "Weight - " << weight << "\n";
    cout << "Giwe_Milk - " << milk_give << "\n";
}
    void status_give_milk (bool give)
{
    milk_give = give;
}

};

void show_cow (cow &cow_name)
{
    cout << "Name - " << cow_name.name << "\n";
    cout << "Age - " << cow_name.age << "\n";
    cout << "Weight - " << cow_name.weight << "\n";
    cout << "Giwe_Milk - " << cow_name.milk_give << "\n";
}


int main()
{

cow cow_Burenka;
cow cow_Masha;
cow cow_Zoya;

cow_Burenka.name = "Burenka";
cow_Burenka.age = 2;
cow_Burenka.weight = 155;

cow_Masha.name = "Masha";
cow_Masha.age = 4;
cow_Masha.weight = 160;

cow_Zoya.name = "Zoya";
cow_Zoya.age = 1;
cow_Zoya.weight = 120;

cout << "cow_Burenka.name  " << cow_Burenka.name << "\n";

show_cow (cow_Burenka);
cow_Burenka.show_cow();
cow_Burenka.status_give_milk(true);
cow_Burenka.show_cow();

cow arr_cow[3] = {cow_Burenka, cow_Masha, cow_Zoya};

cow arr_cow_2[3];
arr_cow_2[0] = cow_Burenka;
arr_cow_2[1] = cow_Masha;
arr_cow_2[2] = cow_Zoya;

cout << arr_cow[0].name;
  cout << "\n";
for (int i = 0; i<3;++i)
{
    cout << "\n";
    arr_cow[i].show_cow();
}

cout << "dimention of structure - " << sizeof(cow_Burenka) << "\n";


return 0;
}