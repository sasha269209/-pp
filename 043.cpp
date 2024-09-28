//file 043.cpp   ( struct...)
//lessons 33 {@pathtocpp cpp}

#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

struct Caps
{
   short height; // Height in cm
   short weight; // Weight in gr
   bool full; // Full=1 (true) / Empty=0 (false)
   void Emties_cap()
   {
    full = 0;
   }
   void fiilling(bool a)
   {
    full = a;
   }

};

void filing_cap (Caps &obj)
{
    obj.full = true;
}

void show_info(Caps &obj)
{
    cout << "obj.height " << obj.height << "\n";
    cout << "obj.weight " << obj.weight << "\n";
    cout << "obj.full  " << obj.full << "\n";
}

int main()
{

Caps cap_1;
cap_1.height = 10;
cap_1.weight = 45;
cap_1.Emties_cap();
cap_1.fiilling(true);
cout << "cap_1.full = " << cap_1.full << "\n";

Caps cap_2;
cap_2.height = 20;
cap_2.weight = 55;
cap_2.Emties_cap();
cap_2.fiilling(false);
cout << "cap_2.full = " << cap_2.full << "\n";

Caps cap_3;
cap_3.height = 30;
cap_3.weight = 85;
cap_3.Emties_cap();


cout << cap_1.height << "\n";
cout << cap_1.weight << "\n";
cout << cap_1.full << "\n";

filing_cap(cap_1);

show_info(cap_1);
show_info(cap_2);

Caps array[3] = {cap_1, cap_2, cap_3};
// array[0] = cap_1;
// array[1] = cap_2;
// array[2] = cap_3;

for (int i=0; i<3; ++i)
{
    cout << "Cap_N = " << i+1 << "\n";
    filing_cap(array[i]);
    show_info(array[i]);

    cout << "\n";
}
cap_1.Emties_cap();
show_info(cap_1);

cout << "sizeof(Caps)  " << sizeof(cap_1) << "\n";

return 0;
}